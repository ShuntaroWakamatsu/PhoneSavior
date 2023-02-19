import serial
import pyautogui
import time
import asyncio

START              = b'0\r\n'
GESTURE_RIGHT      = b'1\r\n'
GESTURE_LEFT       = b'2\r\n'
GESTURE_UP         = b'3\r\n'
GESTURE_DOWN       = b'4\r\n'
GESTURE_CLOCKW     = b'5\r\n'
GESTURE_ANTICLOCKW = b'6\r\n'
GESTURE_EMPTY      = b'7\r\n'
IR_MOTION          = b'8\r\n'
IR_NO_MOTION       = b'9\r\n'
ROTARY_0           = b'10\r\n'
ROTARY_1           = b'11\r\n'
ROTARY_2           = b'12\r\n'
ROTARY_3           = b'13\r\n'
ROTARY_4           = b'14\r\n'
TOUCH_LOW          = b'15\r\n'
TOUCH_HIGH         = b'16\r\n'
LIGHT_DARK         = b'17\r\n'
LIGHT_BRIGHT       = b'18\r\n'
ULTRASONIC_0       = b'19\r\n'
ULTRASONIC_1       = b'20\r\n'
ULTRASONIC_2       = b'21\r\n'
ULTRASONIC_3       = b'22\r\n'
STOP               = b'23\r\n'

def main():

    count = 0;

    port = serial.Serial('/dev/tty.usbmodem14301', 9600, timeout=None)

    while (True):
        cmd = 0;
        time.sleep(0.1)
        cmd = port.readline()
            
        if cmd == b'0\r\n':
            time.sleep(2.5000)
            pyautogui.press('space')
        elif cmd == b'1\r\n':
            pyautogui.press('a')
        elif cmd == b'2\r\n':
            pyautogui.press('s')
        elif cmd == b'3\r\n':
            pyautogui.press('d')
        elif cmd == b'4\r\n':
            pyautogui.press('f')
        elif cmd == b'5\r\n':
            pyautogui.press('g')
        elif cmd == b'6\r\n':
            pyautogui.press('h')
        elif cmd == b'7\r\n':
            pyautogui.press('j')
        elif cmd == b'8\r\n':
            pyautogui.press('3')
        elif cmd == b'9\r\n':
            pyautogui.press('8')
        elif cmd == b'10\r\n':
            pyautogui.press('4')#
        elif cmd == b'11\r\n':
            pyautogui.write('wetyuoppp', interval=0.04)
        elif cmd == b'12\r\n':
            pyautogui.write('aaddgggkkk', interval=0.04)
        elif cmd == b'13\r\n':
            pyautogui.write('awsedftgyhujkop;', interval=0.04)
        elif cmd == b'14\r\n':
            pyautogui.write('ddxdddz;', interval=0.04)
        elif cmd == b'15\r\n':
            pyautogui.press('o')
        elif cmd == b'16\r\n':
            pyautogui.press('p')
        elif cmd == b'17\r\n':
            pyautogui.press('')
        elif cmd == b'18\r\n':
            pyautogui.press('')
        elif cmd ==  b'19\r\n':
            pyautogui.press('v')
        elif cmd ==  b'20\r\n':
            pyautogui.press(',')
        elif cmd ==  b'21\r\n':
            pyautogui.press('tab')
        elif cmd ==  b'22\r\n':
            pyautogui.press('v')
        elif cmd == b'23\r\n':
            pyautogui.press('v')
        elif cmd == 'STOP':
            pyautogui.keyDown('v')

if __name__ == "__main__":
    main()
