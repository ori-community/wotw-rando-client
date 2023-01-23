#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Statistic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Statistic_INITIALIZING
#if !defined(IL2CPP_STRUCT_Statistic_DEFINED)
#include <Modloader/app/structs/Statistic__Fields.h>
#if defined(IL2CPP_STRUCT_Statistic__Fields_DEFINED)
#define IL2CPP_STRUCT_Statistic_DEFINED
struct Statistic__Class;
struct Statistic {
    struct Statistic__Class* klass;
    MonitorData* monitor;
    struct Statistic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Statistic_FWDDECL)
#define IL2CPP_STRUCT_Statistic_FWDDECL
#include <Modloader/app/structs/Statistic__Class.h>
#endif
#undef IL2CPP_STRUCT_Statistic_INITIALIZING
#if !defined(IL2CPP_STRUCT_Statistic_DEFINED) && !defined(IL2CPP_STRUCT_Statistic_FWDDECL)
#include <Modloader/app/structs/Statistic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Statistic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
