#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AdditiveBodyRotation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AdditiveBodyRotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdditiveBodyRotation__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_AdditiveBodyRotation__Fields_DEFINED
struct Transform;
struct AdditiveBodyRotation__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t OrderNumber;
    struct Transform* root;
    struct Vector3 groundPosition;
    float raycastHeight;
    float raycastDistance;
    float groundLevel;
    struct Transform* targetBone;
    struct LayerMask raycastMask;
    float lerpCoeff;
    float terrainAngleCoeff;
    float minAngle;
    float maxAngle;
    float m_addAngle;
    struct Quaternion m_initialrotation;
    struct Vector3 m_rotationAxis;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AdditiveBodyRotation__Fields_FWDDECL)
#define IL2CPP_STRUCT_AdditiveBodyRotation__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AdditiveBodyRotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdditiveBodyRotation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AdditiveBodyRotation__Fields_FWDDECL)
#include <Modloader/app/structs/AdditiveBodyRotation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AdditiveBodyRotation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
