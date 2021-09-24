import serial
import pyautogui as pg


pg.FAILSAFE=False


ser = serial.Serial("COM1",'9600')
while True:
    read = ser.readline().decode('ascii')
    readArray = read.split()
    c = readArray[0]
    x = readArray[1]
    y = readArray[2]
    m = readArray[3]
    print(c, ' ', x,' ',y,' ',m)
    if c=='c':
        pg.click(button='left')

    pg.moveTo(int(x), int(y))
