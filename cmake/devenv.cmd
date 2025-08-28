@echo off

set Title=MotorControl HMI Project - CMake Build
title %Title%

echo *******************************************************************************
echo Welcome to %Title%
echo *******************************************************************************
echo.
echo Important notes about this Embedded Wizard STM32H7 project:
echo.
echo 1. Source files are located in: ../Application/Source
echo 2. Embedded Wizard generated code is in: ../Application/EmbeddedWizardGeneratedCode
echo 3. Target-specific BSP code is in: ../Submodules/TargetSpecific
echo 4. STM32Cube HAL and FreeRTOS middleware are in: ../Submodules/ThirdParty/STM32Cube_FW_H7
echo 5. Object files will be created in the local directory: ./Obj
echo 6. Final binary files will be created in: ./Bin
echo 7. FreeRTOS is enabled in this project (FREE_RTOS = 1)
echo 8. Make sure to generate code in Embedded Wizard before running make
echo 9. If the project is moved, update EMWI_APP_PATH, SRC_PATH, EMWI_BSP_PATH, SDK_PATH
echo 10. Obj folder must exist before compilation (created automatically by make)
echo 11. Linker script is: ./stm32h7xx_flash.ld
echo 12. Startup file is: ./startup_stm32h7b3xx.s
echo.

echo. 
echo Important: To run this project
echo 1. Make sure Embedded Wizard code is generated (ewfiles.inc exists)
echo 2. Compile all sources: run `make` in this folder (Obj/ and Bin/ will be created)
echo 3. Flash the firmware: run `make install` (uses FlashDownload.cmd with the generated .hex)
echo 4. For debugging, use the .elf file in Bin/ with a debugger (e.g., ST-Link)
echo 5. Monitor console/logs for runtime errors from HAL, FreeRTOS, or GUI runtime
echo.


IF DEFINED BuildInitialized GOTO run

GOTO setpaths

:setpaths

:: set the path to make and its tools
set PATH=%~dp0\..\Submodules\ThirdParty\Make;%PATH%

:: compiler path
set PATH=%~dp0\..\Submodules\ThirdParty\gcc-arm-none-eabi\bin;%PATH%

set BuildInitialized=1

:run

:: Set variable for the CMake folder
set CMAKE_DIR=cmake

:: Change directory using the variable
cd %CMAKE_DIR%
