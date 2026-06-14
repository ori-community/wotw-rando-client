#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticsManager_RuntimeStatEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticsManager_RuntimeStatEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticsManager_RuntimeStatEntry_DEFINED)
#include <Modloader/app/structs/StatisticsManager_RuntimeStatEntry__Fields.h>
#if defined(IL2CPP_STRUCT_StatisticsManager_RuntimeStatEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_StatisticsManager_RuntimeStatEntry_DEFINED
struct StatisticsManager_RuntimeStatEntry__Class;
struct StatisticsManager_RuntimeStatEntry {
    struct StatisticsManager_RuntimeStatEntry__Class* klass;
    MonitorData* monitor;
    struct StatisticsManager_RuntimeStatEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticsManager_RuntimeStatEntry_FWDDECL)
#define IL2CPP_STRUCT_StatisticsManager_RuntimeStatEntry_FWDDECL
#include <Modloader/app/structs/StatisticsManager_RuntimeStatEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_StatisticsManager_RuntimeStatEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticsManager_RuntimeStatEntry_DEFINED) && !defined(IL2CPP_STRUCT_StatisticsManager_RuntimeStatEntry_FWDDECL)
#include <Modloader/app/structs/StatisticsManager_RuntimeStatEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticsManager_RuntimeStatEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
