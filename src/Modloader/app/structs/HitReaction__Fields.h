#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction__Fields_DEFINED)
#include <Modloader/app/structs/OffsetModifier__Fields.h>
#if defined(IL2CPP_STRUCT_OffsetModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_HitReaction__Fields_DEFINED
struct HitReaction_HitPointEffector__Array;
struct HitReaction_HitPointBone__Array;
struct HitReaction__Fields {
    struct OffsetModifier__Fields _;
    struct HitReaction_HitPointEffector__Array* effectorHitPoints;
    struct HitReaction_HitPointBone__Array* boneHitPoints;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitReaction__Fields_FWDDECL
#include <Modloader/app/structs/HitReaction_HitPointBone__Array.h>
#include <Modloader/app/structs/HitReaction_HitPointEffector__Array.h>
#endif
#undef IL2CPP_STRUCT_HitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitReaction__Fields_FWDDECL)
#include <Modloader/app/structs/HitReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
