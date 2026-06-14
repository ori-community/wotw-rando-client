#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingQueueTeam_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingQueueTeam_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueTeam_DEFINED)
#include <Modloader/app/structs/MatchmakingQueueTeam__Fields.h>
#if defined(IL2CPP_STRUCT_MatchmakingQueueTeam__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingQueueTeam_DEFINED
struct MatchmakingQueueTeam__Class;
struct MatchmakingQueueTeam {
    struct MatchmakingQueueTeam__Class* klass;
    MonitorData* monitor;
    struct MatchmakingQueueTeam__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingQueueTeam_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingQueueTeam_FWDDECL
#include <Modloader/app/structs/MatchmakingQueueTeam__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingQueueTeam_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueTeam_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingQueueTeam_FWDDECL)
#include <Modloader/app/structs/MatchmakingQueueTeam.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingQueueTeam.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
