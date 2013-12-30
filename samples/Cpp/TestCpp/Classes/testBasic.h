#ifndef _TEST_BASIC_H_
#define _TEST_BASIC_H_

#include "cocos2d.h"
#include "VisibleRect.h"

USING_NS_CC;

class TestScene : public Scene
{
public: 
    TestScene(bool bPortrait = false, bool physics = false);
    virtual void onEnter();

    virtual void runThisTest() = 0;
};

// C++ 11

#define CL(__className__) [](){ return __className__::create();}
#define CLN(__className__) [](){ return new __className__();}

#endif
