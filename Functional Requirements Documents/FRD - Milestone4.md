# Functional Requirements Document

**TITLE:** FRD Milestone

**Team names:** Space Minds

**Team members:** Anupras Burokas, Ahras Ali, Xiao Chu Zhao

**GitHub URL:**[ https://github.com/374team3/Group-Project](https://github.com/374team3/Group-Project)



| Version |     Description of Change     |            Author(s)            |    Date    |
|---------|-------------------------------|---------------------------------|------------|
|   1.0   |Milestone 1.0 (initial) upload | Ahras, (Jack) Xiao Chu, Anupras | 2019-10-02 |
|   2.0   |     Milestone 2.0 update      | Ahras, (Jack) Xiao Chu, Anupras | 2019-10-23 |
|   3.0   |     Milestone 3.0 update      | Ahras, (Jack) Xiao Chu, Anupras | 2019-11-13 |
|   4.0   | Milestone 4.0 (final) update  | Ahras, (Jack) Xiao Chu, Anupras | 2019-12-03 |




# 1. Introduction 
The project is an imitation console of the NASA mission controller designed with the idea to inspire and educate the younger generations about the mysteries of outer-space exploration.  It is a life-size model with which the user can interact by using the various buttons and switches so they can fully immerse themselves in the experience. With the ability for the users to choose their own combinations of buttons and switches, each leading to a different outcome, the possibilities are endless.

# 1.1 Purpose
The purpose of this project is to bring space exploration related themes and games closer to the younger generation, and in turn, help raise a generation of budding astronauts and aerospace scientists.

# 1.2 Scope
We are building a small-scope project which will be made out of both hardware and software.

# 1.3 Background
Our organization wants to build a console for younger children to be able to immerse themselves with the adventures of space travel.

# 1.4 References
GitHub project layout:


Documents 
Blueprints > hardware design
				> software design
				> electrical design
				
Milestone presentations
Diagrams > MVC 
				> UML
				> lo-fidelity sketches
KanBan board

In our project, we are using blueprints to track different sections and stages of the console, this includes hardware design, which involves the physical dimensions and the weight of the wood structure. Our software design documents contains the pseudo-code and the logic communications between the Arduino and Raspberry Pi 4. Our electrical design will display the architecture of the wiring of all the buttons, switches, resistos and microcontrollers/ processors.

# 1.5 Assumptions and constraints

The task level assumption of the project is to be able to play a sound when a button is pressed or when a switch is closed. The constraint with our project are the digital inputs and outputs of the Arduino board. The main failure that we could run in would be the Arduino not being able to supply enough power to run all the LEDs and buttons. 

# 1.5 Assumptions
1.5.1 Assumptions 
• We assume that we collect all the required parts and necessary tools.
• We assume that we do not run into any major roadblocks which would set us back

1.5.2 Constraints 
• The number of input/output connections on our Arduino MEGA and Raspberry PI microcontrollers.
• Will limit the functionality/features

 1.6 Document Overview
• Documents 
• Blueprints > hardware design
				> software design
				> electrical design			
• Milestone presentations
• Diagrams > MVC 
				> UML
				> lo-fidelity sketches
• Group reflections 
• KanBan board

 2 METHODOLOGY
 • Research & examine Functional Requirement Documents of similar scale projects
 • Use resources such as Wikipedia and YouTube to help us write the FRD

3 FUNCTIONAL REQUIREMENTS 

3.1 Context
• User communicates directly with the console interface

 3.2 User Requirements
• User turns on the system with a switch on the backside
• User presses various combinations of buttons and switches
• Or, the user reads the "Official Launch Guide" made specifically for our console, to find out
  the correct launching sequence, and learn what each of the acronyms stand for
• User observes and hears various videos and sounds corresponding to their choices

 3.3 Functional Requirements
• System (Arduino MEGA and Raspberry PI) boots up and loads entry code once user toggles the main console switch 
• The microcontrollers handle various combinations of inputs (switches/buttons) and process the appropriate output
• Lights and sounds happen according to the input combinations

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE3MjgyNjc1NTQsLTExNTE3OTc1NTQsLT
ExODYzOTg3NjksMTczMTY4MDU0OSwtNzY5NDI2MTgwLC0yMDMx
MTYzODQ3XX0=
-->
