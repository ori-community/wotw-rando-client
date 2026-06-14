#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostStateMachinePlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostStateMachinePlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostStateMachinePlugin_DEFINED)
#include <Modloader/app/structs/GhostStateMachinePlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostStateMachinePlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostStateMachinePlugin_DEFINED
struct GhostStateMachinePlugin__Class;
struct GhostStateMachinePlugin {
    struct GhostStateMachinePlugin__Class* klass;
    MonitorData* monitor;
    struct GhostStateMachinePlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostStateMachinePlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostStateMachinePlugin_FWDDECL
#include <Modloader/app/structs/GhostStateMachinePlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostStateMachinePlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostStateMachinePlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostStateMachinePlugin_FWDDECL)
#include <Modloader/app/structs/GhostStateMachinePlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostStateMachinePlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
