#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormUnclogBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormUnclogBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormUnclogBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SandWormEntity___Fields.h>
#include <Modloader/app/structs/SandWormLocomotion_SpeedSetting__Enum.h>
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour_SpeedEntry.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SandWormEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_DEFINED) && defined(IL2CPP_STRUCT_SandWormLocomotion_SpeedSetting__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SandWormUnclogBehaviour__Fields_DEFINED
struct SandWormLocomotion;
struct SandWormUnclogBehaviour__Fields {
    struct EntityBehaviourNode_1_SandWormEntity___Fields _;
    float ArriveDistance;
    float RetreatDistance;
    float ClearanceRadius;
    float AngleStep;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry SpeedSettings;
    SandWormLocomotion_SpeedSetting__Enum SpeedToSetOnExit;

    struct SandWormLocomotion* m_wormLocomotion;
    struct Vector2 m_targetPosition;
    float m_avoidancePowerAccumulator;
    struct Vector3 m_unclogDirection;
    bool _IsWaterWorm_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormUnclogBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormUnclogBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/SandWormLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SandWormUnclogBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormUnclogBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormUnclogBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormUnclogBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormUnclogBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
