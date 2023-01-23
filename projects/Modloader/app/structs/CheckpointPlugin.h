#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CheckpointPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CheckpointPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointPlugin_DEFINED)
#include <Modloader/app/structs/CheckpointPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_CheckpointPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_CheckpointPlugin_DEFINED
struct CheckpointPlugin__Class;
struct CheckpointPlugin {
    struct CheckpointPlugin__Class* klass;
    MonitorData* monitor;
    struct CheckpointPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CheckpointPlugin_FWDDECL)
#define IL2CPP_STRUCT_CheckpointPlugin_FWDDECL
#include <Modloader/app/structs/CheckpointPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_CheckpointPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointPlugin_DEFINED) && !defined(IL2CPP_STRUCT_CheckpointPlugin_FWDDECL)
#include <Modloader/app/structs/CheckpointPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CheckpointPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
