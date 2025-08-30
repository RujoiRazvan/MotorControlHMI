# GCC Build Instructions

## Prerequisites

1. **Generate Embedded Wizard code**
	- Open the Embedded Wizard project and generate code.
	- Ensure `ewfiles.inc` exists in `Application/EmbeddedWizardGeneratedCode`.

2. **Set up the build environment**
	- From the project root, run:
	  ```
	  StartGccBuildEnvironment.bat
	  ```
	- This will open a terminal with the correct environment variables set.

## Build Steps

1. **Compile the project**
	- In the environment-enabled terminal, run:
	  ```
	  make -C cmake
	  ```
	- This will build all sources and create the `Obj/` and `Bin/` folders.

2. **Flash the firmware (optional)**
	- To flash the generated firmware to the target device, run:
	  ```
	  make -C cmake install
	  ```

3. **Clean the build (optional)**
	- To remove build artifacts, run:
	  ```
	  make -C cmake clean
	  ```

## Notes

- If you move the project, update the paths in `cmake/Makefile` as needed (`EMWI_APP_PATH`, `SRC_PATH`, etc.).
- For debugging, use the `.elf` file in `Bin/` with your preferred debugger (e.g., ST-Link).
- Monitor the console/logs for runtime errors from HAL, FreeRTOS, or GUI runtime.

