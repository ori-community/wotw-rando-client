#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKMappingBone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKMappingBone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMappingBone__Fields_DEFINED)
#define IL2CPP_STRUCT_IKMappingBone__Fields_DEFINED
struct Transform;
struct IKMapping_BoneMap;
struct __declspec(align(8)) IKMappingBone__Fields {
    struct Transform* bone;
    float maintainRotationWeight;
    struct IKMapping_BoneMap* boneMap;
};
#endif
#if !defined(IL2CPP_STRUCT_IKMappingBone__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKMappingBone__Fields_FWDDECL
#include <Modloader/app/structs/IKMapping_BoneMap.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKMappingBone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMappingBone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKMappingBone__Fields_FWDDECL)
#include <Modloader/app/structs/IKMappingBone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKMappingBone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
