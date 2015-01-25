//main.cpp

#include <allegro.h>
#include "Character.h"

using namespace std;

BITMAP* buffer;
Character myChar;

void Setup(){
  const char* l1="left1.bmp";
  const char* l2="left2.bmp";
  const char* l3="left3.bmp";
  const char* r1="right1.bmp";
  const char* r2="right2.bmp";
  const char* r3="right3.bmp";
  const char* u1="up1.bmp";
  const char* u2="up2.bmp";
  const char* u3="up3.bmp";
  const char* d1="down1.bmp";
  const char* d2="down2.bmp";
  const char* d3="down3.bmp";



  buffer= create_bitmap(640, 480);
  myChar.SetImagesLeft( const_cast<char*>(l1),const_cast<char*>(l2),const_cast<char*> (l3));
  myChar.SetImagesRight(const_cast<char*>(r1),const_cast<char*>(r2),const_cast<char*>(r3));
  myChar.SetImagesUp(const_cast<char*>(u1), const_cast<char*>(u2),const_cast<char*>(u3) );
  myChar.SetImagesDown(const_cast<char*>(d1),const_cast<char*>(d2), const_cast<char*>(d3));
  
  myChar.Show( screen);

}

void movePlayer(){

    if( key[KEY_LEFT]){
        myChar.MoveOnX( LEFT, buffer, screen);
    } else if( key[KEY_RIGHT]){
        myChar.MoveOnX( RIGHT, buffer, screen);
    } else if( key[KEY_UP]){
        myChar.MoveOnY( UP, buffer, screen);
    } else if( key[KEY_DOWN]){
        myChar.MoveOnY( DOWN, buffer, screen);
    }

}

int main(int argc, char *argv[])
{
    allegro_init(); 
    install_mouse(); 
    install_keyboard(); 
    set_color_depth(16); 
    
    set_gfx_mode( GFX_AUTODETECT, 640, 480, 0, 0); 
    
    Setup();
    
    while( !key[KEY_ESC]){
        movePlayer();
    }
    
    return 0;
}
END_OF_MAIN();

