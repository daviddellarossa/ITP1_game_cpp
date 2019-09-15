#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "Game.h"

using namespace ci;
using namespace ci::app;

void prepareSettings( Game::Settings* settings )
{
    FullScreenOptions options;
    options.display(Display::getDisplays()[1]);
    settings->setFullScreen(true, options);
//    settings->setWindowSize(1600, 1000);
    settings->setMultiTouchEnabled( false );
    settings->setFrameRate(60.0f);
}
// This line tells Cinder to actually create and run the application.
CINDER_APP( Game, RendererGl, prepareSettings )

