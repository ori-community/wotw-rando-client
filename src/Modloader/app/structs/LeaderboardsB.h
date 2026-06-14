#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardsB_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardsB_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardsB_DEFINED)
#include <Modloader/app/structs/LeaderboardsB__Fields.h>
#if defined(IL2CPP_STRUCT_LeaderboardsB__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderboardsB_DEFINED
struct LeaderboardsB__Class;
struct LeaderboardsB {
    struct LeaderboardsB__Class* klass;
    MonitorData* monitor;
    struct LeaderboardsB__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardsB_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardsB_FWDDECL
#include <Modloader/app/structs/LeaderboardsB__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardsB_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardsB_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardsB_FWDDECL)
#include <Modloader/app/structs/LeaderboardsB.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardsB.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
