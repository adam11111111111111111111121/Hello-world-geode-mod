#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "MusicDownloadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CustomSFXWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSFXWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSFXWidget, cocos2d::CCNode)
    
private:
    [[deprecated("CustomSFXWidget::create not implemented")]]
    /**
     */
    static CustomSFXWidget* create(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6);
public:

    /**
     * @note[short] Windows: 0x8dcf0
     */
    TodoReturn deleteSFX();

    /**
     * @note[short] Windows: 0x8eaf0
     */
    TodoReturn downloadFailed();

    /**
     * @note[short] Windows: 0x8e010
     */
    TodoReturn hideLoadingArt();

    /**
     * @note[short] Windows: 0x8cf20
     */
    bool init(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6);
    
private:
    [[deprecated("CustomSFXWidget::onCancelDownload not implemented")]]
    /**
     */
    void onCancelDownload(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSFXWidget::onDelete not implemented")]]
    /**
     */
    void onDelete(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x8e0f0
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x8e270
     */
    void onPlayback(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomSFXWidget::onSelect not implemented")]]
    /**
     */
    void onSelect(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x8dec0
     */
    TodoReturn showLoadingArt();
    
private:
    [[deprecated("CustomSFXWidget::startDownload not implemented")]]
    /**
     */
    TodoReturn startDownload();
public:

    /**
     * @note[short] Windows: 0x8e1b0
     */
    TodoReturn startMonitorDownload();
    
private:
    [[deprecated("CustomSFXWidget::updateDownloadProgress not implemented")]]
    /**
     */
    TodoReturn updateDownloadProgress(float p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::updateError not implemented")]]
    /**
     */
    TodoReturn updateError(GJSongError p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::updateLengthMod not implemented")]]
    /**
     */
    TodoReturn updateLengthMod(float p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::updatePlaybackBtn not implemented")]]
    /**
     */
    TodoReturn updatePlaybackBtn();
public:
    
private:
    [[deprecated("CustomSFXWidget::updateProgressBar not implemented")]]
    /**
     */
    TodoReturn updateProgressBar(int p0);
public:

    /**
     * @note[short] Windows: 0x8e490
     */
    TodoReturn updateSFXInfo();

    /**
     * @note[short] Windows: 0x8de40
     */
    TodoReturn updateSFXObject(SFXInfoObject* p0);
    
private:
    [[deprecated("CustomSFXWidget::verifySFXID not implemented")]]
    /**
     */
    TodoReturn verifySFXID(int p0);
public:

    /**
     * @note[short] Windows: 0x8eab0
     */
    virtual TodoReturn downloadSFXFinished(int p0);
    
private:
    [[deprecated("CustomSFXWidget::downloadSFXFailed not implemented")]]
    /**
     */
    virtual TodoReturn downloadSFXFailed(int p0, GJSongError p1);
public:

    /**
     * @note[short] Windows: 0x8e480
     */
    virtual TodoReturn songStateChanged();

    /**
     * @note[short] Windows: 0x8ebf0
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
