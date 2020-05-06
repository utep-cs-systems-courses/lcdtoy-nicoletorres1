/** \file lcddemo.c
 *  \brief A simple demo that draws a string and circle
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and the circle */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_PINK);

  drawString5x7(20,20, "Nicole", COLOR_BLACK, COLOR_WHITE);
  /*

  fillRectangle(30,30, 60, 60, COLOR_PINK);

  /* THIS MAKE A DIAGONAL LINE
  int j = 80;
  for(int i = 30; i<80; i++){
    drawPixel(i, j++, COLOR_BLACK);
  }
  */

  /* this drwas a pixel*/
  drawPixel(50, 50, COLOR_GREEN);

  /*this makes a filled triangle
  for(int col = -50; col <= 50; col++){
    for(int row = -col; row <= col; row--){
      drawPixel(col + 40, row + 80, COLOR_YELLOW);
    }
  }
  */
  
  /*this to make an isoolese triangle*/
  for(int c =0;  c <=10; c++){
    for(int r =-c; r <= c; r++){
      drawPixel(c + 40, r + 40, COLOR_BLACK);
    }
  }


  
}
