#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetMatchmakingQueueRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetMatchmakingQueueRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMatchmakingQueueRequest__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_SetMatchmakingQueueRequest__Fields_DEFINED
struct MatchmakingQueueConfig;
struct SetMatchmakingQueueRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct MatchmakingQueueConfig* MatchmakingQueue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetMatchmakingQueueRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetMatchmakingQueueRequest__Fields_FWDDECL
#include <Modloader/app/structs/MatchmakingQueueConfig.h>
#endif
#undef IL2CPP_STRUCT_SetMatchmakingQueueRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMatchmakingQueueRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetMatchmakingQueueRequest__Fields_FWDDECL)
#include <Modloader/app/structs/SetMatchmakingQueueRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetMatchmakingQueueRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
