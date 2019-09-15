//
// Created by deedeeaar on 15/09/2019.
//

#include "Game.h"

Game::Game(): App(),
              floorPosY{this->getWindowHeight() * 3/4},
              player{this->getWindowWidth()/2, floorPosY, 100}{

}

//Game::Game(){}


void Game::mouseDrag( MouseEvent event )
{
    // Store the current mouse position in the list.

}

void Game::keyDown( KeyEvent event )
{
    if( event.getChar() == 'f' ) {
        // Toggle full screen when the user presses the 'f' key.
        setFullScreen( ! isFullScreen() );
    }
    else if( event.getCode() == KeyEvent::KEY_SPACE ) {
        // Clear the list of points when the user presses the space bar.
        //mPoints.clear();
    }
    else if( event.getCode() == KeyEvent::KEY_ESCAPE ) {
        // Exit full screen, or quit the application, when the user presses the ESC key.
        if( isFullScreen() )
            setFullScreen( false );
        else
            quit();
    }
}
//
//void Game::update(){
//
//}
//
void Game::draw()
{
    // Clear the contents of the window. This call will clear
    // both the color and depth buffers.
    gl::clear(Color(0.3f, 0.65f, 1.0f ));


    gl::color( 0.0f, 0.75f, 0.0f );
    gl::drawSolidRect(Rectf(0, floorPosY, this->getWindowWidth(), this->getWindowHeight()));

    player.draw();
}
