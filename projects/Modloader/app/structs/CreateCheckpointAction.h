#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateCheckpointAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateCheckpointAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateCheckpointAction_DEFINED)
#include <Modloader/app/structs/CreateCheckpointAction__Fields.h>
#if defined(IL2CPP_STRUCT_CreateCheckpointAction__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateCheckpointAction_DEFINED
struct CreateCheckpointAction__Class;
struct CreateCheckpointAction {
    struct CreateCheckpointAction__Class* klass;
    MonitorData* monitor;
    struct CreateCheckpointAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateCheckpointAction_FWDDECL)
#define IL2CPP_STRUCT_CreateCheckpointAction_FWDDECL
#include <Modloader/app/structs/CreateCheckpointAction__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateCheckpointAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateCheckpointAction_DEFINED) && !defined(IL2CPP_STRUCT_CreateCheckpointAction_FWDDECL)
#include <Modloader/app/structs/CreateCheckpointAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateCheckpointAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
