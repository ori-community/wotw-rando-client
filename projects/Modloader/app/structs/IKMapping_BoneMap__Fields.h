#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKMapping_BoneMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKMapping_BoneMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMapping_BoneMap__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_IKMapping_BoneMap__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) IKMapping_BoneMap__Fields {
    struct Transform* transform;
    int32_t chainIndex;
    int32_t nodeIndex;
    struct Vector3 defaultLocalPosition;
    struct Quaternion defaultLocalRotation;
    struct Vector3 localSwingAxis;
    struct Vector3 localTwistAxis;
    struct Vector3 planePosition;
    struct Vector3 ikPosition;
    struct Quaternion defaultLocalTargetRotation;
    struct Quaternion maintainRotation;
    float length;
    struct Quaternion animatedRotation;
    struct Transform* planeBone1;
    struct Transform* planeBone2;
    struct Transform* planeBone3;
    int32_t plane1ChainIndex;
    int32_t plane1NodeIndex;
    int32_t plane2ChainIndex;
    int32_t plane2NodeIndex;
    int32_t plane3ChainIndex;
    int32_t plane3NodeIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKMapping_BoneMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKMapping_BoneMap__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKMapping_BoneMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMapping_BoneMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKMapping_BoneMap__Fields_FWDDECL)
#include <Modloader/app/structs/IKMapping_BoneMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKMapping_BoneMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
