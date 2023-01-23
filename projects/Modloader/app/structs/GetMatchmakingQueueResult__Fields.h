#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetMatchmakingQueueResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetMatchmakingQueueResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMatchmakingQueueResult__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_GetMatchmakingQueueResult__Fields_DEFINED
struct MatchmakingQueueConfig;
struct GetMatchmakingQueueResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct MatchmakingQueueConfig* MatchmakingQueue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetMatchmakingQueueResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetMatchmakingQueueResult__Fields_FWDDECL
#include <Modloader/app/structs/MatchmakingQueueConfig.h>
#endif
#undef IL2CPP_STRUCT_GetMatchmakingQueueResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMatchmakingQueueResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetMatchmakingQueueResult__Fields_FWDDECL)
#include <Modloader/app/structs/GetMatchmakingQueueResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetMatchmakingQueueResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
