# Autonomous Vehicle
![image](https://github.com/SurajSonawane2415/Autonomous-Vehicle/assets/129578177/e9c6d619-e922-452d-a8e2-e03176a4f1f4)
## About The Project
In a remarkable stride towards the future of transportation, we present the "Autonomous Vehicle" project—a groundbreaking endeavor that redefines the driving experience through the fusion of cutting-edge technologies. This project embodies innovation at its finest, introducing a revolutionary approach to road safety and efficiency through the integration of embedded systems, image processing, machine learning, and advanced sensor capabilities.

At the heart of our project lies a synergy of technology components that form the backbone of our autonomous vehicle's intelligence. Employing state-of-the-art tools and methodologies, we have meticulously crafted an autonomous car capable of executing [five vital automated functions](#automated-functions), transforming an ordinary vehicle into a smart, responsive, and safety-focused marvel.

This feat is achieved through the integration of hardware marvels, including the Raspberry Pi Camera Module v2 for perceptive insights, Raspberry Pi Model 3B for cognitive decision-making, and Arduino Uno R3 for precise physical responses.

## Table of Contents

- [About The Project](#about-the-project)
- [Automated Functions](#automated-functions)
- [Hardware components used](#hardware-components-used)
- [Software Tools Used](#software-tools-used)
- [Applications](#applications)
- [Contributors](#contributors)

## Automated Functions
"Automated Functions" is the heart of our project, where our vehicle does five important things by itself:

#### 1. Lane Following:
![image](https://github.com/SurajSonawane2415/Autonomous-Vehicle/assets/129578177/fced2efb-4707-4b74-b2ca-f7067c52b4e9)
![YouCut_20230809_215503889_AdobeExpress](https://github.com/SurajSonawane2415/Autonomous-Vehicle/assets/129578177/26085833-cbac-4019-9448-c56aed171db2)

   The foundation of lane following lies in advanced image processing techniques. Our autonomous vehicle utilizes a Region of Interest (ROI) approach to precisely identify and track lane markings on the road. By focusing on the relevant portion of the image, the vehicle's algorithms analyze lane curvature, position, and changes, enabling the car to maintain a steady course within the lane.

#### 2. Object Detection:
![image](https://github.com/SurajSonawane2415/Autonomous-Vehicle/assets/129578177/c6844ed0-b4fb-4262-97f5-41b814ac4357)

   The power of image processing truly shines in object detection, where we utilize a two-fold approach. Our autonomous car employs advanced image processing techniques coupled with the HAAR Cascade Classifier. This cascade classifier is a machine learning-based method specifically trained to recognize patterns, including objects such as obstacles. The system processes real-time visual data to swiftly identify and track these objects. This dual technique, combining image processing and the HAAR Cascade Classifier, ensures rapid and accurate decision-making, enabling the vehicle to expertly navigate through dynamic road environments.collision avoidance.

#### 3. Road Sign Detection:
![image](https://github.com/SurajSonawane2415/Autonomous-Vehicle/assets/129578177/71391b79-54f5-433d-98cf-3ec8007ccfac)
![YouCut_20230809_194654488_AdobeExpress (1)](https://github.com/SurajSonawane2415/Autonomous-Vehicle/assets/129578177/1f018458-438c-404c-a6da-b41344cc4eea)

   Our road sign detection function employs the HAAR Cascade Classifier, a machine learning-based approach. By training the system on a diverse dataset of road signs, the vehicle can swiftly detect and interpret different signs, extracting essential information. This capability ensures the vehicle's compliance with road regulations, enhancing road safety through accurate and timely responses.

#### 4. Traffic Signal Detection:**
![image](https://github.com/SurajSonawane2415/Autonomous-Vehicle/assets/129578177/2e25a93e-0c69-42d4-970c-3c3aa50706ce)
![YouCut_20230809_191459826_AdobeExpress](https://github.com/SurajSonawane2415/Autonomous-Vehicle/assets/129578177/7257a43d-1e71-415f-8120-2c366600e30f)



   Traffic signal detection leverages the vehicle's image processing capabilities to identify changes in signal color. The system processes visual data from the traffic light area, applying color filtering techniques to discern red, green, and yellow signals. This enables the vehicle to respond appropriately, demonstrating a cooperative and informed approach to traffic signals.

#### 5. Lane End Detection:
![image](https://github.com/SurajSonawane2415/Autonomous-Vehicle/assets/129578177/63b63377-0da0-4537-90c8-75e705327367)
![YouCut_20230809_215800479_AdobeExpress](https://github.com/SurajSonawane2415/Autonomous-Vehicle/assets/129578177/3ea15a88-a243-466f-8f85-ec9533ae2ef9)

   The prowess of image processing extends to lane end detection. By analyzing visual cues, the vehicle can identify when a lane is approaching its termination. The system then triggers a lane change maneuver, taking into account neighboring lanes and other vehicles. This process ensures smooth and confident lane transitions, exemplifying the car's adaptability to changing road conditions.

With the fusion of cutting-edge image processing techniques, machine learning algorithms, and hardware integration, our "Autonomous Vehicle" project attains a remarkable level of autonomy. These five automated functions represent the culmination of technology and innovation, redefining driving as we know it. The vehicle's ability to interpret its surroundings with precision and make informed decisions underscores its potential to transform road safety and reshape transportation paradigms.


## Hardware components used

**1. Raspberry Pi Camera Module v2:**

The Raspberry Pi Camera Module v2 boasts an 8-megapixel Sony IMX219 sensor, capable of capturing high-resolution images and video.
This camera module is the "eyes" of our autonomous car, providing real-time visual input that's crucial for the vehicle's decision-making. It captures lane markings, objects, road signs, and traffic signals, contributing to the car's perception of its environment.

**2. Raspberry Pi Model 3B (Master):**

The Raspberry Pi Model 3B features a quad-core ARM Cortex-A53 processor with 1GB of RAM, offering robust computing power.
Serving as the project's central processing unit, this Raspberry Pi model acts as the brain behind data analysis and decision-making. It runs complex image processing algorithms, machine learning models, and coordinates the execution of automated functions.

**3. Arduino Uno R3 (Slave):**

The Arduino Uno R3 is equipped with an ATmega328P microcontroller, providing versatile I/O capabilities and compatibility with various sensors and actuators.
Working in conjunction with the master Raspberry Pi, the Arduino Uno R3 is responsible for translating digital commands into precise physical actions.

**4. L298N H-Bridge Motor Driver Module:**

The L298N module facilitates bidirectional control of two DC motors, offering a voltage range suitable for driving motors.
This motor driver module empowers our vehicle's mobility. It controls the speed and direction of the vehicle's motors, enabling precise maneuvers for lane changes, turns, and stops as directed by the system.

## Software Tools Used

**1. C++ Programming Language:**

C++ is the primary programming language employed in the project for developing the software logic and algorithms.
C++ is used to write code that processes data from sensors, interprets visual inputs, controls motor actions, and coordinates the vehicle's responses.

**2. OpenCV (C++ Libraries):**

OpenCV's C++ libraries play a crucial role in image processing and computer vision tasks.
Usage: OpenCV functions in C++ are utilized for implementing lane detection, object recognition using HAAR Cascade, road sign interpretation, and other visual processing tasks. This enables the vehicle to understand and respond to its surroundings.

**3. Cascade Trainer GUI (For HAAR Cascade Classifier Creation):**

The Cascade Trainer GUI is used to create HAAR cascade classifiers, which are used for object detection.
The GUI aids in training the system to recognize specific objects, such as road signs, by generating a trained cascade classifier that can be used in the C++ codebase for accurate object detection.

**4. Arduino IDE (For Arduino Programming):**

The Arduino Integrated Development Environment is used to write and upload code to the Arduino Uno R3 microcontroller.
C++ code is written in the Arduino IDE to program the Arduino Uno R3 for motor control, and executing turning maneuvers based on instructions from the Raspberry Pi.

**5. Raspberry Pi OS:**

The Raspberry Pi Operating System serves as a platform for running C++ code on the Raspberry Pi Model 3B.
Usage: The OS hosts the main C++ program that interfaces with hardware components, processes data, and executes decision-making algorithms for the vehicle's automated functions.

## Applications

The adaptable capabilities of the "Automated Functions" project position it as an invaluable asset across a diverse array of industries and scenarios, adeptly tackling distinct challenges while introducing innovative solutions:

**1. Industrial Material Handling:**

In environments like acidic, mining, and nuclear industries, where human presence poses potential hazards, the autonomous car is a transformative force in material handling. It adeptly navigates perilous surroundings, executing material transport with exactness and efficacy. Its autonomous nature minimizes human interaction, thereby diminishing risks and potential dangers.

**2. Enhanced Mobility in Complexes:**

Within expansive complexes, including sprawling malls, the project offers a paradigm shift in mobility for the elderly and physically challenged individuals. Boasting autonomous navigation and adaptive capabilities, the vehicle provides a conduit to heightened accessibility and enhanced personal autonomy, exemplifying a tangible bridge to inclusivity.

**3. Efficient Public Transportation:**

At the heart of public transportation systems, the autonomous car redefines efficiency. By streamlining routes and schedules, it alleviates congestion, augments reliability, and extends an eco-conscious travel option to commuters. This integration complements urban dynamics and contributes to a sustainable transit ecosystem.

**4. Campus Transportation Solutions:**

In sprawling campuses and multifaceted facilities, the autonomous vehicle emerges as a harbinger of progressive public transport. By furnishing an efficient, eco-friendly, and economically viable mode of transportation, it seamlessly interconnects different locales, thereby enhancing the experiences of students, employees, and visitors alike.

**5. Warehouse Management:**

In the domain of warehouse operations, the project revolutionizes inventory handling and logistics. Its precise navigation, object detection, and automated movements optimize material transportation within the facility. By reducing manual intervention, it enhances efficiency, accuracy, and safety, making it a pivotal tool in modern warehouse management.

## Achievements:

**1. Regional Level Project Competition by MSBTE, May 2022:**

- [Secured 1st Rank among 5 districts of Nashik region.](https://drive.google.com/file/d/1OMtAB163GALRdBWvhuo9EocnyOM8qFDZ/view?usp=sharing)

**2. District Level Project Competition by MSBTE, April 2022:**

- [Secured 3rd Rank in Nashik district](https://drive.google.com/file/d/1OMg6czY1069x1jVwxb7507FooUPWCVee/view?usp=sharing)

## Contributors

- [Purva Yeshi](https://github.com/PurviSYeshi)           
- [Suraj Sonawane](https://github.com/SurajSonawane2415)           
- [Pranav Vispute](https://github.com/visputepnv6)           
- [Pallavi Chavanake](https://github.com/chavankepal64)    

## Acknowledgements       
Special thanks to our guide, Prof. Mahendra V. Patil, and all professors of the Electronics and Telecommunication Engineering department at Government Polytechnic Nashik for their constant support and guidance throughout the project.
