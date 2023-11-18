#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionIdleBehaviourWithShift__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionIdleBehaviourWithShift__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionIdleBehaviourWithShift__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED)
#define IL2CPP_STRUCT_LocomotionIdleBehaviourWithShift__Fields_DEFINED
struct MoonTimeline;
struct LocomotionIdleBehaviourWithShift__Fields {
    struct EntityLocomotionTask__Fields _;
    struct MoonTimeline* idleMoonTimeline;
    float ShiftMin;
    float ShiftMax;
    bool m_firstEnterTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionIdleBehaviourWithShift__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionIdleBehaviourWithShift__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LocomotionIdleBehaviourWithShift__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionIdleBehaviourWithShift__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionIdleBehaviourWithShift__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionIdleBehaviourWithShift__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionIdleBehaviourWithShift__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
