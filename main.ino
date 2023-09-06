#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <avr/pgmspace.h>

#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 32     // OLED display height, in pixels
#define OLED_RESET -1        // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C  // See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const int ledPin = A3;    // Use pin A3 for the LED
const int otherPin = A4;  // Use pin A4 for otherPin

bool pythonProgramRunning = false;  // Flag to track if the Python program is running

void setup() {
  // Initialize LED pin as an output
  pinMode(ledPin, OUTPUT);

  // Initialize OLED display with the correct I2C address
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ;  // Don't proceed, loop forever
  }
  display.display();

  // Print a message to the serial monitor
  Serial.begin(9600);
  Serial.println("Arduino CPU & RAM Usage Monitor");

  // Wait for a brief moment to allow the Python program to start
  delay(1000);  // Adjust the delay as needed
}

void loop() {
  // Check if data is available on the serial port
  if (Serial.available() > 0) {
    // Read the CPU usage data from the serial port
    float cpuUsage = Serial.parseFloat();

    // Read the RAM usage data from the serial port (assuming it's sent as a float)
    float ramUsage = Serial.parseFloat();

    // Set the flag to indicate that the Python program is running
    pythonProgramRunning = true;

    // Clear the OLED display
    display.clearDisplay();

    // Display CPU usage on the left side of the OLED
    display.setTextSize(1);               // Set text size
    display.setTextColor(SSD1306_WHITE);  // Set text color
    display.setCursor(0, 0);              // Set cursor position
    display.println("CPU Usage:");
    display.setTextSize(2);      // Set text size
    display.setCursor(0, 16);    // Set cursor position
    display.print(cpuUsage, 2);  // Display CPU usage with 2 decimal places

    // Display RAM usage on the right side of the OLED
    display.setTextSize(1);
    display.setCursor(70, 0);c:\Users\2007m\Documents\Arduino\HelloWorld\HelloWorld.pde
    display.println("RAM Usage:");
    display.setTextSize(2);
    display.setCursor(70, 16);
    display.print(ramUsage, 2);
    display.print("%");

    // Display the OLED contents
    display.display();
  } else {
    // If the Python program is not running, display "Serial module not available"
    if (pythonProgramRunning == false) {
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(SSD1306_WHITE);
      display.setCursor(0, 0);
      display.println("Serial module");
      display.setCursor(0, 16);
      display.println("not available");
      display.display();
    }
  }
}
