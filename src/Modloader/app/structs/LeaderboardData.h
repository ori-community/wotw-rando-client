#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardData_DEFINED)
#include <Modloader/app/structs/LeaderboardData__Fields.h>
#if defined(IL2CPP_STRUCT_LeaderboardData__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderboardData_DEFINED
struct LeaderboardData__Class;
struct LeaderboardData {
    struct LeaderboardData__Class* klass;
    MonitorData* monitor;
    struct LeaderboardData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardData_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardData_FWDDECL
#include <Modloader/app/structs/LeaderboardData__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardData_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardData_FWDDECL)
#include <Modloader/app/structs/LeaderboardData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
