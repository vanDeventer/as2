# UML Diagrams

The use case diagram for the Blinky program is

![The use case diagram](UseCase.png)

The activity diagrams for the Blinky program are

![The main activity diagram](Activity.png)
![init GPIO activity diagram](initGPIO.png)

The state diagram for the Blinky program is

![The state diagram](StateDiagram.png)

###### Description 

The purpose of the program is to be able to toggle a light (kind of like when a turn signal notifies the other drivers).
The states that is represented in the code is [LED ON] and [LED OFF]. HAL_Delay() is the "wall" that decides when the microcontroller is supposed to switch state.
The activity diagrams is in this case split into 3 parts, the student is free to design this however the student see fits. A setup for all initializations is always needed. And after the initial setup a simple loop of a toggle and delay is presented as seen below.   

![Diagrams commited by Oskar](blinky_ow.pdf)