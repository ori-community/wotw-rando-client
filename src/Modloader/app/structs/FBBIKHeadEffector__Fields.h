#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBBIKHeadEffector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBBIKHeadEffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBBIKHeadEffector__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_FBBIKHeadEffector__Fields_DEFINED
struct FullBodyBipedIK;
struct FBBIKHeadEffector_BendBone__Array;
struct Transform__Array;
struct IKSolver_UpdateDelegate;
struct Quaternion__Array;
struct Vector3__Array;
struct FBBIKHeadEffector__Fields {
    struct MonoBehaviour__Fields _;
    struct FullBodyBipedIK* ik;
    float positionWeight;
    float bodyWeight;
    float thighWeight;
    float rotationWeight;
    float bodyClampWeight;
    float headClampWeight;
    float bendWeight;
    struct FBBIKHeadEffector_BendBone__Array* bendBones;
    float CCDWeight;
    float roll;
    float damper;
    struct Transform__Array* CCDBones;
    float postStretchWeight;
    float maxStretch;
    float stretchDamper;
    bool fixHead;
    struct Transform__Array* stretchBones;
    struct Vector3 chestDirection;
    float chestDirectionWeight;
    struct Transform__Array* chestBones;
    struct IKSolver_UpdateDelegate* OnPostHeadEffectorFK;
    struct Vector3 offset;
    struct Vector3 headToBody;
    struct Vector3 shoulderCenterToHead;
    struct Vector3 headToLeftThigh;
    struct Vector3 headToRightThigh;
    struct Vector3 leftShoulderPos;
    struct Vector3 rightShoulderPos;
    float shoulderDist;
    float leftShoulderDist;
    float rightShoulderDist;
    struct Quaternion chestRotation;
    struct Quaternion headRotationRelativeToRoot;
    struct Quaternion__Array* ccdDefaultLocalRotations;
    struct Vector3 headLocalPosition;
    struct Quaternion headLocalRotation;
    struct Vector3__Array* stretchLocalPositions;
    struct Quaternion__Array* stretchLocalRotations;
    struct Vector3__Array* chestLocalPositions;
    struct Quaternion__Array* chestLocalRotations;
    int32_t bendBonesCount;
    int32_t ccdBonesCount;
    int32_t stretchBonesCount;
    int32_t chestBonesCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FBBIKHeadEffector__Fields_FWDDECL)
#define IL2CPP_STRUCT_FBBIKHeadEffector__Fields_FWDDECL
#include <Modloader/app/structs/FBBIKHeadEffector_BendBone__Array.h>
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/IKSolver_UpdateDelegate.h>
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_FBBIKHeadEffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBBIKHeadEffector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FBBIKHeadEffector__Fields_FWDDECL)
#include <Modloader/app/structs/FBBIKHeadEffector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBBIKHeadEffector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
