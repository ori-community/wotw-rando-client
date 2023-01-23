#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceLeaderboardState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceLeaderboardState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardState_DEFINED)
#include <Modloader/app/structs/RaceLeaderboardState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceLeaderboardState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceLeaderboardState_DEFINED
struct RaceLeaderboardState__Class;
struct RaceLeaderboardState {
    struct RaceLeaderboardState__Class* klass;
    MonitorData* monitor;
    struct RaceLeaderboardState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceLeaderboardState_FWDDECL)
#define IL2CPP_STRUCT_RaceLeaderboardState_FWDDECL
#include <Modloader/app/structs/RaceLeaderboardState__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceLeaderboardState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardState_DEFINED) && !defined(IL2CPP_STRUCT_RaceLeaderboardState_FWDDECL)
#include <Modloader/app/structs/RaceLeaderboardState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceLeaderboardState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
