#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwimmingLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwimmingLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwimmingLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Locomotion__Fields.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#if defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_SwimmingLocomotion__Fields_DEFINED
struct EntityLocomotionTask;
struct TraversalBehaviour;
struct VolumeEntityMovementProcessor;
struct Transform;
struct SwimmingLocomotion__Fields {
    struct Locomotion__Fields _;
    struct EntityLocomotionTask* IdleBehaviour;
    struct TraversalBehaviour* SwimmingBehaviour;
    struct VolumeEntityMovementProcessor* m_volumeMovement;
    bool FlipOnZAxis;
    float WaterCurrentSpeedLerp;
    float ArrivalDistance;
    bool m_lookDirectionLocked;
    bool m_mirrorRotationOnFlip;
    struct Transform* m_mirrorTransform;
    struct Transform* m_rotationTransform;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;

    struct Nullable_1_Single_ m_registeredLookDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwimmingLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwimmingLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TraversalBehaviour.h>
#include <Modloader/app/structs/VolumeEntityMovementProcessor.h>
#endif
#undef IL2CPP_STRUCT_SwimmingLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwimmingLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwimmingLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/SwimmingLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwimmingLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
