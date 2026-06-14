#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetCharacterLeaderboardRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetCharacterLeaderboardRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterLeaderboardRequest_DEFINED)
#include <Modloader/app/structs/GetCharacterLeaderboardRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetCharacterLeaderboardRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetCharacterLeaderboardRequest_DEFINED
struct GetCharacterLeaderboardRequest__Class;
struct GetCharacterLeaderboardRequest {
    struct GetCharacterLeaderboardRequest__Class* klass;
    MonitorData* monitor;
    struct GetCharacterLeaderboardRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetCharacterLeaderboardRequest_FWDDECL)
#define IL2CPP_STRUCT_GetCharacterLeaderboardRequest_FWDDECL
#include <Modloader/app/structs/GetCharacterLeaderboardRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetCharacterLeaderboardRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterLeaderboardRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetCharacterLeaderboardRequest_FWDDECL)
#include <Modloader/app/structs/GetCharacterLeaderboardRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetCharacterLeaderboardRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
