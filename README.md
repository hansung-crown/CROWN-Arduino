# CROWN-Arduino

> 디바이스

- **Arduino Uno**
- **HC-06 Bluetooth Module**

- **Door lock**



## Setup-Arduino

- **아두이노 보드와 HC-06 연결**

  | 아두이노 보드 | HC-06 |
  | ------------- | ----- |
  | 5V            | VCC   |
  | GND           | GND   |
  | D3            | TXD   |
  | D2            | RXD   |

  <img src="https://user-images.githubusercontent.com/56067179/105966016-72759900-60c7-11eb-832a-0a77c12e0137.jpg" width="600px"/>



- **블루투스 모듈 연결**

  - TXD, RXD 연결 시 아두이노와 블루투스 모듈 반대로 연결
  - 아두이노 RX핀 -> 블루투스 모듈 TX에 연결
  - 아두이노 TX핀 -> 블루투스 모듈 RX에 연결
  

    ```c++
    #include <SoftwareSerial.h>

    #define BT_RXD 3
    #define BT_TXD 2
    SoftwareSerial bluetooth(BT_RXD, BT_TXD);
    ```



- **연결 테스트**

  - 시리얼 모니터
  - 'AT' 입력 > 'OK'

    <img src="https://user-images.githubusercontent.com/56067179/105967054-c6cd4880-60c8-11eb-9c54-050cc3dc9892.PNG" width="600px"/>

  - 참고사항

    ```
    AT+NAME 	// 이름 확인
    AT+PIN  	// 핀 번호 확인
    AT+ADDR 	// 주소 확인
    ```

    <img src="https://user-images.githubusercontent.com/56067179/105967048-c634b200-60c8-11eb-8cb0-68cc9f785b2d.PNG" width="600px"/>



## Connecting Door lock and Arduino

- **아두이노 보드와 도어락 연결**

  | 아두이노 보드 | 도어락     |
  | ------------- | ---------- |
  | D9            | GND (빨강) |
  | D10           | VCC (검정) |

  <img src="https://user-images.githubusercontent.com/56067179/105969758-f3cf2a80-60cb-11eb-9315-9083d21dd2ad.jpg" width="600px"/>
