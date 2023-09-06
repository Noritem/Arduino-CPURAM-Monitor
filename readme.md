# Arduino CPU and RAM Monitor 📊

Monitor your computer's CPU and RAM usage using Arduino and Python, displaying real-time statistics on an OLED screen. This project demonstrates how to visualize CPU and RAM usage on an OLED display connected to an Arduino board via a USB cable.

## Prerequisites 📋

Before you begin, make sure you have the following:

- [Arduino IDE](https://www.arduino.cc/en/software) installed on your computer.
- An Arduino board (e.g., Arduino Uno).
- An OLED display compatible with the Adafruit_SSD1306 library.
- A USB cable to connect your Arduino board to your computer.

## Getting Started 🚀

1. **Arduino Setup**:

   - Connect the OLED display to your Arduino board as per the wiring instructions in your display's datasheet.
   - Import the `Adafruit_SSD1306` library using the Arduino IDE's Library Manager.

2. **Python Setup**:

   - Install the necessary Python packages using pip:

     ```bash
     pip install psutil pyserial
     ```

3. **Repository Setup**:

   - Clone this repository to your local machine:

     ```bash
     git clone https://github.com/Noritem/Arduino-CPURAM-Monitor.git
     cd Arduino-CPURAM-Monitor
     ```

4. **Usage**:

   - Upload the Arduino sketch `main.ino` to your Arduino board using the Arduino IDE.
   - Run the Python script `main.py` to start monitoring CPU and RAM usage on your computer:

     ```bash
     python main.py
     ```

   - The Arduino will display real-time CPU and RAM usage on the connected OLED screen.

5. **Optional**: Customize the code to match your specific hardware and preferences.

## Troubleshooting 🛠️

- If you encounter issues with the Arduino, make sure the board is properly connected and the COM port is set correctly in the Arduino IDE.
- If the OLED display does not work, verify the wiring and ensure the `Adafruit_SSD1306` library is correctly installed.

## Contributing 🤝

Contributions are welcome! Feel free to open issues or pull requests for improvements or bug fixes.

## License 📜

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

**Note**: You need to import the `Adafruit_SSD1306` library because it's designed for OLED displays. Additionally, make sure your Arduino board is connected to your PC via a USB cable.
