#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardTableUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardTableUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardTableUI_DEFINED)
#include <Modloader/app/structs/LeaderboardTableUI__Fields.h>
#if defined(IL2CPP_STRUCT_LeaderboardTableUI__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderboardTableUI_DEFINED
struct LeaderboardTableUI__Class;
struct LeaderboardTableUI {
    struct LeaderboardTableUI__Class* klass;
    MonitorData* monitor;
    struct LeaderboardTableUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardTableUI_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardTableUI_FWDDECL
#include <Modloader/app/structs/LeaderboardTableUI__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardTableUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardTableUI_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardTableUI_FWDDECL)
#include <Modloader/app/structs/LeaderboardTableUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardTableUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
