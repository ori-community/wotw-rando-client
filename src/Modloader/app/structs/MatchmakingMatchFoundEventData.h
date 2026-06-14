#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingMatchFoundEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingMatchFoundEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingMatchFoundEventData_DEFINED)
#include <Modloader/app/structs/MatchmakingMatchFoundEventData__Fields.h>
#if defined(IL2CPP_STRUCT_MatchmakingMatchFoundEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingMatchFoundEventData_DEFINED
struct MatchmakingMatchFoundEventData__Class;
struct MatchmakingMatchFoundEventData {
    struct MatchmakingMatchFoundEventData__Class* klass;
    MonitorData* monitor;
    struct MatchmakingMatchFoundEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingMatchFoundEventData_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingMatchFoundEventData_FWDDECL
#include <Modloader/app/structs/MatchmakingMatchFoundEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingMatchFoundEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingMatchFoundEventData_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingMatchFoundEventData_FWDDECL)
#include <Modloader/app/structs/MatchmakingMatchFoundEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingMatchFoundEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
