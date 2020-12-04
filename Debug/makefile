################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32H7xx_HAL_Driver/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
h750Loader.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
h750Loader.list \

OBJCOPY_BIN += \
h750Loader.bin \


# All Target
all:
	+@make --no-print-directory main-build && make --no-print-directory post-build

# Main-build Target
main-build: h750Loader.elf secondary-outputs

# Tool invocations
h750Loader.elf: $(OBJS) $(USER_OBJS) C:\Users\deive\Documents\workspace_cubeide\h750Loader\STM32H750VBTX_FLASH.ld
	arm-none-eabi-gcc -o "h750Loader.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\Users\deive\Documents\workspace_cubeide\h750Loader\STM32H750VBTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="h750Loader.map" -static -Wl,-cref,-u,Reset_Handler, --entry=Init --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

h750Loader.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "h750Loader.list"
	@echo 'Finished building: $@'
	@echo ' '

h750Loader.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "h750Loader.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

post-build:
	cmd.exe /C copy/Y  "h750Loader.elf" "..\QSPI_flashloader_H750.stldr"
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
