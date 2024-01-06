################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/INTERRUPT\ Driver/interrupt.c \
../MCAL/INTERRUPT\ Driver/interrupt_test.c 

OBJS += \
./MCAL/INTERRUPT\ Driver/interrupt.o \
./MCAL/INTERRUPT\ Driver/interrupt_test.o 

C_DEPS += \
./MCAL/INTERRUPT\ Driver/interrupt.d \
./MCAL/INTERRUPT\ Driver/interrupt_test.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/INTERRUPT\ Driver/interrupt.o: ../MCAL/INTERRUPT\ Driver/interrupt.c MCAL/INTERRUPT\ Driver/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"MCAL/INTERRUPT Driver/interrupt.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

MCAL/INTERRUPT\ Driver/interrupt_test.o: ../MCAL/INTERRUPT\ Driver/interrupt_test.c MCAL/INTERRUPT\ Driver/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"MCAL/INTERRUPT Driver/interrupt_test.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


