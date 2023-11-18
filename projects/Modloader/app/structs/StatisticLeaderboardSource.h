#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticLeaderboardSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticLeaderboardSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticLeaderboardSource_DEFINED)
#include <Modloader/app/structs/StatisticLeaderboardSource__Fields.h>
#if defined(IL2CPP_STRUCT_StatisticLeaderboardSource__Fields_DEFINED)
#define IL2CPP_STRUCT_StatisticLeaderboardSource_DEFINED
struct StatisticLeaderboardSource__Class;
struct StatisticLeaderboardSource {
    struct StatisticLeaderboardSource__Class* klass;
    MonitorData* monitor;
    struct StatisticLeaderboardSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticLeaderboardSource_FWDDECL)
#define IL2CPP_STRUCT_StatisticLeaderboardSource_FWDDECL
#include <Modloader/app/structs/StatisticLeaderboardSource__Class.h>
#endif
#undef IL2CPP_STRUCT_StatisticLeaderboardSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticLeaderboardSource_DEFINED) && !defined(IL2CPP_STRUCT_StatisticLeaderboardSource_FWDDECL)
#include <Modloader/app/structs/StatisticLeaderboardSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticLeaderboardSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
