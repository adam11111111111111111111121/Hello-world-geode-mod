#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlayerFireBoostSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "PlayerFireBoostSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerFireBoostSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x2dab20
     */
    static PlayerFireBoostSprite* create();

    /**
     * @note[short] Windows: 0x2dac30
     */
    void animateFireIn();

    /**
     * @note[short] Out of line
     */
    void animateFireOut();
    
private:
    [[deprecated("PlayerFireBoostSprite::loopFireAnimation not implemented")]]
    /**
     */
    TodoReturn loopFireAnimation();
public:
    
private:
    [[deprecated("PlayerFireBoostSprite::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    float m_size;
};
