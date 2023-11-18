#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingPlayer__Fields_DEFINED
struct MatchmakingPlayerAttributes;
struct EntityKey_6;
struct __declspec(align(8)) MatchmakingPlayer__Fields {
    struct MatchmakingPlayerAttributes* Attributes;
    struct EntityKey_6* Entity;
};
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingPlayer__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_6.h>
#include <Modloader/app/structs/MatchmakingPlayerAttributes.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/MatchmakingPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
