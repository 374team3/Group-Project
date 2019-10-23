# Functional Requirements Document

| Version | Description of Change |            Author(s)            |    Date    |
|---------|-----------------------|---------------------------------|------------|
|   2.0   | Milestone 2.0 update  | Ahras, (Jack) Xiao Chu, Anupras | 2019-10-21 |

**TITLE:** FRD Milestone-2
**Team names:** SpaceMinds
**Team members:** Ahras Ali, Xiao Chu Zhao, Anupras Burokas
**GitHub URL:**[ https://github.com/374team3/Group-Project](https://github.com/374team3/Group-Project)

# 1. Introduction 
The project is an imitation console of the NASA mission controller designed with the idea to inspire and educate the younger generation about the mysteries of outer-space exploration.  It is a life-size model with which the user can interact by using the buttons and switches so they can fully immerse themselves in the experience. With the ability for the users to choose their own combinations of buttons and switches, each leading to a different outcome, the possibilities are endless.
# 1.1 Purpose
The purpose of this project is to bring space exploration related themes and games closer to the younger generation, and in turn, help raise a generation of budding astronauts and aerospace scientists.

# 1.2 Scope
We are building a small-scope project which will be entirely hardware for the user's part.
# 1.3 Background
Our organization wants to build a console for kids to be able to challenge themselves with the adventures of space travel.

# 1.4 References
GitHub project layout:

Meeting summaries 

Documents 
Blueprints > hardware design
				> software design
				> electrical design
				
Milestone presentations
Diagrams > MVC 
				> UML
				> lo-fidelity sketches
group reflections 
KanBan board
In our project, we are using blueprints to track different sections and stages of the console, this includes hardware design, which involves the physical dimensions and the weight of the wood structure. Our software design documents contains the pseudo-code and the logic communications between the Arduino and Raspberry Pi 4. Our electrical design will display the architecture of the wiring of all the buttons, switches, resistos and microcontrollers/ processors.

# 1.5 Assumptions and constraints

The task level assumption of the project is to be able to play a sound when a button is pressed or when a switch is closed. The constraint with our project are the digital inputs and outputs of the Arduino board. The main failure that we could run in would be the Arduino not being able to supply enough power to run all the LEDs and buttons. 

# 1.5 Assumptions
1.5.1 Assumptions 
• We assume that we collect all the required parts and workspace.

1.5.2 Constraints 
• The number of input/output connections on our Arduino MEGA and Raspberry PI microcontrollers.
• Will limit the functionality/features

 1.6 Document Overview
• Meeting summaries 
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
 • Use resources such as WikiPedia and YouTube to help us write the FRD

3 FUNCTIONAL REQUIREMENTS 

3.1 Context
• User communicates directly with the console interface

 3.2 User Requirements
• User turns on the system with a switch on the backside
• User presses various combinations of buttons and switches
• User observes and hears various videos and sounds corresponding to their choices

 3.3 Functional Requirements
• System (Arduino MEGA and Raspberry PI) boots up and loads entry code once user toggles the switch 
• The microcontrollers handle various combinations of inputs (switches/buttons) and process the appropriate output
