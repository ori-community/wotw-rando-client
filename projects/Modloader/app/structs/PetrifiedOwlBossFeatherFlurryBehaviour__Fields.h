#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossFeatherFlurryBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossFeatherFlurryBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFeatherFlurryBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossFeatherFlurryBehaviour__Fields_DEFINED
struct MoonTimeline;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct Enum__Array;
struct PetrifiedOwlBossFeatherFlurryBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline* Timeline;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* ShootTriggers;
    int32_t TotalUniformlyDistributedProjectiles;
    int32_t TotalProjectiles;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    struct Vector2 ProjectileSpeedRange;
    bool m_isMirrored;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFeatherFlurryBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossFeatherFlurryBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossFeatherFlurryBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFeatherFlurryBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossFeatherFlurryBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossFeatherFlurryBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossFeatherFlurryBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
