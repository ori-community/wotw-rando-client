#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetMatchmakingQueueRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetMatchmakingQueueRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMatchmakingQueueRequest_DEFINED)
#include <Modloader/app/structs/GetMatchmakingQueueRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetMatchmakingQueueRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetMatchmakingQueueRequest_DEFINED
struct GetMatchmakingQueueRequest__Class;
struct GetMatchmakingQueueRequest {
    struct GetMatchmakingQueueRequest__Class* klass;
    MonitorData* monitor;
    struct GetMatchmakingQueueRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetMatchmakingQueueRequest_FWDDECL)
#define IL2CPP_STRUCT_GetMatchmakingQueueRequest_FWDDECL
#include <Modloader/app/structs/GetMatchmakingQueueRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetMatchmakingQueueRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMatchmakingQueueRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetMatchmakingQueueRequest_FWDDECL)
#include <Modloader/app/structs/GetMatchmakingQueueRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetMatchmakingQueueRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
