#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceLeaderBoard_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceLeaderBoard_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderBoard_DEFINED)
#include <Modloader/app/structs/RaceLeaderBoard__Fields.h>
#if defined(IL2CPP_STRUCT_RaceLeaderBoard__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceLeaderBoard_DEFINED
struct RaceLeaderBoard__Class;
struct RaceLeaderBoard {
    struct RaceLeaderBoard__Class* klass;
    MonitorData* monitor;
    struct RaceLeaderBoard__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceLeaderBoard_FWDDECL)
#define IL2CPP_STRUCT_RaceLeaderBoard_FWDDECL
#include <Modloader/app/structs/RaceLeaderBoard__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceLeaderBoard_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderBoard_DEFINED) && !defined(IL2CPP_STRUCT_RaceLeaderBoard_FWDDECL)
#include <Modloader/app/structs/RaceLeaderBoard.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceLeaderBoard.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
