#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AirEntityLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AirEntityLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AirEntityLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Locomotion__Fields.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#if defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_AirEntityLocomotion__Fields_DEFINED
struct BaseLocomotionTurningBehaviour;
struct EntityLocomotionTask;
struct AirEntityMovementProcessor;
struct LocomotionAirMoveBehaviour;
struct AirEntityLocomotion__Fields {
    struct Locomotion__Fields _;
    struct BaseLocomotionTurningBehaviour* TurningBehaviour;
    struct EntityLocomotionTask* IdleBehaviour;
    struct AirEntityMovementProcessor* m_airMovement;
    bool m_lookDirectionLocked;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;

    struct LocomotionAirMoveBehaviour* m_movementBehaviour;
    struct Nullable_1_Single_ m_registeredLookDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AirEntityLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_AirEntityLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityMovementProcessor.h>
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/LocomotionAirMoveBehaviour.h>
#endif
#undef IL2CPP_STRUCT_AirEntityLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AirEntityLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AirEntityLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/AirEntityLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AirEntityLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
