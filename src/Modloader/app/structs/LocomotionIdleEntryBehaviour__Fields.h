#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionIdleEntryBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionIdleEntryBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionIdleEntryBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED)
#define IL2CPP_STRUCT_LocomotionIdleEntryBehaviour__Fields_DEFINED
struct LocomotionTimelineAnimation__Array;
struct Locomotion;
struct LocomotionTimelineAnimation;
struct LocomotionIdleEntryBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    struct LocomotionTimelineAnimation__Array* IdleEntries;
    struct Locomotion* m_locomotion;
    struct LocomotionTimelineAnimation* m_currentAnimation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionIdleEntryBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionIdleEntryBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/LocomotionTimelineAnimation.h>
#include <Modloader/app/structs/LocomotionTimelineAnimation__Array.h>
#endif
#undef IL2CPP_STRUCT_LocomotionIdleEntryBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionIdleEntryBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionIdleEntryBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionIdleEntryBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionIdleEntryBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
