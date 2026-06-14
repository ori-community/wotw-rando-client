#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossEscapeBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossEscapeBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossEscapeBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_KwolokBossEscapeBehaviour__Fields_DEFINED
struct MoonTimeline;
struct GameObject;
struct Transform;
struct List_1_Moon_ScalableAnimationPlayer_;
struct DamageDealer_OverrideInfo;
struct KwolokBossEscapeBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline* EscapeTimeline;
    struct GameObject* KillWallGameObject;
    struct Transform* KwolokReferencePosition;
    float MinSpeedDistance;
    float SweetSpotDistance;
    float MaxSpeedDistance;
    float MinMultiplier;
    float MaxMultiplier;
    bool AffectedByGameModeDifficulty;
    struct List_1_Moon_ScalableAnimationPlayer_* m_scalableAnimations;
    struct CheckpointFunctionality m_checkpoint;
    struct DamageDealer_OverrideInfo* m_overrideInfo;
    int32_t m_frameToReset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossEscapeBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossEscapeBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer_OverrideInfo.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_Moon_ScalableAnimationPlayer_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossEscapeBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossEscapeBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossEscapeBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossEscapeBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossEscapeBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
