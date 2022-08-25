# UML 2.0 Diagrams

This folders contains UML diagrams to document and clarify the current application.
Among the diagrams are use case, state, and activity diagrams.

## Description

This program is using external interrupts to avoid the delay in the loop and instead doing two different processes independently.
By applying these principles the driver mentioned in blockingLED would be able to break while starting other processes like signaling the other drivers.
One way to visualize an external interrupt is to frame the loop together with the interrupting flag and make a seperate activity for that process.  

[!Example](nonBlockingLED.pdf)