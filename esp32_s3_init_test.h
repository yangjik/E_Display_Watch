#pragma once

#include "main.h"

class TEST_ESP32_S3_CODE
{
private:
    int8_t led_state = 0;   // led 상태 0 : ON / 1 : OFF

public:
  uint8_t Gpio21_User_LED_Control_Test();

};