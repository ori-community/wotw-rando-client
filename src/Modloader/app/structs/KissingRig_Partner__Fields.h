#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KissingRig_Partner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KissingRig_Partner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KissingRig_Partner__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_KissingRig_Partner__Fields_DEFINED
struct FullBodyBipedIK;
struct Transform;
struct __declspec(align(8)) KissingRig_Partner__Fields {
    struct FullBodyBipedIK* ik;
    struct Transform* mouth;
    struct Transform* mouthTarget;
    struct Transform* touchTargetLeftHand;
    struct Transform* touchTargetRightHand;
    float bodyWeightHorizontal;
    float bodyWeightVertical;
    float neckRotationWeight;
    float headTiltAngle;
    struct Vector3 headTiltAxis;
    struct Quaternion neckRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KissingRig_Partner__Fields_FWDDECL)
#define IL2CPP_STRUCT_KissingRig_Partner__Fields_FWDDECL
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KissingRig_Partner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KissingRig_Partner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KissingRig_Partner__Fields_FWDDECL)
#include <Modloader/app/structs/KissingRig_Partner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KissingRig_Partner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
