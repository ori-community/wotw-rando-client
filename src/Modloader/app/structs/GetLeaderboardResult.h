#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetLeaderboardResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetLeaderboardResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetLeaderboardResult_DEFINED)
#include <Modloader/app/structs/GetLeaderboardResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetLeaderboardResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetLeaderboardResult_DEFINED
struct GetLeaderboardResult__Class;
struct GetLeaderboardResult {
    struct GetLeaderboardResult__Class* klass;
    MonitorData* monitor;
    struct GetLeaderboardResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetLeaderboardResult_FWDDECL)
#define IL2CPP_STRUCT_GetLeaderboardResult_FWDDECL
#include <Modloader/app/structs/GetLeaderboardResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetLeaderboardResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetLeaderboardResult_DEFINED) && !defined(IL2CPP_STRUCT_GetLeaderboardResult_FWDDECL)
#include <Modloader/app/structs/GetLeaderboardResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetLeaderboardResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
