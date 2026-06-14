#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingPlayer_DEFINED)
#include <Modloader/app/structs/MatchmakingPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_MatchmakingPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingPlayer_DEFINED
struct MatchmakingPlayer__Class;
struct MatchmakingPlayer {
    struct MatchmakingPlayer__Class* klass;
    MonitorData* monitor;
    struct MatchmakingPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingPlayer_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingPlayer_FWDDECL
#include <Modloader/app/structs/MatchmakingPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingPlayer_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingPlayer_FWDDECL)
#include <Modloader/app/structs/MatchmakingPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
