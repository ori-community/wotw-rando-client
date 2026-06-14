#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKMappingSpine__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKMappingSpine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMappingSpine__Fields_DEFINED)
#define IL2CPP_STRUCT_IKMappingSpine__Fields_DEFINED
struct Transform__Array;
struct Transform;
struct IKMapping_BoneMap__Array;
struct IKMapping_BoneMap;
struct __declspec(align(8)) IKMappingSpine__Fields {
    struct Transform__Array* spineBones;
    struct Transform* leftUpperArmBone;
    struct Transform* rightUpperArmBone;
    struct Transform* leftThighBone;
    struct Transform* rightThighBone;
    int32_t iterations;
    float twistWeight;
    int32_t rootNodeIndex;
    struct IKMapping_BoneMap__Array* spine;
    struct IKMapping_BoneMap* leftUpperArm;
    struct IKMapping_BoneMap* rightUpperArm;
    struct IKMapping_BoneMap* leftThigh;
    struct IKMapping_BoneMap* rightThigh;
    bool useFABRIK;
};
#endif
#if !defined(IL2CPP_STRUCT_IKMappingSpine__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKMappingSpine__Fields_FWDDECL
#include <Modloader/app/structs/IKMapping_BoneMap.h>
#include <Modloader/app/structs/IKMapping_BoneMap__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_IKMappingSpine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMappingSpine__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKMappingSpine__Fields_FWDDECL)
#include <Modloader/app/structs/IKMappingSpine__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKMappingSpine__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
