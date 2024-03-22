# BuildYourOwnRobot

<img src="https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/90d1bc29-f0f3-4d4e-a446-6d2112df9fa9" alt="image" width="300" align="right">We Designing a two-wheeled robot on Tinkercad opens a world of possibilities for both beginners and experienced makers alike. Tinkercad's intuitive interface empowers users to effortlessly create intricate designs, making it an ideal platform for bringing robotics projects to life.

Starting with the basic structure, users can craft the chassis to accommodate the motors, wheels, and other components. Tinkercad offers a diverse library of shapes and tools, enabling precise customization to meet specific project requirements. Whether it's adjusting dimensions or adding mounting points for sensors and actuators, Tinkercad provides the flexibility needed to realize unique designs.

Free downloadable design in Tinkercad :  https://www.tinkercad.com/things/hrbdbtyDgEC-airobotplatform



<h2>Parts to buy</h2>

<h3>WEMOS D1 Wifi</h3>
<table>
  <tr>
    <td>Wemos D1 WiFi board</td>
    <td>Sensor shield v5.0</td>
    <td>360 degrees continuous rotation Servo's</td>
  </tr>
  <tr>
    <td><img src= "https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/1d793ab5-191f-4a23-ba67-4421d6822c52" height="100" align="left">The Wemos D1 WiFi board ESP8266 is a compact microcontroller board based on the ESP8266 chipset, which integrates WiFi connectivity. It's a development board similar to the Arduino, but with built-in WiFi capability, making it ideal for IoT (Internet of Things) projects and wireless communication applications. </td>
    <td><img src= "https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/f95b2dc9-3bb2-496d-b7f1-049918ce81c9" height="100" align="left">The Arduino Sensor Shield V5 is a versatile expansion board designed to simplify the process of connecting and interfacing various sensors and modules with Arduino microcontroller boards. Compatible with Arduino Uno, Mega, and other similar boards, the Sensor Shield V5 offers a convenient way to expand the capabilities of your Arduino projects. It can be placed on top of the WEMOS D1 wifi board, so no soldering is required to connect all robot parts.</td>
    <td><img src= "https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/0d02362d-aeaa-4d3d-95d1-c54b4ab641ff" height="100" align="left">The S3003 is a standard-sized servo motor manufactured by TowerPro. It's commonly used in robotics and RC (remote control) applications due to its reliability, affordability, and versatility. The "360 degrees" designation typically refers to the continuous rotation modification that can be applied to this servo, allowing it to rotate continuously in either direction rather than being limited to a specific range of motion like traditional servos.</td>
  </tr>
  <tr>
    <td>4x AA batteryholder (6V)</td>
    <td>Jumper Wires (male-male)</td>
    <td>AA-Batteries</td>
  </tr>
  <tr>
    <td><img src= "https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/ca63e71f-4edf-42b6-838a-90ef7f80fd43" height="100" align="left">A basic flat 4 x AA battery holder will give you about 1,5V max x 4 or 6 Volt, to power both the WEMOS board and servo's</td>
    <td><img src= "https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/c4106981-5760-489d-806f-fe6ce3e41257" height="100" align="left">Jumping wires, also known as jumper wires or simply jumpers, are commonly used in electronics and prototyping for several purposes.</td>
    <td><img src= "https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/aed60224-e8b9-43b5-b61d-3aeb57693e3f" height="100" align="left">Standard AA batteries,  if possible use recheargeable batteries.</td>
  </tr>
</table>
<h2>Where to buy</h2>
We earn no commission but on Otronic.nl you can buy all the material needed for about 25 euros.

<img src= "https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/76050dc0-358f-4606-99dd-54facb7a3d1c">

<h2>Hardware connections</h2>

Correctly connecting all components is crucial for proper functionality. While alternative connections are possible, the examples provided in the software utilize specific connections. Therefore, we recommend adhering to these suggested connections for optimal compatibility and ease of use.


![image](https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/df1cb4f4-ce3a-448a-92ee-717c718bef06)

Remark that in the software these pins are as follows :

servo_pin1 = D11;  // Left Servo 
servo_pin2 = D12;  // right Servo
 
trigger = D15;   // Ultrasonic sensor trigger pin
echo    = D2;    // Ultrasonic sensor echo pin



<h2>Getting started</h2>

Install Arduino IDE (https://www.arduino.cc/en/software).  There you can download latest version. 

Go to the "File" menu and select "Preferences".

In the "Additional Board Manager URLs" field, add the following URL:
http://arduino.esp8266.com/stable/package_esp8266com_index.json
Separate multiple URLs with commas if you have others already listed.

![image](https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/3a185ccd-4502-4f34-8406-3752783b0419)



Click "OK" to close the Preferences window.

Now, go to the "Tools" menu, select "Board", and then click on "Boards Manager".

In the Boards Manager window, type "esp8266" into the search bar.

Select the "esp8266" entry by ESP8266 Community and click the "Install" button.
Wait for the installation process to complete. Once installed, close the Boards Manager window.

Now, you can select the ESP8266 board from the "Tools" > "Board" menu. You'll find various ESP8266 boards listed under the "ESP8266 Boards (2.7.4)" menu. Choose the appropriate board that matches your ESP8266 module.

We have following board LOLIN(WEMOS) D1 R1 :

![image](https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/cb666b27-9e4e-4ff5-9514-a80fc0005c82)


After selecting the board, you can proceed with writing and uploading sketches for the ESP8266 using the Arduino IDE as you would for any other Arduino board.


<h2>Uploading a sketch program to your robot</h2>


Open chatgpt and select the 3.5 turbo or a newer model if you have access to newest models.  In the chat set your context :


"I have a WEMOS D1 R2 with an ultrasonic sensor (trigger pin D15 and echo pin D2). Can you write a program in Arduino that continuously displays the distance? Please do this without using the library, but simply using time measurement."

![image](https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/fd6c0181-2ee0-462f-af36-ec62ed57f5f7)



<h3>Copy the generated code to your Arduino IDE</h3>

![image](https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/0ddeccf7-eb18-45ae-a1e5-afdcf329ba63)

and click on upload :

![image](https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/0dab107a-9a91-4511-8079-e65be406218e)

![image](https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/b38d14c5-2f65-4bbd-acb0-e1d07c9381b7)


This is the result in the serial monitor of the Arduino IDE

![image](https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/ec0c01e2-d98c-4dcd-a6ec-48c6097289dd)


![image](https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/b2afd1d9-ee6b-4b8d-b7c0-13b527c8a348)


<h2>Ready to Explore Further Examples in this Code Repository?</h2>
You've laid a solid foundation, and now it's time to delve into the myriad of examples waiting for you in this code repository.

Get creative with your prompts and unleash the full potential of your robotic platform. Consider expanding its capabilities by integrating additional sensors and servos into the sensor shield. Furthermore, don't limit yourself to the confines of this specific platform – the vast array of Arduino shields available on the market opens up endless possibilities for building and customizing your own unique robot. With boundless opportunities at your fingertips, let your imagination soar beyond the horizon.







