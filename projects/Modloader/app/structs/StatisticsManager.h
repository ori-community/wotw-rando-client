#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticsManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticsManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticsManager_DEFINED)
#include <Modloader/app/structs/StatisticsManager__Fields.h>
#if defined(IL2CPP_STRUCT_StatisticsManager__Fields_DEFINED)
#define IL2CPP_STRUCT_StatisticsManager_DEFINED
struct StatisticsManager__Class;
struct StatisticsManager {
    struct StatisticsManager__Class* klass;
    MonitorData* monitor;
    struct StatisticsManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticsManager_FWDDECL)
#define IL2CPP_STRUCT_StatisticsManager_FWDDECL
#include <Modloader/app/structs/StatisticsManager__Class.h>
#endif
#undef IL2CPP_STRUCT_StatisticsManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticsManager_DEFINED) && !defined(IL2CPP_STRUCT_StatisticsManager_FWDDECL)
#include <Modloader/app/structs/StatisticsManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticsManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
