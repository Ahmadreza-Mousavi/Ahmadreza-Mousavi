#include <Arduino_LSM9DS1.h>

void setup() {
  
  Serial.begin(115200);
  while (!Serial);
  Serial.println("Started");

  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1);
  }

  Serial.print("Accelerometer sample rate = ");
  Serial.print(IMU.accelerationSampleRate());
  Serial.println(" Hz");
  Serial.println();
  Serial.println("Acceleration in G's");
  Serial.println("X\tY\tZ");

  Serial.print("Gyroscope sample rate = ");
  Serial.print(IMU.gyroscopeSampleRate());
  Serial.println(" Hz");
  Serial.println();
  Serial.println("Gyroscope in degrees/second");
  Serial.println("X\tY\tZ");
  
}

void loop() {
  float x_acc, y_acc, z_acc;
  float x_gyro, y_gyro, z_gyro;

  if (IMU.accelerationAvailable() && IMU.gyroscopeAvailable()) {
    
    IMU.readAcceleration(x_acc, y_acc, z_acc);
    IMU.readGyroscope(x_gyro, y_gyro, z_gyro);

    Serial.print(x_acc);
    Serial.print('\t');
    Serial.print(y_acc);
    Serial.print('\t');
    Serial.print(z_acc); 
    Serial.print('\t');
    Serial.print(x_gyro);
    Serial.print('\t');
    Serial.print(y_gyro);
    Serial.print('\t');
    Serial.println(z_gyro);
  }
  delay(20);
}
