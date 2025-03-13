## Introduction
- Hi, I'm Neil, I'm Aleksy, and I'm Keyvin. Welcome to our newly developed game, called Spudman.
- This is a game about taking care of a pet potato. Loosely based on Tamagotchi, we wanted to implement our own version of the game, using and pushing the capabilities of the STM32-L031K6 micro controller.
- Enough talking, lets boot up the game.

## Boot Game

- As you can see, we are first met with the start menu.
- A major issue I found with the micro controller was the severely limited about of flash memory it could store.
- Using up an image the size of the screen, would use up over 40kb of the 32kb we have available.
- Therefore, I had to get created and find an alternative to display an image on the screen.
- Using the additional graphics API functions, as shown here 
- {Show code for start menu, and explain}
- I was able to create this menu, using only coloured rectangles for the soil and sky, and circles for the bumpy grass.
- Afterwards, I was able to use our precious flash memory on these two animations you see here.
- Our main character Spudman, and the grossly incandescent sun.
- Lets press start

## Pet Stage

- Here we have the pet stage.
- As you can see, Spudman is joyfully prancing around the soil...
- Random numbers were used to determine the direction, and how far is is going to walk. 
- {Show code for movement, and explain}
- The aim of the game is to keep him alive and happy for as long as possible.
- You can see your score/time here {point to middle}
- Now, to take care of Spudman, have have to keep him happy and full. You can see his health bar here, {point to top left}, and his fun bar here {point to top right}
- As Spudman takes a walk, you can see that he is getting unhappier and hungry!
- To increase them, we can play fun little minigames.
- {Point to bottom left and bottom right}
- Lets hurry up before he dies!
