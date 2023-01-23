#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapTransitionManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapTransitionManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapTransitionManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GameMapTransitionManager__Fields_DEFINED
struct UISoundSettingsAsset;
struct ContextSet;
struct TweenDelayAnimatorContext;
struct ForceRefreshAnimatorContext;
struct GameMapTransitionManager__Fields {
    struct MonoBehaviour__Fields _;
    struct UISoundSettingsAsset* Sounds;
    float m_zoomTime;
    float m_previousZoomTime;
    float m_transitionCooldown;
    struct ContextSet* m_contextSet;
    struct TweenDelayAnimatorContext* m_areaMapFadeDelay;
    struct ForceRefreshAnimatorContext* m_forceRefreshAnimatorContext;
    bool m_areaMode;
    float ZoomDuration;
    bool _ForbidWorldMapUntilClose_k__BackingField;
    float m_mouseWheelSmooth;
    float m_zoomSpeed;
    bool m_zeroZoom;
    float m_mouseWheel;
    float m_recenteringThreshold;
    float m_transitionInputDelayTimer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapTransitionManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameMapTransitionManager__Fields_FWDDECL
#include <Modloader/app/structs/ContextSet.h>
#include <Modloader/app/structs/ForceRefreshAnimatorContext.h>
#include <Modloader/app/structs/TweenDelayAnimatorContext.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#endif
#undef IL2CPP_STRUCT_GameMapTransitionManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapTransitionManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameMapTransitionManager__Fields_FWDDECL)
#include <Modloader/app/structs/GameMapTransitionManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapTransitionManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
