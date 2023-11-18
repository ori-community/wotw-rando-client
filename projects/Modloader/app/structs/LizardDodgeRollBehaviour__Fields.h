#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardDodgeRollBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardDodgeRollBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardDodgeRollBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_LizardEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_LizardEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_LizardDodgeRollBehaviour__Fields_DEFINED
struct MoonTimeline;
struct RootMotionProcessorData;
struct GroundEntityLocomotion;
struct LizardDodgeRollBehaviour__Fields {
    struct EntityBehaviourNode_1_LizardEntity___Fields _;
    struct MoonTimeline* TimelineSequence;
    struct RootMotionProcessorData* RootMotion;
    bool ClearRetaliationStatus;
    struct GroundEntityLocomotion* m_groundLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardDodgeRollBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardDodgeRollBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_LizardDodgeRollBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardDodgeRollBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardDodgeRollBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LizardDodgeRollBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardDodgeRollBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
