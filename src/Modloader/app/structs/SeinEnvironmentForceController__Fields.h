#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEnvironmentForceController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEnvironmentForceController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEnvironmentForceController__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/FloatRange_1.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_FloatRange_1_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinEnvironmentForceController__Fields_DEFINED
struct Transform;
struct Rigidbody;
struct Collider;
struct SeinEnvironmentForceController__Fields {
    struct CharacterState__Fields _;
    float LandOnWallImpulsePerUnitOfSpeed;
    float LandOnWallMaxImpluse;
    float LandOnCeilingImpulsePerUnitOfSpeed;
    float LandOnCeilingMaxImpulse;
    float WeightOfPlayerForce;
    struct Transform* CenterOfMassPoint;
    struct Transform* GroundPoint;
    float CenterOfMassMotionImpulse;
    struct FloatRange_1 GroundImpulseRange;
    float GroundImpulseLandingTimeout;
    bool useDebug;
    struct Vector3 m_oldVelocity;
    struct Vector3 m_oldCenterPos;
    struct Vector3 m_oldCenterVelocity;
    struct Rigidbody* m_groundRigidbody;
    struct Collider* GroundCollider;
    struct Vector3 GroundNormal;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinEnvironmentForceController__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinEnvironmentForceController__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinEnvironmentForceController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEnvironmentForceController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinEnvironmentForceController__Fields_FWDDECL)
#include <Modloader/app/structs/SeinEnvironmentForceController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEnvironmentForceController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
