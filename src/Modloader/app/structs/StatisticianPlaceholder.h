#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticianPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticianPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticianPlaceholder_DEFINED)
#include <Modloader/app/structs/StatisticianPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_StatisticianPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_StatisticianPlaceholder_DEFINED
struct StatisticianPlaceholder__Class;
struct StatisticianPlaceholder {
    struct StatisticianPlaceholder__Class* klass;
    MonitorData* monitor;
    struct StatisticianPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticianPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_StatisticianPlaceholder_FWDDECL
#include <Modloader/app/structs/StatisticianPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_StatisticianPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticianPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_StatisticianPlaceholder_FWDDECL)
#include <Modloader/app/structs/StatisticianPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticianPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
