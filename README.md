# ESP32 Vehicle Gauge with GC9A01 TFT Display using LVGL

This project uses an ESP32 microcontroller to create a vehicle gauge and displaying the information on a GC9A01 TFT display using the LVGL library.

## Components Required

- ESP32 Development Board
- GC9A01 TFT Display
- Voltage Divider (for measuring battery voltage)
- Temperature Sensor (e.g., LM35, DS18B20, etc.)
- Connecting Wires
- Power Supply

## Wiring Diagram

![Wiring Diagram](images/wiring_diagram.png)

### Connecting the GC9A01 TFT Display to ESP32
- **VCC** -> **3.3V** (ESP32)
- **GND** -> **GND** (ESP32)
- **CS** -> **GPIO 22** (ESP32)
- **SDI(MOSI)/DC** -> **GPIO 16** (ESP32)
- **SCK** -> **GPIO 18** (ESP32)
- **RESET** -> **GPIO 4** (ESP32)
- **SDO(MISO)** -> **Not Connected**
- **BL** -> **Not Connected**

### Connecting the Voltage Divider and Temperature Sensor to ESP32
- **Voltage Divider**: 
  - Connect the positive end to the battery.
  - Connect the divided voltage output to **GPIO 34** (ESP32).
  - Connect the ground end to **GND** (ESP32).
  
- **Temperature Sensor** (e.g., LM35):
  - VCC -> **3.3V** (ESP32)
  - GND -> **GND** (ESP32)
  - Output -> **GPIO 35** (ESP32)

## Software Setup

### 1. Install PlatformIO
1. Download and install [PlatformIO](https://platformio.org/) as an extension in Visual Studio Code or other compatible IDEs.

### 2. Install Required Libraries
Install the following libraries using PlatformIO:
- `lvgl`
- `TFT_eSPI`

### 3. Configure the GC9A01 TFT Display
Edit the `include/User_Setup.h` file. Copy the content of the provided `User_Setup.h` into your setup file.

### 4. Code
Edit the `main.cpp` file as you prefer.

