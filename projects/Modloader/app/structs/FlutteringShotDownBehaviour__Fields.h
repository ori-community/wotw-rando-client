#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlutteringShotDownBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlutteringShotDownBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringShotDownBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_FlutteringShotDownBehaviour__Fields_DEFINED
struct MoonTimeline;
struct RootMotionProcessorData;
struct StateMachine_2;
struct FlutteringShotDownBehaviour_States;
struct AirEntityLocomotion;
struct GroundEntityLocomotion;
struct FlutteringShotDownBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline* HitTimeline;
    struct MoonTimeline* FallTimeline;
    struct MoonTimeline* LandTimeline;
    struct RootMotionProcessorData* StartRootMotion;
    struct RootMotionProcessorData* EndRootMotion;
    float StunDuration;
    float DescentSpeed;
    struct StateMachine_2* m_stateMachine;
    struct FlutteringShotDownBehaviour_States* m_states;
    struct MoonTimeline* m_currentTimeline;
    struct AirEntityLocomotion* m_airLocomotion;
    struct GroundEntityLocomotion* m_groundLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlutteringShotDownBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_FlutteringShotDownBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour_States.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_FlutteringShotDownBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringShotDownBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FlutteringShotDownBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/FlutteringShotDownBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlutteringShotDownBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
