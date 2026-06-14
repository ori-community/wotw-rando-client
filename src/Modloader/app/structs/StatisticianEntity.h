#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticianEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticianEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticianEntity_DEFINED)
#include <Modloader/app/structs/StatisticianEntity__Fields.h>
#if defined(IL2CPP_STRUCT_StatisticianEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_StatisticianEntity_DEFINED
struct StatisticianEntity__Class;
struct StatisticianEntity {
    struct StatisticianEntity__Class* klass;
    MonitorData* monitor;
    struct StatisticianEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticianEntity_FWDDECL)
#define IL2CPP_STRUCT_StatisticianEntity_FWDDECL
#include <Modloader/app/structs/StatisticianEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_StatisticianEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticianEntity_DEFINED) && !defined(IL2CPP_STRUCT_StatisticianEntity_FWDDECL)
#include <Modloader/app/structs/StatisticianEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticianEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
