#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingQueueConfig__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingQueueConfig__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueConfig__Array_DEFINED)
#define IL2CPP_STRUCT_MatchmakingQueueConfig__Array_DEFINED
struct MatchmakingQueueConfig__Array__Class;
struct MatchmakingQueueConfig;
struct MatchmakingQueueConfig__Array {
    struct MatchmakingQueueConfig__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct MatchmakingQueueConfig* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingQueueConfig__Array_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingQueueConfig__Array_FWDDECL
#include <Modloader/app/structs/MatchmakingQueueConfig.h>
#include <Modloader/app/structs/MatchmakingQueueConfig__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingQueueConfig__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueConfig__Array_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingQueueConfig__Array_FWDDECL)
#include <Modloader/app/structs/MatchmakingQueueConfig__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingQueueConfig__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
