#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingQueueRule_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingQueueRule_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueRule_DEFINED)
#include <Modloader/app/structs/MatchmakingQueueRule__Fields.h>
#if defined(IL2CPP_STRUCT_MatchmakingQueueRule__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingQueueRule_DEFINED
struct MatchmakingQueueRule__Class;
struct MatchmakingQueueRule {
    struct MatchmakingQueueRule__Class* klass;
    MonitorData* monitor;
    struct MatchmakingQueueRule__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingQueueRule_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingQueueRule_FWDDECL
#include <Modloader/app/structs/MatchmakingQueueRule__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingQueueRule_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueRule_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingQueueRule_FWDDECL)
#include <Modloader/app/structs/MatchmakingQueueRule.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingQueueRule.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
