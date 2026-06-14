#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingMatchFoundPayload_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingMatchFoundPayload_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingMatchFoundPayload_DEFINED)
#include <Modloader/app/structs/MatchmakingMatchFoundPayload__Fields.h>
#if defined(IL2CPP_STRUCT_MatchmakingMatchFoundPayload__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingMatchFoundPayload_DEFINED
struct MatchmakingMatchFoundPayload__Class;
struct MatchmakingMatchFoundPayload {
    struct MatchmakingMatchFoundPayload__Class* klass;
    MonitorData* monitor;
    struct MatchmakingMatchFoundPayload__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingMatchFoundPayload_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingMatchFoundPayload_FWDDECL
#include <Modloader/app/structs/MatchmakingMatchFoundPayload__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingMatchFoundPayload_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingMatchFoundPayload_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingMatchFoundPayload_FWDDECL)
#include <Modloader/app/structs/MatchmakingMatchFoundPayload.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingMatchFoundPayload.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
