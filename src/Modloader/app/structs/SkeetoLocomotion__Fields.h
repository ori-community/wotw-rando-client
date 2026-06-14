#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Locomotion__Fields.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#if defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_SkeetoLocomotion__Fields_DEFINED
struct SkeetoLocomotionIdleBehaviour;
struct SkeetoAirEntityMovementProcessor;
struct Action;
struct SkeetoAirMoveBehaviour;
struct SkeetoLocomotion__Fields {
    struct Locomotion__Fields _;
    struct SkeetoLocomotionIdleBehaviour* IdleBehaviour;
    struct SkeetoAirEntityMovementProcessor* m_airMovement;
    float DeadGravity;
    float MaxDeadFallSpeed;
    bool m_lookDirectionLocked;
    struct Action* OnWontReachTarget;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;

    struct SkeetoAirMoveBehaviour* m_movementBehaviour;
    struct Nullable_1_Single_ m_registeredLookDirection;
    float m_cachedMaxSpeed;
    bool m_cachedUseObstacleHitAvoidance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/SkeetoAirEntityMovementProcessor.h>
#include <Modloader/app/structs/SkeetoAirMoveBehaviour.h>
#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour.h>
#endif
#undef IL2CPP_STRUCT_SkeetoLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
