#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetMatchmakingQueueRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetMatchmakingQueueRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMatchmakingQueueRequest_DEFINED)
#include <Modloader/app/structs/SetMatchmakingQueueRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SetMatchmakingQueueRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SetMatchmakingQueueRequest_DEFINED
struct SetMatchmakingQueueRequest__Class;
struct SetMatchmakingQueueRequest {
    struct SetMatchmakingQueueRequest__Class* klass;
    MonitorData* monitor;
    struct SetMatchmakingQueueRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetMatchmakingQueueRequest_FWDDECL)
#define IL2CPP_STRUCT_SetMatchmakingQueueRequest_FWDDECL
#include <Modloader/app/structs/SetMatchmakingQueueRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SetMatchmakingQueueRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMatchmakingQueueRequest_DEFINED) && !defined(IL2CPP_STRUCT_SetMatchmakingQueueRequest_FWDDECL)
#include <Modloader/app/structs/SetMatchmakingQueueRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetMatchmakingQueueRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
