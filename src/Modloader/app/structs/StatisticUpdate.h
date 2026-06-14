#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticUpdate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticUpdate_DEFINED)
#include <Modloader/app/structs/StatisticUpdate__Fields.h>
#if defined(IL2CPP_STRUCT_StatisticUpdate__Fields_DEFINED)
#define IL2CPP_STRUCT_StatisticUpdate_DEFINED
struct StatisticUpdate__Class;
struct StatisticUpdate {
    struct StatisticUpdate__Class* klass;
    MonitorData* monitor;
    struct StatisticUpdate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticUpdate_FWDDECL)
#define IL2CPP_STRUCT_StatisticUpdate_FWDDECL
#include <Modloader/app/structs/StatisticUpdate__Class.h>
#endif
#undef IL2CPP_STRUCT_StatisticUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticUpdate_DEFINED) && !defined(IL2CPP_STRUCT_StatisticUpdate_FWDDECL)
#include <Modloader/app/structs/StatisticUpdate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticUpdate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
