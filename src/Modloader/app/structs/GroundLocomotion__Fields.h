#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/Locomotion__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GroundLocomotion__Fields_DEFINED
struct Transform;
struct MoonAnimation;
struct GroundLocomotion__Fields {
    struct Locomotion__Fields _;
    struct Transform* Mirror;
    struct Transform* EntityFeetTransform;
    float LocomotionGravity;
    float MaxFallSpeed;
    float Deceleration;
    float AirDrag;
    float RotationSpeed;
    float RotationLimit;
    float TargetAirRotation;
    float ModelLookDirection;
    struct MoonAnimation* FallingAnimation;
    float MinimumFallDistance;
    struct Vector2 m_lookDirection;
    struct Vector2 m_velocityOverride;
    struct Vector2 m_lookDirectionBuffer;
    int32_t m_gravityDisableCounter;
    struct ActiveAnimationHandle m_fallingAnimation;
    struct Vector3 m_initFeetOffset;
    struct Transform* m_rotationTransform;
    bool AdjustFeet;
    bool _IsTurning_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GroundLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/GroundLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
