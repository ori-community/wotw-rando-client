#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetLeaderboardRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetLeaderboardRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetLeaderboardRequest_DEFINED)
#include <Modloader/app/structs/GetLeaderboardRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetLeaderboardRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetLeaderboardRequest_DEFINED
struct GetLeaderboardRequest__Class;
struct GetLeaderboardRequest {
    struct GetLeaderboardRequest__Class* klass;
    MonitorData* monitor;
    struct GetLeaderboardRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetLeaderboardRequest_FWDDECL)
#define IL2CPP_STRUCT_GetLeaderboardRequest_FWDDECL
#include <Modloader/app/structs/GetLeaderboardRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetLeaderboardRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetLeaderboardRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetLeaderboardRequest_FWDDECL)
#include <Modloader/app/structs/GetLeaderboardRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetLeaderboardRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
