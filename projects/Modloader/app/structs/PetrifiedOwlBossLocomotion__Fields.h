#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Locomotion__Fields.h>
#include <Modloader/app/structs/PetrifiedOwlBossLocomotion_Stance__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_PetrifiedOwlBossLocomotion_Stance__Enum_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossLocomotion__Fields_DEFINED
struct Transform;
struct EntityLocomotionTask;
struct PetrifiedOwlBossEntity;
struct MoonTimeline;
struct PetrifiedOwlBossLocomotion__Fields {
    struct Locomotion__Fields _;
    struct Transform* _FeetTransform_k__BackingField;
    struct Vector3 _FeetPosition_k__BackingField;
    bool _HasArrivedAtTarget_k__BackingField;
    float _Gravity_k__BackingField;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;

    struct EntityLocomotionTask* _DefaultFSMState_k__BackingField;
    PetrifiedOwlBossLocomotion_Stance__Enum m_currentStance;

    struct PetrifiedOwlBossEntity* Powl;
    struct MoonTimeline* Idle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
