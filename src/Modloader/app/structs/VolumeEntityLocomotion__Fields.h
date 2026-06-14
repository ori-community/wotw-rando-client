#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEntityLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEntityLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEntityLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Locomotion__Fields.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#if defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_VolumeEntityLocomotion__Fields_DEFINED
struct BaseLocomotionTurningBehaviour;
struct EntityLocomotionTask;
struct VolumeEntityMovementProcessor;
struct TraversalBehaviour;
struct VolumeEntityLocomotion__Fields {
    struct Locomotion__Fields _;
    struct BaseLocomotionTurningBehaviour* TurningBehaviour;
    struct EntityLocomotionTask* IdleBehaviour;
    struct VolumeEntityMovementProcessor* m_volumeMovement;
    bool FlipOnZAxis;
    bool m_lookDirectionLocked;
    bool m_mirrorRotationOnFlip;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;

    struct TraversalBehaviour* m_movementBehaviour;
    struct Nullable_1_Single_ m_registeredLookDirection;
    float m_turnStartAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeEntityLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_VolumeEntityLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/TraversalBehaviour.h>
#include <Modloader/app/structs/VolumeEntityMovementProcessor.h>
#endif
#undef IL2CPP_STRUCT_VolumeEntityLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEntityLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEntityLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/VolumeEntityLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEntityLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
