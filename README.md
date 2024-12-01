# Raspberry Pi Operating System

This project is a custom operating system for the Raspberry Pi, developed by following the instructions from the Udemy course [Raspberry Pi: Write Your Own Operating System Step by Step](https://www.udemy.com/course/raspberry-pi-write-your-own-operating-system-step-by-step/).

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)

## Introduction
This project aims to create a simple, yet functional operating system for the Raspberry Pi. It is an educational project designed to teach the fundamentals of operating system development. I have changed the instructions to use CMake for building rather then a build script.

## Features
- Basic kernel
- Simple shell
- GPIO control
- UART communication
- Timer and interrupt handling

## Requirements
- Raspberry Pi with ARM64 architecture
- SD card (minimum 4GB)
- Cross-compiler (e.g., GCC for ARM)
- CMake
- Basic knowledge of C and assembly programming

## Installation
1. Clone the repository:
    ```sh
    git clone https://github.com/GaeaKat/pi-kernel.git
    cd pi-os
    ```
2. Set up the cross-compiler:
    Follow the instructions from the Udemy course to set up the cross-compiler for ARM.

3. Configure the build system with CMake:
    ```sh
    cmake -DCMAKE_TOOLCHAIN_FILE=toolchain.cmake -B build -S .
    ```

4. Build the operating system:
    ```sh
    cmake --build build
    ```

5. Write the OS image to the SD card:
    ```
    cp build/kernel8.img /path/to/mounted/sdcard/kernel8.img
    sync
    ```
- SD card (minimum 4GB)
- Cross-compiler (e.g., GCC for ARM)
- Basic knowledge of C and assembly programming

## Usage
Insert the SD card into your Raspberry Pi and power it on. The custom operating system should boot up, and you can interact with it via a serial console or connected peripherals.

## Contributing
Contributions are welcome! Please fork the repository and submit a pull request with your changes.
