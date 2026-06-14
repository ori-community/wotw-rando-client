#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReaction_HitPointEffector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReaction_HitPointEffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction_HitPointEffector__Fields_DEFINED)
#include <Modloader/app/structs/HitReaction_HitPoint__Fields.h>
#if defined(IL2CPP_STRUCT_HitReaction_HitPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_HitReaction_HitPointEffector__Fields_DEFINED
struct AnimationCurve;
struct HitReaction_HitPointEffector_EffectorLink__Array;
struct HitReaction_HitPointEffector__Fields {
    struct HitReaction_HitPoint__Fields _;
    struct AnimationCurve* offsetInForceDirection;
    struct AnimationCurve* offsetInUpDirection;
    struct HitReaction_HitPointEffector_EffectorLink__Array* effectorLinks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReaction_HitPointEffector__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitReaction_HitPointEffector__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/HitReaction_HitPointEffector_EffectorLink__Array.h>
#endif
#undef IL2CPP_STRUCT_HitReaction_HitPointEffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction_HitPointEffector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitReaction_HitPointEffector__Fields_FWDDECL)
#include <Modloader/app/structs/HitReaction_HitPointEffector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReaction_HitPointEffector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
