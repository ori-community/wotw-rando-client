#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShootableCreepVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShootableCreepVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootableCreepVisuals__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ShootableCreepVisuals__Fields_DEFINED
struct MoonTimeline;
struct BoxCollider;
struct List_1_UnityEngine_GameObject_;
struct ShootableCreepVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* DeathTimeline;
    struct MoonTimeline* HitTimeline;
    struct BoxCollider* Hitbox;
    struct List_1_UnityEngine_GameObject_* DisableOnCreepDestroyed;
    bool _InvalidateParentTimelineCache_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShootableCreepVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShootableCreepVisuals__Fields_FWDDECL
#include <Modloader/app/structs/BoxCollider.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_ShootableCreepVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootableCreepVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShootableCreepVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/ShootableCreepVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShootableCreepVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
