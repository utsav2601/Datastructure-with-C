################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
<<<<<<< HEAD:Debug/subdir.mk
../Bubble.cpp \
../Insertion.cpp \
../Selection.cpp \
../Sorting.cpp \
../mergeSort.cpp \
../quickSort.cpp 

OBJS += \
./Bubble.o \
./Insertion.o \
./Selection.o \
./Sorting.o \
./mergeSort.o \
./quickSort.o 

CPP_DEPS += \
./Bubble.d \
./Insertion.d \
./Selection.d \
./Sorting.d \
./mergeSort.d \
./quickSort.d 
=======
../list.cpp 

OBJS += \
./list.o 

CPP_DEPS += \
./list.d 
>>>>>>> 09ab5597757b012a9dac83b8594411f2e70d398c:LinkedList/Debug/subdir.mk


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


