# :computer: CPU & RAM Usage Monitor :chart_with_upwards_trend:

Monitor your computer's CPU and RAM usage using an Arduino and Python. This project displays real-time CPU and RAM usage on an OLED display connected to the Arduino.

## :gear: Hardware Setup

1. **Connect the OLED Display**:
   - Connect an OLED display to your Arduino.
   - Ensure the power, ground, SDA, and SCL pins are correctly connected.

## :arrow_forward: Arduino Setup

1. **Arduino IDE**:
   - Open the Arduino IDE.
   - Copy and paste the Arduino code (`main.ino`) into a new sketch.

2. **Board and Port**:
   - Select the correct board and COM port in the Arduino IDE.

3. **Upload Code**:
   - Upload the code to your Arduino board.

## :hammer_and_wrench: Python Setup

1. **Python**:
   - Ensure you have Python installed on your computer.

2. **Install Dependencies**:
   - Install the `psutil and pyserial` library using pip:
     ```shell
     pip install psutil
     pip install pyserial
     ```

## :rocket: Running the Programs

1. **Python Program**:
   - Open a terminal or command prompt.

2. **Navigate**:
   - Navigate to the directory where the Python code (`main.py`) is located.

3. **Run Python Program**:
   - Run the Python program:
     ```shell
     python main.py
     ```

## :chart_with_upwards_trend: Monitoring CPU and RAM Usage

- The Python program continuously monitors CPU and RAM usage and sends this data to the Arduino.

- The Arduino program displays this information on the OLED display.

- If the Python program is not running, the Arduino display will show "Serial module not available."

## :information_source: Interpreting the Display

- The OLED display shows the CPU and RAM usage as a percentage with 2 decimal places.

## :wrench: Additional Customization

- You can customize the Arduino and Python code to adjust the update intervals, display layout, or other features according to your needs.

Now, you have a CPU and RAM usage monitor using an Arduino and Python! :tada:
