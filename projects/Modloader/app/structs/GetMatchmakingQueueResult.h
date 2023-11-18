#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetMatchmakingQueueResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetMatchmakingQueueResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMatchmakingQueueResult_DEFINED)
#include <Modloader/app/structs/GetMatchmakingQueueResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetMatchmakingQueueResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetMatchmakingQueueResult_DEFINED
struct GetMatchmakingQueueResult__Class;
struct GetMatchmakingQueueResult {
    struct GetMatchmakingQueueResult__Class* klass;
    MonitorData* monitor;
    struct GetMatchmakingQueueResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetMatchmakingQueueResult_FWDDECL)
#define IL2CPP_STRUCT_GetMatchmakingQueueResult_FWDDECL
#include <Modloader/app/structs/GetMatchmakingQueueResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetMatchmakingQueueResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMatchmakingQueueResult_DEFINED) && !defined(IL2CPP_STRUCT_GetMatchmakingQueueResult_FWDDECL)
#include <Modloader/app/structs/GetMatchmakingQueueResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetMatchmakingQueueResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
