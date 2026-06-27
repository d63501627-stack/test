#include <Geode/Geode.hpp>
#include <Geode/modify/LevelSelectLayer.hpp>

using namespace geode::prelude;

class $modify(LevelSelectLayer) {
    bool init() {
        if (!LevelSelectLayer::init()) return false;

        auto menu = CCMenu::create();
        menu->setPosition({0, 0});
        this->addChild(menu);

        auto btnSprite = CCSprite::createWithSpriteFrameName("GJ_plusBtn_001.png");
        auto btn = CCMenuItemSpriteExtra::create(btnSprite, this, menu_selector(LevelSelectLayer::onMyButton));
        btn->setPosition({300, 50});
        menu->addChild(btn);

        return true;
    }

    void onMyButton(CCObject* sender) {
        FLAlertLayer::create("Info", "Кнопка работает!", "OK")->show();
    }
};
