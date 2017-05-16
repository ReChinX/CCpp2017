#ifndef _GAME_MENU_H_
#define _GAME_MENU_H_

#include "cocos2d.h"
class GameMenu : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	void menuStartCallBack(cocos2d::Ref* ref);

	void menuEndCallBack(cocos2d::Ref* ref);

	CREATE_FUNC(GameMenu);
};

#endif
