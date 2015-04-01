/* Compile with gcc rovarspraket.c -o rovarspraket -lncurses */

#include <stdio.h>
#include <curses.h>


int main(void) {
   initscr();
   clear();
   noecho();
   timeout(-1);
   while(1){
      int c = getch();
      if(c==27) /* ESC key pressed */
         break;
      else if(c=='b' || c=='c' ||
            c=='d' || c=='f' ||
            c=='g' || c=='h' ||
            c=='j' || c=='k' ||
            c=='l' || c=='m' ||
            c=='n' || c=='p' ||
            c=='q' || c=='r' ||
            c=='s' || c=='t' ||
            c=='v' || c=='w' ||
            c=='x' || c=='z')
         printw("%co%c", c, c);
      else
         printw ("%c", c);
      refresh();
   }
   endwin();
   return 0;
}
