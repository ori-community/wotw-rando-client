#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardTableUI_LeaderboardMetaData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardTableUI_LeaderboardMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardTableUI_LeaderboardMetaData__Fields_DEFINED)
#include <Modloader/app/structs/Leaderboard__Enum.h>
#if defined(IL2CPP_STRUCT_Leaderboard__Enum_DEFINED)
#define IL2CPP_STRUCT_LeaderboardTableUI_LeaderboardMetaData__Fields_DEFINED
struct GameObject;
struct LeaderboardRowUI;
struct __declspec(align(8)) LeaderboardTableUI_LeaderboardMetaData__Fields {
    struct GameObject* Header;
    struct LeaderboardRowUI* Row;
    Leaderboard__Enum Leaderboard;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardTableUI_LeaderboardMetaData__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardTableUI_LeaderboardMetaData__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LeaderboardRowUI.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardTableUI_LeaderboardMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardTableUI_LeaderboardMetaData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardTableUI_LeaderboardMetaData__Fields_FWDDECL)
#include <Modloader/app/structs/LeaderboardTableUI_LeaderboardMetaData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardTableUI_LeaderboardMetaData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
