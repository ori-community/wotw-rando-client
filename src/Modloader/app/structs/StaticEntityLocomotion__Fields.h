#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticEntityLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticEntityLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticEntityLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Locomotion__Fields.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#if defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_StaticEntityLocomotion__Fields_DEFINED
struct Transform;
struct BaseLocomotionTurningBehaviour;
struct EntityLocomotionTask;
struct MortarEntity;
struct StaticEntityLocomotion__Fields {
    struct Locomotion__Fields _;
    struct Transform* Feet;
    struct BaseLocomotionTurningBehaviour* TurningBehaviour;
    struct EntityLocomotionTask* IdleBehaviour;
    bool m_snapToTheGround;
    bool SnapToTheGroundOnlyOnce;
    bool ConsiderRotationForLookDirection;
    bool CanTurn;
    struct Nullable_1_Single_ m_registeredLookDirection;
    bool m_lookDirectionLocked;
    bool m_snappedToGround;
    struct MortarEntity* m_mortarEntity;
    float _Gravity_k__BackingField;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaticEntityLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_StaticEntityLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/MortarEntity.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_StaticEntityLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticEntityLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StaticEntityLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/StaticEntityLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticEntityLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
