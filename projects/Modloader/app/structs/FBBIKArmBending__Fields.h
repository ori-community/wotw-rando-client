#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBBIKArmBending__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBBIKArmBending__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBBIKArmBending__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_FBBIKArmBending__Fields_DEFINED
struct FullBodyBipedIK;
struct FBBIKArmBending__Fields {
    struct MonoBehaviour__Fields _;
    struct FullBodyBipedIK* ik;
    struct Vector3 bendDirectionOffsetLeft;
    struct Vector3 bendDirectionOffsetRight;
    struct Vector3 characterSpaceBendOffsetLeft;
    struct Vector3 characterSpaceBendOffsetRight;
    struct Quaternion leftHandTargetRotation;
    struct Quaternion rightHandTargetRotation;
    bool initiated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FBBIKArmBending__Fields_FWDDECL)
#define IL2CPP_STRUCT_FBBIKArmBending__Fields_FWDDECL
#include <Modloader/app/structs/FullBodyBipedIK.h>
#endif
#undef IL2CPP_STRUCT_FBBIKArmBending__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBBIKArmBending__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FBBIKArmBending__Fields_FWDDECL)
#include <Modloader/app/structs/FBBIKArmBending__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBBIKArmBending__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
