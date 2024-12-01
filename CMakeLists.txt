cmake_minimum_required(VERSION 3.10)
project(kernel C ASM)

# Add source files
set(SOURCES
    src/boot.s
    src/lib.s
    src/main.c
    src/uart.c
    src/print.c
    src/debug.c
    src/handler.s
    src/handler.c
    src/mmu.s
)
include_directories(include/)
# Add executable
add_executable(kernel ${SOURCES})

# Set the linker and linker flags
set(CMAKE_C_LINK_EXECUTABLE "aarch64-unknown-linux-gnu-ld <OBJECTS> -o <TARGET> <LINK_LIBRARIES> ${CMAKE_LINK_FLAGS} -T ${CMAKE_SOURCE_DIR}/link.lds")

# Create the binary image
add_custom_command(TARGET kernel POST_BUILD
    COMMAND aarch64-unknown-linux-gnu-objcopy -O binary kernel kernel8.img
)