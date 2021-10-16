################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"E:/Coding/CCStudio IDE/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=none -me --include_path="E:/Coding/CCStudio IDE/workspace/ThermostatProject" --include_path="E:/Coding/CCStudio IDE/workspace/ThermostatProject/MCU+Image" --include_path="E:/Coding/CCStudio IDE/simplelink_cc32xx_sdk_5_20_00_06/source" --include_path="E:/Coding/CCStudio IDE/simplelink_cc32xx_sdk_5_20_00_06/kernel/nortos" --include_path="E:/Coding/CCStudio IDE/simplelink_cc32xx_sdk_5_20_00_06/kernel/nortos/posix" --include_path="E:/Coding/CCStudio IDE/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/include" --define=NORTOS_SUPPORT -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="E:/Coding/CCStudio IDE/workspace/ThermostatProject/MCU+Image/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-322492351: ../gpiointerrupt.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"E:/Coding/CCStudio IDE/sysconfig_1_8_0/sysconfig_cli.bat" -s "E:/Coding/CCStudio IDE/simplelink_cc32xx_sdk_5_20_00_06/.metadata/product.json" --script "E:/Coding/CCStudio IDE/workspace/ThermostatProject/gpiointerrupt.syscfg" -o "syscfg" --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/ti_drivers_config.c: build-322492351 ../gpiointerrupt.syscfg
syscfg/ti_drivers_config.h: build-322492351
syscfg/ti_utils_build_linker.cmd.genlibs: build-322492351
syscfg/syscfg_c.rov.xs: build-322492351
syscfg/ti_utils_runtime_model.gv: build-322492351
syscfg/ti_utils_runtime_Makefile: build-322492351
syscfg/: build-322492351

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"E:/Coding/CCStudio IDE/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=none -me --include_path="E:/Coding/CCStudio IDE/workspace/ThermostatProject" --include_path="E:/Coding/CCStudio IDE/workspace/ThermostatProject/MCU+Image" --include_path="E:/Coding/CCStudio IDE/simplelink_cc32xx_sdk_5_20_00_06/source" --include_path="E:/Coding/CCStudio IDE/simplelink_cc32xx_sdk_5_20_00_06/kernel/nortos" --include_path="E:/Coding/CCStudio IDE/simplelink_cc32xx_sdk_5_20_00_06/kernel/nortos/posix" --include_path="E:/Coding/CCStudio IDE/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/include" --define=NORTOS_SUPPORT -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="E:/Coding/CCStudio IDE/workspace/ThermostatProject/MCU+Image/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-1424141265: ../image.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"E:/Coding/CCStudio IDE/sysconfig_1_8_0/sysconfig_cli.bat" -s "E:/Coding/CCStudio IDE/simplelink_cc32xx_sdk_5_20_00_06/.metadata/product.json" --script "E:/Coding/CCStudio IDE/workspace/ThermostatProject/image.syscfg" -o "syscfg" --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/ti_drivers_net_wifi_config.json: build-1424141265 ../image.syscfg
syscfg/: build-1424141265


