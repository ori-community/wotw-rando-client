#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsymLocomotionIdleBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsymLocomotionIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsymLocomotionIdleBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/LocomotionIdleBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_LocomotionIdleBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AsymLocomotionIdleBehaviour__Fields_DEFINED
struct MoonTimeline;
struct AsymLocomotionIdleBehaviour__Fields {
    struct LocomotionIdleBehaviour__Fields _;
    struct MoonTimeline* idleMoonTimelineLeft;
    struct MoonTimeline* idleMoonTimelineRight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsymLocomotionIdleBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsymLocomotionIdleBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_AsymLocomotionIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsymLocomotionIdleBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsymLocomotionIdleBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/AsymLocomotionIdleBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsymLocomotionIdleBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
