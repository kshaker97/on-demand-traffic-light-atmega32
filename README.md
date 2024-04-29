# On Demand Traffic Light Using ATmega32
## System Description:
There is a car traffic with three LEDs (Green, Yellow, Red) turns green for 5 seconds then
yellow blinks for five seconds then turns red for five seconds and that is the normal mode.
There is another traffic with three LEDs also that is used by any pedestrian to cross the
street and it operates opposite to the car traffic that means when the car traffic is green
pedestrian traffic is red and vice versa. The pedestrian traffic is connected to a button the
pedestrian presses it to cross the street. When the button is pressed it aims to turn the car
traffic red and pedestrian traffic green to be able to cross the street.
## System Design:
- Our system is divided into four layers:
  - Application – ECUAL – MCAL – Microcontroller
- Our system is divided into drivers
  - DIO – TIMER – INTERRUPT belong to MCAL
  - LED – BUTTON belong to ECUAL
- **DIO API’s**
  ```
  - EN_DIO_error_t DIO_init(uint8_t PORT, uint8_t BIT, uint8_t DIRECTION);
  - EN_DIO_error_t DIO_write(uint8_t PORT, uint8_t BIT, uint8_t VALUE);
  - EN_DIO_error_t DIO_read(uint8_t PORT, uint8_t BIT, uint8_t *VALUE);
  - EN_DIO_error_t DIO_toggle(int8_t PORT, uint8_t BIT);
  ```
- **TIMER API’s**
  ```
  - EN_TIMER0_error_t TIMER0_init(void);
  - EN_TIMER0_error_t TIMER0_delay(uint16_t SECONDS);
  ```
- **INTERRUPT API’s**
  ```
  - EN_INTERRUPT0_error_t EXT_INT_0_init(void);
  ```
- **LED API’s**
  ```
  - EN_LED_error_t LED_init(uint8_t LED_PORT, uint8_t LED);
  - EN_LED_error_t LED_off(uint8_t LED_PORT, uint8_t LED);
  - EN_LED_error_t LED_on(uint8_t LED_PORT, uint8_t LED);
  - EN_LED_error_t LED_toggle(uint8_t LED_PORT, uint8_t LED);
  - EN_LED_error_t LED_read(uint8_t LED_PORT, uint8_t LED, uint8_t *STATE);
  ```
- **BUTTON API’s**
  ```
  - EN_BUTTON_error_t BUTTON_init(uint8_t BUTTON_PORT, uint8_t BUTTON);
  - EN_BUTTON_error_t BUTTON_read(uint8_t BUTTON_PORT, uint8_t BUTTON, uint8_t *STATE);
  ```
## System Constraints:
The car traffic consists of three leds (Green, Yellow, Red) connected to Port A (Pin0, Pin3,
Pin6). The pedestrian traffic consists of three leds (Green, Yellow, Red) connected to Port
B (Pin0, Pin3, Pin6). The pedestrian traffic also have push button connected to Port D
(Pin2) to activate external interrupt 0.
- There are two constraints :
  - Long Press : Ignored by using a delay after the press if it’s still pressed do nothing.
  - Double Press : Ignored by using a return function after executing the pedestrian mode.
## Schematic:
![image](https://github.com/kshaker97/On_Demand_Traffic_Light/assets/145481109/299df320-2246-4da2-9413-56c2d06b2f29)
