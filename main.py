import psutil
import serial
import time

# Define the Arduino's COM port (adjust this based on your Arduino's COM port)
arduino_port = 'COM3'  # Change to your Arduino's COM port

# Initialize the serial connection to the Arduino
ser = serial.Serial()
ser.baudrate = 9600
ser.port = arduino_port
ser.open()

while True:
    # Get the CPU usage percentage
    cpu_usage = psutil.cpu_percent(interval=1)  # Update CPU usage every 1 second

    # Get the RAM usage percentage
    ram_usage = psutil.virtual_memory().percent

    # Send both CPU and RAM usage to the Arduino
    ser.write(f"{cpu_usage:.2f},{ram_usage:.2f}\n".encode())

    # Print CPU and RAM usage to the console (optional)
    print(f"CPU Usage: {cpu_usage:.2f}% | RAM Usage: {ram_usage:.2f}%")

