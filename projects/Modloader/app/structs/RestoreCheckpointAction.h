#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestoreCheckpointAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestoreCheckpointAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestoreCheckpointAction_DEFINED)
#include <Modloader/app/structs/RestoreCheckpointAction__Fields.h>
#if defined(IL2CPP_STRUCT_RestoreCheckpointAction__Fields_DEFINED)
#define IL2CPP_STRUCT_RestoreCheckpointAction_DEFINED
struct RestoreCheckpointAction__Class;
struct RestoreCheckpointAction {
    struct RestoreCheckpointAction__Class* klass;
    MonitorData* monitor;
    struct RestoreCheckpointAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RestoreCheckpointAction_FWDDECL)
#define IL2CPP_STRUCT_RestoreCheckpointAction_FWDDECL
#include <Modloader/app/structs/RestoreCheckpointAction__Class.h>
#endif
#undef IL2CPP_STRUCT_RestoreCheckpointAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestoreCheckpointAction_DEFINED) && !defined(IL2CPP_STRUCT_RestoreCheckpointAction_FWDDECL)
#include <Modloader/app/structs/RestoreCheckpointAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestoreCheckpointAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
