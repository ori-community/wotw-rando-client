#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossSpitBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossSpitBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2Int.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2Int_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossSpitBehaviour__Fields_DEFINED
struct MoonTimeline;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct PetrifiedOwlBossSpitBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline* Timeline;
    struct Vector2Int TotalShotsRandomRange;
    float CancelDistance;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* ShootTriggers;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    float ProjectileSpeed;
    int32_t m_totalShots;
    int32_t m_shotCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossSpitBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossSpitBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossSpitBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossSpitBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossSpitBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossSpitBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
