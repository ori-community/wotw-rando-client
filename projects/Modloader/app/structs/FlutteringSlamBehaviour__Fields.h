#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlutteringSlamBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlutteringSlamBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringSlamBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_FlutteringSlamBehaviour__Fields_DEFINED
struct MoonTimeline;
struct RootMotionProcessorData;
struct StateMachine_2;
struct FlutteringSlamBehaviour_States;
struct AirEntityLocomotion;
struct GroundEntityLocomotion;
struct FlutteringSlamBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline* StartTimeline;
    struct MoonTimeline* LoopTimeline;
    struct MoonTimeline* EndTimeline;
    struct RootMotionProcessorData* StartRootMotion;
    struct RootMotionProcessorData* EndRootMotion;
    float StunDuration;
    float DescentSpeed;
    int32_t SlamChargeDamage;
    DamageWeight__Enum SlamChargeWeight;

    struct StateMachine_2* m_stateMachine;
    struct FlutteringSlamBehaviour_States* m_states;
    struct MoonTimeline* m_currentTimeline;
    struct AirEntityLocomotion* m_airLocomotion;
    struct GroundEntityLocomotion* m_groundLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlutteringSlamBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_FlutteringSlamBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour_States.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_FlutteringSlamBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringSlamBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FlutteringSlamBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/FlutteringSlamBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlutteringSlamBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
