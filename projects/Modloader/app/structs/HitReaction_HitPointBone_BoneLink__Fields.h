#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReaction_HitPointBone_BoneLink__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReaction_HitPointBone_BoneLink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction_HitPointBone_BoneLink__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_HitReaction_HitPointBone_BoneLink__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) HitReaction_HitPointBone_BoneLink__Fields {
    struct Transform* bone;
    float weight;
    struct Quaternion lastValue;
    struct Quaternion current;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReaction_HitPointBone_BoneLink__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitReaction_HitPointBone_BoneLink__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HitReaction_HitPointBone_BoneLink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction_HitPointBone_BoneLink__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitReaction_HitPointBone_BoneLink__Fields_FWDDECL)
#include <Modloader/app/structs/HitReaction_HitPointBone_BoneLink__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReaction_HitPointBone_BoneLink__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
