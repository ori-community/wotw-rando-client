#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardEntryData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardEntryData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardEntryData_DEFINED)
#include <Modloader/app/structs/LeaderboardEntryData__Fields.h>
#if defined(IL2CPP_STRUCT_LeaderboardEntryData__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderboardEntryData_DEFINED
struct LeaderboardEntryData__Class;
struct LeaderboardEntryData {
    struct LeaderboardEntryData__Class* klass;
    MonitorData* monitor;
    struct LeaderboardEntryData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardEntryData_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardEntryData_FWDDECL
#include <Modloader/app/structs/LeaderboardEntryData__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardEntryData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardEntryData_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardEntryData_FWDDECL)
#include <Modloader/app/structs/LeaderboardEntryData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardEntryData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
