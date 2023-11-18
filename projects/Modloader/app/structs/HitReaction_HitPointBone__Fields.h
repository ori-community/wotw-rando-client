#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReaction_HitPointBone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReaction_HitPointBone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction_HitPointBone__Fields_DEFINED)
#include <Modloader/app/structs/HitReaction_HitPoint__Fields.h>
#if defined(IL2CPP_STRUCT_HitReaction_HitPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_HitReaction_HitPointBone__Fields_DEFINED
struct AnimationCurve;
struct HitReaction_HitPointBone_BoneLink__Array;
struct Rigidbody;
struct HitReaction_HitPointBone__Fields {
    struct HitReaction_HitPoint__Fields _;
    struct AnimationCurve* aroundCenterOfMass;
    struct HitReaction_HitPointBone_BoneLink__Array* boneLinks;
    struct Rigidbody* rigidbody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReaction_HitPointBone__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitReaction_HitPointBone__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/HitReaction_HitPointBone_BoneLink__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_HitReaction_HitPointBone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction_HitPointBone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitReaction_HitPointBone__Fields_FWDDECL)
#include <Modloader/app/structs/HitReaction_HitPointBone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReaction_HitPointBone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
