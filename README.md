# midicontroller_line6
Control Line6 Pod with Arduino.

## Übertragungsprotokoll
Es werden drei Bytes über den Pin 1(TX) an den Pod übertragen. 

| Status-Byte | Data-Byte       | Data-Byte     |
| ----------- | --------------- | ------------- |
| Midi-Befehl | Controller (CC) | Wert (0-127)  |
| 1 001 0000  | 00000000        | 00000000      |
  
Der Midi-Befehl besteht:

| 1           | 011       | 0000       |
| ----------- | --------- | ---------- |
| Status-Bit  | Befehlart | Midi-Kanal |


/* Program Change on Channel 1          176  */
/* Control Change on Channel 1          192  */
/* Program Change   1    0 - 127             */
/* Stomp            25   0 / 127             */
/* Mod              50   0 / 127             */
/* Delay            28   0 / 127             */
