#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingQueueConfig_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingQueueConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueConfig_DEFINED)
#include <Modloader/app/structs/MatchmakingQueueConfig__Fields.h>
#if defined(IL2CPP_STRUCT_MatchmakingQueueConfig__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingQueueConfig_DEFINED
struct MatchmakingQueueConfig__Class;
struct MatchmakingQueueConfig {
    struct MatchmakingQueueConfig__Class* klass;
    MonitorData* monitor;
    struct MatchmakingQueueConfig__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingQueueConfig_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingQueueConfig_FWDDECL
#include <Modloader/app/structs/MatchmakingQueueConfig__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingQueueConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueConfig_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingQueueConfig_FWDDECL)
#include <Modloader/app/structs/MatchmakingQueueConfig.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingQueueConfig.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
