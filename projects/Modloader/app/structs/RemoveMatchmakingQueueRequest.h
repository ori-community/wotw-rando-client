#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveMatchmakingQueueRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveMatchmakingQueueRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveMatchmakingQueueRequest_DEFINED)
#include <Modloader/app/structs/RemoveMatchmakingQueueRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RemoveMatchmakingQueueRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveMatchmakingQueueRequest_DEFINED
struct RemoveMatchmakingQueueRequest__Class;
struct RemoveMatchmakingQueueRequest {
    struct RemoveMatchmakingQueueRequest__Class* klass;
    MonitorData* monitor;
    struct RemoveMatchmakingQueueRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveMatchmakingQueueRequest_FWDDECL)
#define IL2CPP_STRUCT_RemoveMatchmakingQueueRequest_FWDDECL
#include <Modloader/app/structs/RemoveMatchmakingQueueRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoveMatchmakingQueueRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveMatchmakingQueueRequest_DEFINED) && !defined(IL2CPP_STRUCT_RemoveMatchmakingQueueRequest_FWDDECL)
#include <Modloader/app/structs/RemoveMatchmakingQueueRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveMatchmakingQueueRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
