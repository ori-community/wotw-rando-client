#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingPlayerAttributes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingPlayerAttributes_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingPlayerAttributes_DEFINED)
#include <Modloader/app/structs/MatchmakingPlayerAttributes__Fields.h>
#if defined(IL2CPP_STRUCT_MatchmakingPlayerAttributes__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingPlayerAttributes_DEFINED
struct MatchmakingPlayerAttributes__Class;
struct MatchmakingPlayerAttributes {
    struct MatchmakingPlayerAttributes__Class* klass;
    MonitorData* monitor;
    struct MatchmakingPlayerAttributes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingPlayerAttributes_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingPlayerAttributes_FWDDECL
#include <Modloader/app/structs/MatchmakingPlayerAttributes__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingPlayerAttributes_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingPlayerAttributes_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingPlayerAttributes_FWDDECL)
#include <Modloader/app/structs/MatchmakingPlayerAttributes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingPlayerAttributes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
