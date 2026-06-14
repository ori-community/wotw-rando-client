#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticValue_DEFINED)
#include <Modloader/app/structs/StatisticValue__Fields.h>
#if defined(IL2CPP_STRUCT_StatisticValue__Fields_DEFINED)
#define IL2CPP_STRUCT_StatisticValue_DEFINED
struct StatisticValue__Class;
struct StatisticValue {
    struct StatisticValue__Class* klass;
    MonitorData* monitor;
    struct StatisticValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticValue_FWDDECL)
#define IL2CPP_STRUCT_StatisticValue_FWDDECL
#include <Modloader/app/structs/StatisticValue__Class.h>
#endif
#undef IL2CPP_STRUCT_StatisticValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticValue_DEFINED) && !defined(IL2CPP_STRUCT_StatisticValue_FWDDECL)
#include <Modloader/app/structs/StatisticValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
