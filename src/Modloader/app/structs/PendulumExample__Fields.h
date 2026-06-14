#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PendulumExample__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PendulumExample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PendulumExample__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_PendulumExample__Fields_DEFINED
struct Transform;
struct FullBodyBipedIK;
struct PendulumExample__Fields {
    struct MonoBehaviour__Fields _;
    float weight;
    float hangingDistanceMlp;
    struct Vector3 rootTargetPosition;
    struct Quaternion rootTargetRotation;
    struct Transform* target;
    struct Transform* leftHandTarget;
    struct Transform* rightHandTarget;
    struct Transform* leftFootTarget;
    struct Transform* rightFootTarget;
    struct Transform* pelvisTarget;
    struct Transform* bodyTarget;
    struct Transform* headTarget;
    struct Vector3 pelvisDownAxis;
    struct FullBodyBipedIK* ik;
    struct Quaternion rootRelativeToPelvis;
    struct Vector3 pelvisToRoot;
    float lastWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PendulumExample__Fields_FWDDECL)
#define IL2CPP_STRUCT_PendulumExample__Fields_FWDDECL
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PendulumExample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PendulumExample__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PendulumExample__Fields_FWDDECL)
#include <Modloader/app/structs/PendulumExample__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PendulumExample__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
