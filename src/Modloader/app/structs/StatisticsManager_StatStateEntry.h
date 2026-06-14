#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticsManager_StatStateEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticsManager_StatStateEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticsManager_StatStateEntry_DEFINED)
#include <Modloader/app/structs/StatisticsManager_StatStateEntry__Fields.h>
#if defined(IL2CPP_STRUCT_StatisticsManager_StatStateEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_StatisticsManager_StatStateEntry_DEFINED
struct StatisticsManager_StatStateEntry__Class;
struct StatisticsManager_StatStateEntry {
    struct StatisticsManager_StatStateEntry__Class* klass;
    MonitorData* monitor;
    struct StatisticsManager_StatStateEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticsManager_StatStateEntry_FWDDECL)
#define IL2CPP_STRUCT_StatisticsManager_StatStateEntry_FWDDECL
#include <Modloader/app/structs/StatisticsManager_StatStateEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_StatisticsManager_StatStateEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticsManager_StatStateEntry_DEFINED) && !defined(IL2CPP_STRUCT_StatisticsManager_StatStateEntry_FWDDECL)
#include <Modloader/app/structs/StatisticsManager_StatStateEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticsManager_StatStateEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
