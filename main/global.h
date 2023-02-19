#ifndef GLOBAL_H
#define GLOBAL_H

#define IR_PIN 13
#define LIGHT_PIN A0
#define ROTARY_ANGLE_PIN A1
#define TOUCH_PIN 8
#define TRIG_PIN 4
#define ECHO_PIN 5

enum CMD {
  START              = 0,
  GESTURE_RIGHT      = 1,
  GESTURE_LEFT       = 2,
  GESTURE_UP         = 3,
  GESTURE_DOWN       = 4,
  GESTURE_CLOCKW     = 5,
  GESTURE_ANTICLOCKW = 6,
  GESTURE_EMPTY      = 7,
  IR_MOTION          = 8,
  IR_NO_MOTION       = 9,
  ROTARY_0           = 10,
  ROTARY_1           = 11,
  ROTARY_2           = 12,
  ROTARY_3           = 13,
  ROTARY_4           = 14,
  TOUCH_LOW          = 15,
  TOUCH_HIGH         = 16,
  LIGHT_DARK         = 17,
  LIGHT_BRIGHT       = 18,
  ULTRASONIC_0       = 19,
  ULTRASONIC_1       = 20,
  ULTRASONIC_2       = 21,
  ULTRASONIC_3       = 22,
  STOP               = 23,
};

#endif
