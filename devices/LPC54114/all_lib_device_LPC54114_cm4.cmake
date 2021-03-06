list(APPEND CMAKE_MODULE_PATH
    ${CMAKE_CURRENT_LIST_DIR}/.
    ${CMAKE_CURRENT_LIST_DIR}/../../CMSIS/Include
    ${CMAKE_CURRENT_LIST_DIR}/../../components/lists
    ${CMAKE_CURRENT_LIST_DIR}/../../components/uart
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/common
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/flexcomm
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/inputmux
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/lpc_crc
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/lpc_dma
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/lpc_gpio
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/lpc_iocon
    ${CMAKE_CURRENT_LIST_DIR}/../../utilities/assert
    ${CMAKE_CURRENT_LIST_DIR}/../../utilities/debug_console_lite
    ${CMAKE_CURRENT_LIST_DIR}/../../utilities/misc_utilities
    ${CMAKE_CURRENT_LIST_DIR}/drivers
)


# Copy the cmake components into projects
#    include(CMSIS_Include_dsp)
#    include(component_usart_adapter)
#    include(component_lists)
#    include(driver_lpc_gpio)
#    include(device_system)
#    include(driver_flexcomm)
#    include(device_startup)
#    include(utility_assert_lite_LPC54114_cm4)
#    include(driver_clock)
#    include(utility_debug_console_lite)
#    include(driver_inputmux_connections)
#    include(driver_lpc_crc)
#    include(driver_flexcomm_i2c_dma)
#    include(driver_flexcomm_spi)
#    include(driver_flexcomm_usart)
#    include(device_CMSIS)
#    include(driver_lpc_iocon)
#    include(utilities_misc_utilities)
#    include(CMSIS_Include_core_cm4)
#    include(CMSIS_Include_common)
#    include(driver_common)
#    include(driver_inputmux)
#    include(driver_flexcomm_i2c)
#    include(driver_power)
#    include(driver_lpc_dma)
#    include(driver_reset)
#    include(driver_flexcomm_spi_dma)
