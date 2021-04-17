################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/arr.c \
../src/matOp.c \
../src/menu.c \
../src/opciones.c \
../src/trabajoPractico_1.c \
../src/utn.c 

OBJS += \
./src/arr.o \
./src/matOp.o \
./src/menu.o \
./src/opciones.o \
./src/trabajoPractico_1.o \
./src/utn.o 

C_DEPS += \
./src/arr.d \
./src/matOp.d \
./src/menu.d \
./src/opciones.d \
./src/trabajoPractico_1.d \
./src/utn.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


