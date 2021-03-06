/** @file WinTxt.h
 */
#ifndef WINTXT_H
#define WINTXT_H

/** @brief This class handls the display of the game in the terminal
 */
class WinTXT {
    private :
        int dimx;
        int dimy;
        char* win;

    public :
        WinTXT(int dx, int dy);
        ~WinTXT();
        void clear(char c=' ');
        void print(int x, int y, char c);
        void print (int x, int y, char* c);
        void draw (int x=0, int y=0);
        void pause();
        char getCh();
};

void termClear ();

#endif