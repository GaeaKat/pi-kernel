set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR aarch64)

set(CMAKE_C_COMPILER aarch64-unknown-linux-gnu-gcc)
set(CMAKE_ASM_COMPILER aarch64-unknown-linux-gnu-gcc)
set(CMAKE_OBJCOPY aarch64-unknown-linux-gnu-objcopy)

set(CMAKE_C_FLAGS "-std=c99 -ffreestanding -mgeneral-regs-only")
set(CMAKE_LINK_FLAGS "-nostdlib")
set(CMAKE_ASM_FLAGS "-c")