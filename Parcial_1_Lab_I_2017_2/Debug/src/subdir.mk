################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Parcial_1_Lab_I_2017_2.c \
../src/contratacion.c \
../src/pantalla.c \
../src/utn.c 

OBJS += \
./src/Parcial_1_Lab_I_2017_2.o \
./src/contratacion.o \
./src/pantalla.o \
./src/utn.o 

C_DEPS += \
./src/Parcial_1_Lab_I_2017_2.d \
./src/contratacion.d \
./src/pantalla.d \
./src/utn.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


