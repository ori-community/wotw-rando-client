#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceLeaderboardUI_Entry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceLeaderboardUI_Entry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardUI_Entry_DEFINED)
#include <Modloader/app/structs/RaceLeaderboardUI_Entry__Fields.h>
#if defined(IL2CPP_STRUCT_RaceLeaderboardUI_Entry__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceLeaderboardUI_Entry_DEFINED
struct RaceLeaderboardUI_Entry__Class;
struct RaceLeaderboardUI_Entry {
    struct RaceLeaderboardUI_Entry__Class* klass;
    MonitorData* monitor;
    struct RaceLeaderboardUI_Entry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceLeaderboardUI_Entry_FWDDECL)
#define IL2CPP_STRUCT_RaceLeaderboardUI_Entry_FWDDECL
#include <Modloader/app/structs/RaceLeaderboardUI_Entry__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceLeaderboardUI_Entry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardUI_Entry_DEFINED) && !defined(IL2CPP_STRUCT_RaceLeaderboardUI_Entry_FWDDECL)
#include <Modloader/app/structs/RaceLeaderboardUI_Entry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceLeaderboardUI_Entry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
