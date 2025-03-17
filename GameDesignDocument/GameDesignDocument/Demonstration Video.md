## Criteria Guide
Code Quality & Comments - 4 examples
Gameplay - 4 Examples |||
Use of additonal IO - 3 examples
Use of graphics API functions - 2 examples |
Sprite Design and animation - 4 examples
HUD - 1 Example | done
Main Menu - 1 example | done
Ability to restart - 1 example | done
Use of random numbers 1 example | done
Novel feature - 1 example
Use of serial port - 2 examples || done
use of sound - 2 examples || done

## Introduction
Spudman is a game inspired by the classic Tamagotchi. The main goal of Spudman is to keep your pet potato alive as long as possible. 

To create Spudman, we pushed the capabilities of the STM32-L031K6 micro controller beyond it's limits. Reaching over 95% flash memory usage we spared little room for inefficiencies, every line of code was carefully implemented with consideration of the limitations on this STM platform. 

Enough talking, lets boot up the game.

## Boot Game - Serial Comms Example 1, Graphics API Example 1, Main Menu Example 1, Sprite Design and Animation Example 1.
**Serial Comms Example 1/2**
When you boot up the game, you are met with a black screen with the words "enter name:", This is your cue to name your pet potato using the keyboard and terminal through **Serial Communications** between the microcontroller and PC.

We will give it the name "spuddy" for this demonstration.

**Graphics API Example 1/2 & Main Menu Example 1/1**
After you have entered the name, and pressed enter, you are met with the main menu. A great example of graphics API functions at their best in Spudman. A clever workaround the memory limitations of this platform. The **graphics API functions** allowed use to fill out the screen with great visuals, something that would be impossible without the graphics API as an image large enough to fill the screen would amount to 40Kb of memory, 8Kb over this microcontrollers 32Kb limit.  

**Sprite Design and Animation example 1/4**
Now for greater detail into the code.
- {Show code for start menu, and explain}
- I was able to create this menu, using only coloured rectangles for the soil and sky, and circles for the bumpy grass.
- Afterwards, I was able to use our precious flash memory on these two animations you see here.
- Our main character Spudman, and the grossly incandescent sun.
  
Lets press start

## Pet Stage - Gameplay Example 1, Random Numbers Example 1, HUD Example 1, Sprite Design and Animation Example 2, Use of Graphics API example 2, Use of sound Example 1.
**Graphics API Example 2/4**
Here we have the pet stage, with a beutiful background that was created with the use of Graphics API.

**Use of sound Example 1/2**
You may have noticed when we pressed the start button, a tactile sound was played. This is one example of our implementation of sound in our game.

**Sprite Design and Animation Example 2/2**
As you can see, Spudman is joyfully prancing around the soil with a smooth animation and carefully though out sprite design.

**Random Numbers Example 1/1**
Random numbers were used to determine the direction, and how far it is going to walk. 
- {Show code for movement, and explain}

The aim of the game is to keep him alive and happy for as long as possible.
- You can see your score/time here {point to middle}
- Now, to take care of Spudman, have have to keep him happy and full. You can see his health bar here, {point to top left}, and his fun bar here {point to top right}
- As Spudman takes a walk, you can see that he is getting unhappier and hungry!
- To increase them, we can play fun little mini games.
- {Point to bottom left and bottom right}
- Lets hurry up before he dies!

## Hunger Game - Gameplay Example 2, Sprite Design & Animation Example 2, 
- This mini game increased Spudmans Hunger bar
- Turns out Spudman is a potato, and potatoes need sunlight to survive
- Lets try catch as many sunlight as we can.
- Using the left and right buttons, we can move Spudman towards the falling rays.
- A total of 5 sun rays will come down. 
- Catching more rays will give more food, so try to collect as many as we can.
- Moving Spudman left or right, plays a sound for a truly tactile IO experience.

## Fun Game  - Gameplay Example 3, Sprite Design & Animation Example 3.
- It seems the Spudmans fun meter has fallen considerably, We must keep it up to keep him alive.
- lets play the fun mini game.
- Spudmans mortal enemy is slugs, so lets try jump over them.
- Press up to jump.
- For each slug you successfully jump over, we are rewarded points towards his fun bar.
- If Spudman hits a slug, then the mini game ends.

## Serial Output - Serial Comms Example 2
What happens when the worst comes to worst and Spudman dies? Are you expected to keep note of your time alive?

Ofcourse not, When Spudman eventually dies, the custom name and time alive is printed to terminal. So that you can easily keep track of all your attempts.

## Restart - Ability to restart Example 1
Now that we have finished grieving our pet, we can swiftly replace it with a new one.

With the press of a button, we can restart and continue playing!

