#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKTargetBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKTargetBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKTargetBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKTargetBehaviour__Fields_DEFINED
struct GameObject;
struct VectorAnimationParameter;
struct InverseKinematicsPostprocess;
struct MoonAnimator;
struct IK;
struct MoonFloat;
struct Transform;
struct IKTargetBehaviour__Fields {
    struct MonoBehaviour__Fields _;
    float OffsetZ;
    float MaxSpeed;
    float Damp;
    float MaxDist;
    float MaxDistBack;
    float MaxDistSmoothingRange;
    float MaxDistDamp;
    struct GameObject* Animator;
    struct VectorAnimationParameter* IKParameter;
    struct InverseKinematicsPostprocess* KinematicsPostProcess;
    float WeightChangeSpeed;
    struct MoonAnimator* m_animator;
    struct Vector3 m_lastLookPos;
    struct Vector3 m_velocity;
    float m_lastMaxDistance;
    float m_lastMaxDistanceDampVel;
    bool m_startedTrackingOri;
    float DefaultWeight;
    float DefaultSpeed;
    bool AutoUpdate;
    bool ProjectTargetOnGround;
    float CurrentSpeed;
    float CurrentWeight;
    bool StartTrackingImmidiately;
    struct IK* m_ik;
    struct MoonFloat* Direction;
    struct Transform* m_lookTransform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKTargetBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKTargetBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IK.h>
#include <Modloader/app/structs/InverseKinematicsPostprocess.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VectorAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_IKTargetBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKTargetBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKTargetBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/IKTargetBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKTargetBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
