#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticModel_DEFINED)
#include <Modloader/app/structs/StatisticModel__Fields.h>
#if defined(IL2CPP_STRUCT_StatisticModel__Fields_DEFINED)
#define IL2CPP_STRUCT_StatisticModel_DEFINED
struct StatisticModel__Class;
struct StatisticModel {
    struct StatisticModel__Class* klass;
    MonitorData* monitor;
    struct StatisticModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticModel_FWDDECL)
#define IL2CPP_STRUCT_StatisticModel_FWDDECL
#include <Modloader/app/structs/StatisticModel__Class.h>
#endif
#undef IL2CPP_STRUCT_StatisticModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticModel_DEFINED) && !defined(IL2CPP_STRUCT_StatisticModel_FWDDECL)
#include <Modloader/app/structs/StatisticModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
