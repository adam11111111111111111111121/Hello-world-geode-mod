#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGameLoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGameLoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGameLoadingLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x1ca920
     */
    static GJGameLoadingLayer* create(GJGameLevel* level, bool editor);
    
private:
    [[deprecated("GJGameLoadingLayer::gameLayerDidUnload not implemented")]]
    /**
     */
    void gameLayerDidUnload();
public:

    /**
     * @note[short] Windows: 0x1ca9d0
     */
    bool init(GJGameLevel* level, bool editor);

    /**
     * @note[short] Windows: 0x1caab0
     */
    void loadLevel();

    /**
     * @note[short] Windows: 0x1ca820
     */
    static GJGameLoadingLayer* transitionToLoadingLayer(GJGameLevel* level, bool editor);
    
private:
    [[deprecated("GJGameLoadingLayer::onEnter not implemented")]]
    /**
     */
    virtual void onEnter();
public:
    
private:
    [[deprecated("GJGameLoadingLayer::onEnterTransitionDidFinish not implemented")]]
    /**
     */
    virtual void onEnterTransitionDidFinish();
public:
    GJGameLevel* m_level;
    bool m_editor;
};
