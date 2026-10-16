#include "esp32_s3_init_test.h"

// led 1초마다 blink
uint8_t TEST_ESP32_S3_CODE::Gpio21_User_LED_Control_Test(){

    printf("[Test User Led] start!!");
    gpio_reset_pin(GPIO_NUM_21);

    // on
    gpio_set_direction(GPIO_NUM_21, GPIO_MODE_OUTPUT);

    if (led_state == 0){
        led_state = 1;
        gpio_set_level(GPIO_NUM_21, led_state);
        printf("[Test User Led] On\n");
    }
    else{
        led_state = 0;
        gpio_set_level(GPIO_NUM_21, led_state);
        printf("[Test User Led] Off\n");
    }

    vTaskDelay(10000);  // ms단위 <- FreeRTOS 클럭 수정함

    return RESULT_SUCCESS;
}