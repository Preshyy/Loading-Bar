**PROJECT TITLE: LOADING BAR EFFECT [C++]**
**DESCRIPTION:** This is a simple project that shows how to make a loading bar effect with C++. It is a loading bar that appears at the centre of your screen, starts its loading effect and stops
when it reaches 100%. There are text options added to this display as well, such as one just explicitly saying "LOADING..." and another one at the bottom right of the screen as a placeholder
for where the name of whatever app or platform this loading bar is used for can be placed. It is important that this program is run on Windows, as there might be some features that may not work on other platforms. 

- Libraries used in this project include the conio.h library, the windows.h library and the iostream library. The conio.h library handled the input/output console functions,
  the iostream library handled the standard input functions and the windows.h library handled the console and position declarations in lines 11 and 12. 
- In this program, you will notice that "coordxy(x, y)" is used quite frequently. This is because those have been used to specifically determine where on the console everything goes
  according to some determined x-y coordinate. 
- The function "Sleep" was also used in this program, and it is possible that it may not work beyond Windows platforms. The purpose of this function is to create the loading effect
  as the symbols used in the loading bar are left on display for 100 miliseconds at every iteration of the loop. 
- The text "Colour" is also used. This is due to a difference in English variation and not a spelling error.
- The "_getch()" feature used in line 89 is meant to keep the console active until any key is pressed. 

Everything about this program is written in C++ and it was made with Visual Studio. The purpose behind making this project was to get an understanding on how something like
a loading bar can be made with existing visual libraries in C++, while manipulating functions and coordinate positions. As a learning objective, this project introduced me to the process of using ASCII
symbols as display parameters in my code. It also taught me the importance of loops to carry out specific iterations that each lead to different outcomes, like with the loading effect with each iteration
looping every 100 miliseconds but with each repitition, something different is done. 

**CREDITS:** YouTube, Google. 
**CONTACT:** Email: precioussunday@my.smcccd.edu
**KNOWN ISSUES:** None that was not already stated.
**CHANGE LOG:** No changes made as of 25/02/2024.
