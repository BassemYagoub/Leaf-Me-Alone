# Leaf-Me-Alone
VR Parkour game made in Unity

![image](https://user-images.githubusercontent.com/33696915/152144163-8d9c6ca4-ffbd-4b55-b2bc-ed74b657a344.png)

# Game presentation

https://www.youtube.com/watch?v=MONGije0lcY

The purpose of the game is to adapt itself to the player. It has three different phases : tutorial phase, calibration phase and adaptation phase. The passage between the phases is not visible to the player. When you create a new game, a new user profile will be created and you start with the tutorial phase. If you choose to continue a game, the user profile (which is a JSON file) will be loaded and the game will start according to your level in the adaptation phase. The tutorial parts and calibration levels are defined in several JSON files.

You can find a build for Windows x64 if you want to play the game in the *Executable* repository.

## Tutorial phase
In this phase, the player learns how to play the game gradually.
The tutorial phase is composed of three parts :
1) Only treelines generated
2) Treelines with obstacles
3) Treelines with obstacles and enemies.

## Calibration phase
In this phase, the calibration levels are loaded gradually and the player's level is increased of 20 each time a calibration level has passed.
These are the levels :
1) Very easy
2) Easy
3) Medium
4) Hard
5) Very Hard

## Adaptation phase
The adaptation phase starts when you lose in the calibration phase or when you finish it. Different adaptations are made to increase or decrease difficulty according to the player's level. The last level won is loaded and the game adapts itself gradually :
### General adaptations
- The depth speed is increased through time.
- The playing time is compared to the last playing time
- If you haven't played since x days, the game will take it into consideration and reduce your level of x points.
### Katana adaptations
- Enemies are more spaced if you don't move a lot your katana (they are more centered if you move it a lot)
- Enemies are differently oriented if you don't move a lot your katana (they look straight ahead if you move it a lot)
### Shuriken adaptations
- The cooldown to reuse a shuriken is longer when you use it a lot (and shorter when it is not used a lot)
- Enemies are smaller if you are precise with the shuriken (and bigger if you aren't)

When you lose a game, a feedback appears to help you.

![image](https://user-images.githubusercontent.com/33696915/152143788-1f69280f-ac01-4bbf-999a-ba2fb4fe5647.png)
