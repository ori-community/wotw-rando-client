#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__Filters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__Filters_INITIALIZING
#if !defined(IL2CPP_STRUCT__Filters_DEFINED)
#define IL2CPP_STRUCT__Filters_DEFINED
struct _Filters__Class;
struct _Filters {
    struct _Filters__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__Filters_FWDDECL)
#define IL2CPP_STRUCT__Filters_FWDDECL
#include <Modloader/app/structs/_Filters__Class.h>
#endif
#undef IL2CPP_STRUCT__Filters_INITIALIZING
#if !defined(IL2CPP_STRUCT__Filters_DEFINED) && !defined(IL2CPP_STRUCT__Filters_FWDDECL)
#include <Modloader/app/structs/_Filters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_Filters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
