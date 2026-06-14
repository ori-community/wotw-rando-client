#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetMatchmakingQueueResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetMatchmakingQueueResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMatchmakingQueueResult_DEFINED)
#include <Modloader/app/structs/SetMatchmakingQueueResult__Fields.h>
#if defined(IL2CPP_STRUCT_SetMatchmakingQueueResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SetMatchmakingQueueResult_DEFINED
struct SetMatchmakingQueueResult__Class;
struct SetMatchmakingQueueResult {
    struct SetMatchmakingQueueResult__Class* klass;
    MonitorData* monitor;
    struct SetMatchmakingQueueResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetMatchmakingQueueResult_FWDDECL)
#define IL2CPP_STRUCT_SetMatchmakingQueueResult_FWDDECL
#include <Modloader/app/structs/SetMatchmakingQueueResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SetMatchmakingQueueResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMatchmakingQueueResult_DEFINED) && !defined(IL2CPP_STRUCT_SetMatchmakingQueueResult_FWDDECL)
#include <Modloader/app/structs/SetMatchmakingQueueResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetMatchmakingQueueResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
