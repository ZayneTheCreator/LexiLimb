# LexiLimb
A robotic hand controlled through voice commands from an application made using MIT app inventor

# About
This project presents a voice-controlled robotic hand built using Arduino and a Bluetooth app developed with MIT App Inventor. The system is designed to prove that 3d printing and open source embedded systems can be used to assist individuals in disadvantaged communities,those with physical disabilities who may not have access to expensive prosthetic technologies. By using intuitive voice commands, users can control the hand to perform everyday tasks, offering an accessible and low-cost solution. The voice app runs in the background on an Android device and transmits commands via Bluetooth to the Arduino, which drives servos to perform grip motions. The hand offers different grip types and expressions to improve interaction and dexterity. The robotic hand showcases how open-source tools and affordable hardware can be combined to create assistive technology that can make a meaningful impact in the real world.

# Introduction 
The inspiration for this project came from personal interaction with individuals living with physical disabilities, which highlighted the need for more intuitive and affordable assistive technologies as well as the Limbitless project by Albert Manero ,an alumni of UCL FLorida. Traditional prosthetic limbs often rely on Electromyography (EMG), a technique for recording electrical activity produced by skeletal muscles, to detect muscle signals and translate them into movement. While EMG provides specific and complex control, it requires expensive hardware and setup. In contrast, this project aims to provide a simpler, more intuitive interface using voice commands for basic everyday actions.

The primary objective is to create a low-cost, voice-controlled robotic hand that can perform daily tasks with basic grip types. The system avoids the complexity of EMG by utilizing voice recognition, making it more accessible. The app was developed using MIT App Inventor and can recognize multiple voice inputs to trigger different hand gestures and grips, providing a natural form of interaction for users.


# Hardware Description
The system comprises an Arduino Uno microcontroller, five servo motors (one for each finger), an HC-06 Bluetooth module for communication, a 9V battery for power, and a 3D-printed mechanical hand. Elastic rope is used to default the fingers to an open position when the servos are inactive. Each servo is attached to a finger joint with string to simulate tendon movement, allowing the hand to flex and extend in response to voice commands. The hand is lightweight and structured to replicate human finger motion.
![IMG-20250605-WA0007_edit_25776745252316](https://github.com/user-attachments/assets/55d8d722-736d-445f-ad20-7491cc3d546d)

![IMG_20250605_154540](https://github.com/user-attachments/assets/9fe2bb06-fbe5-42e2-9e53-57f8987808d8)

![IMG-20250605-WA0005_edit_25813102648665](https://github.com/user-attachments/assets/943fad39-262a-4409-bcd5-a2d81684c381)

# Working Principle
The Android app listens for user voice input and converts it into a text command. This command is transmitted via Bluetooth to the HC-06 module, which communicates the input to the Arduino. The Arduino interprets the command and activates specific servos to perform the requested grip. The app is programmed to recognize multiple keywords for each grip type, allowing variations like 'grab', 'hold', or 'fist' to trigger the same gesture. This flexibility enhances the hand's expressiveness and makes it more user-friendly for people with speech pattern variation.


![Screenshot_20250605_154838_appinventor ai_zayneg026 LexiLimb](https://github.com/user-attachments/assets/903d8258-c743-4b24-9022-6969094da4eb)

# Possible Future Improvements
- Adding a battery management system
- Improving the voice recognition system multilingual capabilities
- Enhancing mechanical structure with better grip force and finger articulation
- Incorporating AI for gesture prediction and adaptive behavior
