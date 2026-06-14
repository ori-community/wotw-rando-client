#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticNameVersion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticNameVersion_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticNameVersion_DEFINED)
#include <Modloader/app/structs/StatisticNameVersion__Fields.h>
#if defined(IL2CPP_STRUCT_StatisticNameVersion__Fields_DEFINED)
#define IL2CPP_STRUCT_StatisticNameVersion_DEFINED
struct StatisticNameVersion__Class;
struct StatisticNameVersion {
    struct StatisticNameVersion__Class* klass;
    MonitorData* monitor;
    struct StatisticNameVersion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticNameVersion_FWDDECL)
#define IL2CPP_STRUCT_StatisticNameVersion_FWDDECL
#include <Modloader/app/structs/StatisticNameVersion__Class.h>
#endif
#undef IL2CPP_STRUCT_StatisticNameVersion_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticNameVersion_DEFINED) && !defined(IL2CPP_STRUCT_StatisticNameVersion_FWDDECL)
#include <Modloader/app/structs/StatisticNameVersion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticNameVersion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
