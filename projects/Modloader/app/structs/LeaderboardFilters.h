#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardFilters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardFilters_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardFilters_DEFINED)
#define IL2CPP_STRUCT_LeaderboardFilters_DEFINED
struct LeaderboardFilters__Class;
struct LeaderboardFilters {
    struct LeaderboardFilters__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardFilters_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardFilters_FWDDECL
#include <Modloader/app/structs/LeaderboardFilters__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardFilters_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardFilters_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardFilters_FWDDECL)
#include <Modloader/app/structs/LeaderboardFilters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardFilters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
