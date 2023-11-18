#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceLeaderboardState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceLeaderboardState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardState__Fields_DEFINED)
#include <Modloader/app/structs/RaceBaseState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceBaseState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceLeaderboardState__Fields_DEFINED
struct RaceLeaderboardScreen;
struct RaceLeaderboardState__Fields {
    struct RaceBaseState__Fields _;
    struct RaceLeaderboardScreen* m_leaderboardScreen;
    bool m_selectedReplay;
    bool m_isSyncing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceLeaderboardState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceLeaderboardState__Fields_FWDDECL
#include <Modloader/app/structs/RaceLeaderboardScreen.h>
#endif
#undef IL2CPP_STRUCT_RaceLeaderboardState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceLeaderboardState__Fields_FWDDECL)
#include <Modloader/app/structs/RaceLeaderboardState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceLeaderboardState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
