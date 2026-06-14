#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestoreCheckpointController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestoreCheckpointController_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestoreCheckpointController_DEFINED)
#define IL2CPP_STRUCT_RestoreCheckpointController_DEFINED
struct RestoreCheckpointController__Class;
struct RestoreCheckpointController {
    struct RestoreCheckpointController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RestoreCheckpointController_FWDDECL)
#define IL2CPP_STRUCT_RestoreCheckpointController_FWDDECL
#include <Modloader/app/structs/RestoreCheckpointController__Class.h>
#endif
#undef IL2CPP_STRUCT_RestoreCheckpointController_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestoreCheckpointController_DEFINED) && !defined(IL2CPP_STRUCT_RestoreCheckpointController_FWDDECL)
#include <Modloader/app/structs/RestoreCheckpointController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestoreCheckpointController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
