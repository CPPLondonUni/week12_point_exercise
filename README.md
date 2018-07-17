
# Week 12 structs exercise #

## Exercise 1 ##

* The starter code contains the point struct from last week, 
  and an implementation of operator==

* Tasks:
   
  - Implement operator!=

  - Implement (binary) operator+ and operator-
 
  - Implement operator+= and operator-=.
    What type should these functions return? 
    (Think: do as the ints do!)

  - (Harder) Implement operator<< for output streams

  - Test all your operator overloads in your main() routine
  
  ## Exercise 2 ##
  
  * Add a line struct to the project from the last exercise
  
  * A line should have two member variables of type point,
  named start and end
  
  * Add a constructor to line which takes two points.
  Use this to initialise the start and end members.
  
  * Add a default constructor to line, which sets
  both start and end to (0, 0)
  
  * Test the new constructors in your main() function
  
  * Experiment with using =default and =delete with your 
  default constructor. What error messages do you get? 