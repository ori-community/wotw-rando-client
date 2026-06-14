#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinUI__Fields_DEFINED
struct LegacyTransparencyAnimator;
struct GameObject;
struct LegacyAnimator;
struct MoonTimeline;
struct MessageProvider;
struct BaseAnimator;
struct ParticleSystem;
struct Transform;
struct List_1_UnityEngine_Renderer_;
struct Renderer__Array;
struct AbilityType__Enum__Array;
struct SeinUI__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacyTransparencyAnimator* TransparencyAnimator;
    struct GameObject* UI;
    struct GameObject* HUD;
    struct LegacyTransparencyAnimator* RightTransparencyAnimator;
    struct GameObject* RightUI;
    struct LegacyTransparencyAnimator* LeftTransparencyAnimator;
    struct GameObject* LeftUI;
    struct LegacyTransparencyAnimator* BottomLeftTransparencyAnimator;
    struct GameObject* BottomLeftUI;
    struct LegacyAnimator* ExperienceOrbShake;
    struct LegacyAnimator* EnergyOrbShake;
    struct LegacyAnimator* KeystonesShake;
    struct LegacyTransparencyAnimator* KeystoneTransparencyAnimator;
    struct LegacyAnimator* EyestonesShake;
    struct LegacyTransparencyAnimator* EyestoneTransparencyAnimator;
    struct LegacyAnimator* MapStonesShake;
    struct LegacyAnimator* HealthShake;
    struct LegacyAnimator* SoulFlameNotReadyShake;
    struct LegacyAnimator* SpiritLightShake;
    struct LegacyAnimator* SeedsShake;
    struct MoonTimeline* LowHealthWarningTimeline;
    struct GameObject* EnergyBar;
    struct GameObject* KeystoneUI;
    struct GameObject* EyestoneUI;
    struct GameObject* MapStoneUI;
    struct GameObject* SoulFlameFull;
    struct GameObject* SoulFlameUI;
    struct GameObject* SoulFlameUIFlame;
    struct GameObject* SpiritLightUI;
    struct GameObject* SeedsUI;
    struct GameObject* AbilityBindingUI;
    struct GameObject* HealthContainerUI;
    struct GameObject* EnergyContainerUI;
    float SecondsToShowSavingNotification;
    struct GameObject* SavingNotificationUI;
    struct MessageProvider* SoulFlameReadyMessage;
    float SoulFlameReadyMessageDuration;
    struct BaseAnimator* EnergyBarPulse;
    struct BaseAnimator* HealthPulse;
    struct ParticleSystem* EnergizeParticle;
    struct GameObject* ButtonIconTemplate;
    struct Transform* BindButtonXAnchor;
    struct Transform* BindButtonYAnchor;
    struct Transform* BindButtonBAnchor;
    struct Vector3 AbilityIconScale;
    struct MoonTimeline* HealthContainerShakeTimeline;
    struct MoonTimeline* GetHalfHealthContainerTimeline;
    struct MoonTimeline* GetFullHealthContainerTimeline;
    struct GameObject* FullHealthContainerGroup;
    struct GameObject* HalfHealthContainerGroup;
    struct MoonTimeline* EnergyContainerShakeTimeline;
    struct MoonTimeline* GetHalfEnergyContainerTimeline;
    struct MoonTimeline* GetFullEnergyContainerTimeline;
    struct GameObject* FullEnergyContainerGroup;
    struct GameObject* HalfEnergyContainerGroup;
    float m_timeToShowSavingNotification;
    float m_showSpiritLightTimer;
    float m_showSeedsTimer;
    float m_showHealthContainerTimer;
    float m_showEnergyContainerTimer;
    float ShowSpiritLightTime;
    float ShowSeedsTime;
    float ShowHealthContainerTime;
    float ShowEnergyContainerTime;
    bool KeepActive;
    float m_showKeystonesTimer;
    float m_showEyestonesTimer;
    float ShowKeyStoneTime;
    struct List_1_UnityEngine_Renderer_* m_iconRenderers;
    bool ShowOnSettingsScreen;
    float FaderTransparency;
    float m_lastHealthPercent;
    float LowHealthWarningPercent;
    float m_rightOpacity;
    float m_lastRightOpacity;
    float m_leftOpacity;
    float m_lastLeftOpacity;
    float m_bottomLeftOpacity;
    float m_lastBottomLeftOpacity;
    float m_keystoneOpacity;
    float m_lastKeystoneOpacity;
    float m_eyestoneOpacity;
    float m_lastEyestoneOpacity;
    float m_opacity;
    float FadeTime;
    bool m_showUI;
    bool ShowOnlyRightUI;
    bool ShowSaveGameNotification;
    bool WasLastKeystoneAnEyestone;
    float m_lastOpacity;
    float m_goalOpacity;
    bool m_wasCompletelyFadedIn;
    bool hasRebinder;
    bool m_buttonsNotEmptyOrTorch;
    struct Renderer__Array* m_cachedAbilityIconRenderer;
    struct AbilityType__Enum__Array* m_cachedAbilityType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinUI__Fields_FWDDECL
#include <Modloader/app/structs/AbilityType__Enum__Array.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyAnimator.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinUI__Fields_FWDDECL)
#include <Modloader/app/structs/SeinUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
