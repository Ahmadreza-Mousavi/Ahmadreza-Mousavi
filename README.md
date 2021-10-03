Using Arduino IDE, debug your Arduino nano 33 BLE. I use a combination of samples to get Accelerometer and gyroscope data at the same time. It is required to add the Arduino_LSM9DS1 library to show the data in the serial monitor and make sure the IMU is working fine. If you wish to send the data with BLE, you need to debug your code with **Nano33BLE_IMU.ino** code and then access the characteristics related to ACC and GYRO and read the data.

How BLE works?
you can discover a summary of how BLE operates and what you require to do to have access to its characteristics in the link below:

https://www.arduino.cc/en/Reference/ArduinoBLE

What is the Accelerometer and Gyroscope Characteristics?


