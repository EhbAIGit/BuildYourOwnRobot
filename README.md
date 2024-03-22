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


![image](https://github.com/EhbAIGit/BuildYourOwnRobot/assets/74420584/e16dd134-0512-4b4b-a915-440e656cdbda)



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



