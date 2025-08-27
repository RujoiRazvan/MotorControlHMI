# Motor Control

The Motor Controls page in the HMI provides an interface to monitor and control a simulated motor. It allows the user to select the motor state and view its status visually.

## Features

Motor State Selection:
A horizontal slider lets the user select between three states:

- 0: Clockwise (CW)
- 1: Off
- 2: Counterclockwise (CCW)
Status Indicators:

Motor On: Shows a green LED when the motor is running (CW or CCW).

Motor Off: Shows a specific LED when the motor is off.

Motor Error: Shows a red LED if an error state is implemented (currently not triggered by the slider).

## Labels:

"CCW" (Counterclockwise), "OFF", and "CW" labels are displayed above the slider for clarity.

The page title "Motor Controls" is shown at the top.

## How It Works

The slider (HorizontalSlider) has three positions (0, 1, 2) and triggers the motorSlider slot on change.

The motorSlider slot updates the visibility of the status indicators:

If the slider is at 0 or 2 (CW or CCW), the green "Motor On" LED is shown.

If the slider is at 1 (Off), the "Motor Off" LED is shown.

The "Motor Error" LED is hidden in both cases (can be extended for error handling).

## Visual Elements

Slider: Allows selection between CCW, OFF, and CW.

LED Indicators: Visual feedback for motor status.

Text Labels: For user guidance.