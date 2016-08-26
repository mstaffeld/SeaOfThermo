# SeaOfThermo 

### A repo containing some c code and some timing loops for the sole purpose of helping my brain understand a rudimentary language. 

Hopefully the code evolves over time to demonstrate the following practices:
* TDD - Test Driven Development 
* Source Control using git and incremental "baby-step" commits. 
* Convention-y and industry 'best practice' conventions (name things properly and organize the file system correctly.) 
* State Machine in c. 

#### Definitions
* Furnace
* Thermostat

All Temperatures will be using Farenheiht for human interaction. 
Time will be standard time, not metric time. (Minutes for humans)

#### Use Cases/Scenarios/Stories 

#### 1. Thermostat should turn on the furnace if temperature drops below 60F.

#### 2. Thermostat should turn off once the furnace has raised the temperature to 70F. 

#### 3. The furnace should not be allowed to run again for 5 minutes. (From the time it last engaged in the process of raising the room temperature.)

#### 4. The thermostat should allow for being enabled and disabled. 

#### 5. If a 'disable' call or 'enable' call is made to the furnace there needs to be a time gap. You cannot just turn it on and off like a light switch. You should avoid turning on the furnace and turning it off quickly. Maybe 1 minute after the turn on is engaged, you should be allowed to turn it off. Short run cycles are bad for some furnaces. Once you turn on the furnace, it will take a minute or so to warm up. You will not see any heat on the sensors until after x amount of itme. 

#### 6. If the furnace is on for more than 5 minutes and there is no rise in temperature, then the system should turn off.
