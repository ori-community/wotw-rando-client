#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSettings__Fields_DEFINED)
#include <Modloader/app/structs/AkAudioAPI__Enum.h>
#include <Modloader/app/structs/AkPanningRule__Enum.h>
#include <Modloader/app/structs/ControlScheme__Enum.h>
#include <Modloader/app/structs/GameplaySoundManager_AudioQualitySetting__Enum.h>
#include <Modloader/app/structs/KeyboardLayout__Enum.h>
#include <Modloader/app/structs/Language__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/PCQualityModeManager_QualityMode__Enum.h>
#include <Modloader/app/structs/ShowUIType__Enum.h>
#include <Modloader/app/structs/UnlockedCutscenes__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AkAudioAPI__Enum_DEFINED) && defined(IL2CPP_STRUCT_AkPanningRule__Enum_DEFINED) && defined(IL2CPP_STRUCT_PCQualityModeManager_QualityMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_GameplaySoundManager_AudioQualitySetting__Enum_DEFINED) && defined(IL2CPP_STRUCT_Language__Enum_DEFINED) && defined(IL2CPP_STRUCT_UnlockedCutscenes__Enum_DEFINED) && defined(IL2CPP_STRUCT_ControlScheme__Enum_DEFINED) && defined(IL2CPP_STRUCT_KeyboardLayout__Enum_DEFINED) && defined(IL2CPP_STRUCT_ShowUIType__Enum_DEFINED)
#define IL2CPP_STRUCT_GameSettings__Fields_DEFINED
struct UISoundSettingsAsset;
struct String;
struct GameSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct UISoundSettingsAsset* Sounds;
    AkAudioAPI__Enum m_selectedAudioAPI;

    uint32_t m_selectedAudioOutputDeviceId;
    uint64_t m_currentOutputID;
    bool m_spatialAudioEnabled;
    AkPanningRule__Enum m_audioPanningRule;

    bool HasLoadedGameSettingsOnce;
    int32_t m_targetFramerate;
    float m_HDRUIBrightnessBoostValue;
    int32_t m_selectedSaveSlot;
    bool m_dynamicGraphicsToggled;
    int32_t m_dynamicGraphicsTargetFPS;
    PCQualityModeManager_QualityMode__Enum m_pcQualityMode;

    bool m_shownFirstTimeQualitySettings;
    GameplaySoundManager_AudioQualitySetting__Enum m_audioQualitySetting;

    int32_t m_dynamicGraphicsMaxDRSDownscaleX;
    int32_t m_dynamicGraphicsMaxDRSDownscaleY;
    bool m_achievementToastEnabled;
    struct String* m_playfabSignInId;
    bool m_isTrialAchievementsDirty;
    bool m_damageTextEnabled;
    bool m_motionBlurEnabled;
    float m_vibrationStrength;
    Language__Enum m_language;

    float m_masterVolume;
    float m_musicVolume;
    float m_ambienceVolume;
    bool m_useSpatialAudioBus;
    float m_soundEffectsVolume;
    float m_brightness;
    float m_displayScale;
    float m_sharpness;
    float m_blurScale;
    float m_contrast;
    float m_saturation;
    float m_paperwhite;
    UnlockedCutscenes__Enum m_unlockedCutscenes;

    bool m_oneLifeModeUnlocked;
    bool m_vsync;
    float m_deadZoneLeftStick;
    ControlScheme__Enum m_currentControlSchemes;

    ControlScheme__Enum m_keyboardControlSchemes;

    KeyboardLayout__Enum m_keyboardLayout;

    bool m_achieved_completePrologue;
    bool m_achieved_reachSpiritTree;
    bool m_achieved_activateFirstSkill;
    bool m_achieved_findSecret;
    bool m_achieved_findMapStone;
    bool m_mapTrailEnabled;
    ShowUIType__Enum m_hudEnabled;

    int32_t m_defaultDRSTime;
    float m_defaultResolutionScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameSettings__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#endif
#undef IL2CPP_STRUCT_GameSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameSettings__Fields_FWDDECL)
#include <Modloader/app/structs/GameSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
