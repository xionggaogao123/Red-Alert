#ifndef __Buildings_H_
#define __Buildings_H_
#include"cocos2d.h"
#include<iostream>
#include"cocos2d.h"
#include"ConstUtil.h"
#include"GameScene.h"
#include"Bar.h"
#include"network/GameManager.h"
USING_NS_CC;




class Buildings :public Sprite
{
	friend class Bar;
	friend class GameManager;
	friend class Soldiers;
public:
	Buildings(BuildingTypes buildingType);        //通过枚举类来判段需产生什么建筑物
	static Buildings *creatWithBuildingTypes(BuildingTypes buildingType);
	void update(float dt);
	void remove();                                //从地图上移除

	vector<Soldiers *> &getAttackers();
private:
	CC_SYNTHESIZE(BuildingTypes, buildingtype, BuildingType);
	CC_SYNTHESIZE(int, health, currentHealth);
	CC_SYNTHESIZE(int, price, Price);
	CC_SYNTHESIZE(int, maxHealth, MaxHealth);
	CC_SYNTHESIZE(int, player_id, playerID);
	CC_SYNTHESIZE(int, id, ID);

	vector<Soldiers *> attackers;
	//CC_SYNTHESIZE(Soldiers *, attacker, Attacker);

	//血条
	Bar *hpBar = nullptr;
	void createBar();
	void displayHpBar();
	void hideHpBar();
};

#endif // !__Buildings_H_



