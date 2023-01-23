#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingQueueTeam__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingQueueTeam__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueTeam__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingQueueTeam__Fields_DEFINED
struct String;
struct __declspec(align(8)) MatchmakingQueueTeam__Fields {
    uint32_t MaxTeamSize;
    uint32_t MinTeamSize;
    struct String* Name;
};
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingQueueTeam__Fields_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingQueueTeam__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingQueueTeam__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueTeam__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingQueueTeam__Fields_FWDDECL)
#include <Modloader/app/structs/MatchmakingQueueTeam__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingQueueTeam__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
