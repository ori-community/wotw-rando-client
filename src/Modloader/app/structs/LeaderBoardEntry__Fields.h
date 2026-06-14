#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderBoardEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderBoardEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderBoardEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderBoardEntry__Fields_DEFINED
struct String;
struct __declspec(align(8)) LeaderBoardEntry__Fields {
    struct String* DisplayName;
    int32_t Time;
    int32_t Position;
    bool IsMe;
    struct String* Replay;
    struct String* UserID;
    bool IsSteamEntry;
    bool IsLiveEntry;
};
#endif
#if !defined(IL2CPP_STRUCT_LeaderBoardEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaderBoardEntry__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LeaderBoardEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderBoardEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaderBoardEntry__Fields_FWDDECL)
#include <Modloader/app/structs/LeaderBoardEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderBoardEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
