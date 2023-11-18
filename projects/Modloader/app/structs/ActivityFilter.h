#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivityFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivityFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityFilter_DEFINED)
#include <Modloader/app/structs/ActivityFilter__Fields.h>
#if defined(IL2CPP_STRUCT_ActivityFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivityFilter_DEFINED
struct ActivityFilter__Class;
struct ActivityFilter {
    struct ActivityFilter__Class* klass;
    MonitorData* monitor;
    struct ActivityFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivityFilter_FWDDECL)
#define IL2CPP_STRUCT_ActivityFilter_FWDDECL
#include <Modloader/app/structs/ActivityFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivityFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityFilter_DEFINED) && !defined(IL2CPP_STRUCT_ActivityFilter_FWDDECL)
#include <Modloader/app/structs/ActivityFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivityFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
