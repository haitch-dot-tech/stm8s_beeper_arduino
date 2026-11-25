# STM8S hardware beeper library
This library is a basic implementation of the beeper peripheral standard on the STM8S chips
Tested in PlatformIO with the SDuino core. 

## Usage
No setup code is required. This library interacts only with the register of the peripheral.
To trigger a beep, call:
```cpp
beeper_on(1000); // Hz
```
**Note:** the beeper peripheral only supports 1, 2, and 4kHz beeps. If your frequency is not 1000, 2000, or 4000, nothing will change from the current state.
The beeper can be disabled with:
```cpp
beeper_off();
```