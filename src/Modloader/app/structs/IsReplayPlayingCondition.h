#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsReplayPlayingCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsReplayPlayingCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsReplayPlayingCondition_DEFINED)
#include <Modloader/app/structs/IsReplayPlayingCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IsReplayPlayingCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IsReplayPlayingCondition_DEFINED
struct IsReplayPlayingCondition__Class;
struct IsReplayPlayingCondition {
    struct IsReplayPlayingCondition__Class* klass;
    MonitorData* monitor;
    struct IsReplayPlayingCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsReplayPlayingCondition_FWDDECL)
#define IL2CPP_STRUCT_IsReplayPlayingCondition_FWDDECL
#include <Modloader/app/structs/IsReplayPlayingCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IsReplayPlayingCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsReplayPlayingCondition_DEFINED) && !defined(IL2CPP_STRUCT_IsReplayPlayingCondition_FWDDECL)
#include <Modloader/app/structs/IsReplayPlayingCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsReplayPlayingCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
