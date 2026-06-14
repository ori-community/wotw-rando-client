#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceData__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaceData_RaceStartFaceDirection__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_RaceData_RaceStartFaceDirection__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_RaceData__Fields_DEFINED
struct SerializedIntUberState;
struct SerializedBooleanUberState;
struct DesiredUberStateComposite;
struct List_1_EquipmentType_;
struct RaceSettings;
struct PickupBase;
struct Texture2D;
struct List_1_SceneMetaData_;
struct List_1_Moon_MoonReference_1__13;
struct BooleanUberState;
struct Transform;
struct CinematicCharacterAnimator__Array;
struct MoonTimeline;
struct List_1_Moon_Timeline_MoonTimeline_;
struct EventTriggerAnimator;
struct PlayerInsideZoneChecker;
struct TriggerColliderCallback;
struct MeshRenderer;
struct ActionSequence;
struct EventTriggerAnimator__Array;
struct Rect__Array;
struct String;
struct PlayerInsideZoneChecker__Array;
struct DynamicDataResolver;
struct RaceData__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedIntUberState* m_raceState;
    struct SerializedBooleanUberState* m_raceIconState;
    struct DesiredUberStateComposite* m_stateOverride;
    struct List_1_EquipmentType_* m_disabledAbilities;
    struct RaceSettings* m_raceSettings;
    struct PickupBase* m_reward;
    int32_t ExperienceRewardOverrideAmount;
    struct Texture2D* m_rewardIcon;
    struct List_1_SceneMetaData_* m_requiredPreviewScenes;
    struct List_1_Moon_MoonReference_1__13* m_raceSyncables;
    struct BooleanUberState* RaceInProgressState;
    struct Transform* m_startTransform;
    struct Transform* m_startLineTransform;
    struct Transform* m_endTransform;
    RaceData_RaceStartFaceDirection__Enum m_raceStartFaceDirection;

    struct CinematicCharacterAnimator__Array* m_countdownCinematicCharacterAnimators;
    struct Transform* EndCenterTransform;
    struct MoonTimeline* PreviewTimeline;
    struct List_1_Moon_Timeline_MoonTimeline_* GhostFinishTimelines;
    struct List_1_Moon_Timeline_MoonTimeline_* OriFinishTimelines;
    struct MoonTimeline* CountdownTimeline;
    struct EventTriggerAnimator* CountdownEventTrigger;
    struct MoonTimeline* SpectatorCountdownTimeline;
    struct EventTriggerAnimator* SpectatorCountdownEventTrigger;
    struct MoonTimeline* ActivateTimeline;
    struct EventTriggerAnimator* ForceFrustumInstantUpdateTriggerBegin;
    struct EventTriggerAnimator* ForceFrustumInstantUpdateTriggerEnd;
    struct PlayerInsideZoneChecker* StartZoneChecker;
    struct PlayerInsideZoneChecker* EndZoneChecker;
    struct TriggerColliderCallback* EndTriggerCollider;
    struct Transform* RewardHolder;
    struct MeshRenderer* RewardIconRenderer;
    struct ActionSequence* EnterActionSequence;
    struct ActionSequence* ExitActionSequence;
    struct EventTriggerAnimator__Array* ShowRewardChallengeTriggers;
    struct EventTriggerAnimator__Array* HideRewardChallengeTriggers;
    struct Rect__Array* Waypoints;
    struct String* m_leaderBoardId;
    struct PlayerInsideZoneChecker__Array* m_raceAreaCheckers;
    struct Bounds m_bounds;
    bool m_insideFrustum;
    struct DynamicDataResolver* m_dataResolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceData__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceData__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/BooleanUberState.h>
#include <Modloader/app/structs/CinematicCharacterAnimator__Array.h>
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/List_1_EquipmentType_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__13.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#include <Modloader/app/structs/MeshRenderer.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PickupBase.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker__Array.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/Rect__Array.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TriggerColliderCallback.h>
#endif
#undef IL2CPP_STRUCT_RaceData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceData__Fields_FWDDECL)
#include <Modloader/app/structs/RaceData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
