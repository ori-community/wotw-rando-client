#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardSource_DEFINED)
#include <Modloader/app/structs/LeaderboardSource__Fields.h>
#if defined(IL2CPP_STRUCT_LeaderboardSource__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderboardSource_DEFINED
struct LeaderboardSource__Class;
struct LeaderboardSource {
    struct LeaderboardSource__Class* klass;
    MonitorData* monitor;
    struct LeaderboardSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardSource_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardSource_FWDDECL
#include <Modloader/app/structs/LeaderboardSource__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardSource_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardSource_FWDDECL)
#include <Modloader/app/structs/LeaderboardSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
