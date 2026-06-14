#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceLeaderBoard__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceLeaderBoard__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderBoard__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceLeaderBoard__Fields_DEFINED
struct List_1_Moon_Race_LeaderBoardEntry_;
struct __declspec(align(8)) RaceLeaderBoard__Fields {
    bool IsSyncing;
    struct List_1_Moon_Race_LeaderBoardEntry_* Entries;
};
#endif
#if !defined(IL2CPP_STRUCT_RaceLeaderBoard__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceLeaderBoard__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Race_LeaderBoardEntry_.h>
#endif
#undef IL2CPP_STRUCT_RaceLeaderBoard__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderBoard__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceLeaderBoard__Fields_FWDDECL)
#include <Modloader/app/structs/RaceLeaderBoard__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceLeaderBoard__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
