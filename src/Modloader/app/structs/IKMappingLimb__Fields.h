#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKMappingLimb__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKMappingLimb__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMappingLimb__Fields_DEFINED)
#define IL2CPP_STRUCT_IKMappingLimb__Fields_DEFINED
struct Transform;
struct IKMapping_BoneMap;
struct __declspec(align(8)) IKMappingLimb__Fields {
    struct Transform* parentBone;
    struct Transform* bone1;
    struct Transform* bone2;
    struct Transform* bone3;
    float maintainRotationWeight;
    float weight;
    struct IKMapping_BoneMap* boneMapParent;
    struct IKMapping_BoneMap* boneMap1;
    struct IKMapping_BoneMap* boneMap2;
    struct IKMapping_BoneMap* boneMap3;
};
#endif
#if !defined(IL2CPP_STRUCT_IKMappingLimb__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKMappingLimb__Fields_FWDDECL
#include <Modloader/app/structs/IKMapping_BoneMap.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKMappingLimb__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMappingLimb__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKMappingLimb__Fields_FWDDECL)
#include <Modloader/app/structs/IKMappingLimb__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKMappingLimb__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
