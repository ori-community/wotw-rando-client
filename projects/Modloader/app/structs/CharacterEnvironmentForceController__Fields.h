#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterEnvironmentForceController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterEnvironmentForceController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterEnvironmentForceController__Fields_DEFINED)
#include <Modloader/app/structs/FloatRange_1.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FloatRange_1_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CharacterEnvironmentForceController__Fields_DEFINED
struct PlatformMovement;
struct Transform;
struct Vitals;
struct Collider;
struct Rigidbody;
struct CharacterEnvironmentForceController__Fields {
    struct MonoBehaviour__Fields _;
    struct PlatformMovement* PlatformMovement;
    float LandImpulsePerUnitOfSpeed;
    float LandMaxImpulse;
    float LandMinFallTime;
    struct Transform* CenterOfMassPoint;
    struct Transform* GroundPoint;
    float CenterOfMassMotionImpulse;
    struct FloatRange_1 GroundImpulseRange;
    float GroundImpulseLandingTimeout;
    bool useDebug;
    float Weight;
    struct Vitals* Vitals;
    float DamageForceTransferToGround;
    struct Collider* GroundCollider;
    struct Vector3 GroundNormal;
    struct Vector3 m_oldVelocity;
    struct Vector3 m_oldCenterPos;
    struct Vector3 m_oldCenterVelocity;
    struct Rigidbody* m_groundRigidbody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterEnvironmentForceController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterEnvironmentForceController__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_CharacterEnvironmentForceController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterEnvironmentForceController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterEnvironmentForceController__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterEnvironmentForceController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterEnvironmentForceController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
