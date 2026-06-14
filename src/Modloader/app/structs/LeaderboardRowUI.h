#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardRowUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardRowUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardRowUI_DEFINED)
#include <Modloader/app/structs/LeaderboardRowUI__Fields.h>
#if defined(IL2CPP_STRUCT_LeaderboardRowUI__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderboardRowUI_DEFINED
struct LeaderboardRowUI__Class;
struct LeaderboardRowUI {
    struct LeaderboardRowUI__Class* klass;
    MonitorData* monitor;
    struct LeaderboardRowUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardRowUI_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardRowUI_FWDDECL
#include <Modloader/app/structs/LeaderboardRowUI__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardRowUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardRowUI_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardRowUI_FWDDECL)
#include <Modloader/app/structs/LeaderboardRowUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardRowUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
