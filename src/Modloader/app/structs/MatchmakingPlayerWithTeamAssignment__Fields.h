#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingPlayerWithTeamAssignment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingPlayerWithTeamAssignment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingPlayerWithTeamAssignment__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingPlayerWithTeamAssignment__Fields_DEFINED
struct MatchmakingPlayerAttributes;
struct EntityKey_6;
struct String;
struct __declspec(align(8)) MatchmakingPlayerWithTeamAssignment__Fields {
    struct MatchmakingPlayerAttributes* Attributes;
    struct EntityKey_6* Entity;
    struct String* TeamId;
};
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingPlayerWithTeamAssignment__Fields_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingPlayerWithTeamAssignment__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_6.h>
#include <Modloader/app/structs/MatchmakingPlayerAttributes.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingPlayerWithTeamAssignment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingPlayerWithTeamAssignment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingPlayerWithTeamAssignment__Fields_FWDDECL)
#include <Modloader/app/structs/MatchmakingPlayerWithTeamAssignment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingPlayerWithTeamAssignment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
