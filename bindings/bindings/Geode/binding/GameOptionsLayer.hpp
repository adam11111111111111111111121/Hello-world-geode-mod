#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class GameOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] Windows: 0x213050
     */
    static GameOptionsLayer* create(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: 0x2130f0
     */
    bool init(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: 0x213930
     */
    void onPracticeMusicSync(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2139a0
     */
    void onUIOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x213620
     */
    TodoReturn showPracticeMusicSyncUnlockInfo();

    /**
     * @note[short] Windows: 0x213150
     */
    virtual TodoReturn setupOptions();

    /**
     * @note[short] Windows: 0x2139c0
     */
    virtual TodoReturn didToggle(int p0);
};
