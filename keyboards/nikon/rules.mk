BOOTLOADER = qmk-dfu
CUSTOM_MATRIX = yes

SRC += matrix.c
QUANTUM_LIB_SRC += i2c_master.c