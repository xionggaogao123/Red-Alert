//服务端界面

#ifndef __ServerScene_H_
#define __ServerScene_H_
#include"cocos2d.h"
#include<iostream>
#include"ConstUtil.h"
#include "extensions/cocos-ext.h"  
#include "popupLayer/PopupLayer.h"
#include"MyUtility.h"
#include"GameScene.h"
USING_NS_CC_EXT;
USING_NS_CC;
#define START_SERVER 10
#define START_GAME 11
#define GO_BACK 12

class ServerScene :public Layer
{
public:
	static Scene* createScene();                                      //创建场景
	virtual bool init();                                              //初始化场景
	CREATE_FUNC(ServerScene);                                          //完成create方法代码的生成
	void addMenuSprites();                                            //添加Menu
private:
	Size visibleSize;                                                 //窗口尺寸
	void addBackgroundSprite();                                       //添加场景背景
	void menuTouchDown(Object *pSender, Control::EventType event);    //Menu点击回调方法
	void editBoxReturn(EditBox* editBox);
	void connectionSchdeule(float f);
	Label* connection_msg_;
};

#endif // !__ServerScene_H_
