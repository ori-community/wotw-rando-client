#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostReplayAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostReplayAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostReplayAnimator_DEFINED)
#include <Modloader/app/structs/GhostReplayAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_GhostReplayAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostReplayAnimator_DEFINED
struct GhostReplayAnimator__Class;
struct GhostReplayAnimator {
    struct GhostReplayAnimator__Class* klass;
    MonitorData* monitor;
    struct GhostReplayAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostReplayAnimator_FWDDECL)
#define IL2CPP_STRUCT_GhostReplayAnimator_FWDDECL
#include <Modloader/app/structs/GhostReplayAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostReplayAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostReplayAnimator_DEFINED) && !defined(IL2CPP_STRUCT_GhostReplayAnimator_FWDDECL)
#include <Modloader/app/structs/GhostReplayAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostReplayAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
