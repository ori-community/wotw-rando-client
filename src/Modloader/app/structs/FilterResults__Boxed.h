#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FilterResults__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FilterResults__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilterResults__Boxed_DEFINED)
#include <Modloader/app/structs/FilterResults.h>
#if defined(IL2CPP_STRUCT_FilterResults_DEFINED)
#define IL2CPP_STRUCT_FilterResults__Boxed_DEFINED
struct FilterResults__Class;
struct FilterResults__Boxed {
    struct FilterResults__Class* klass;
    MonitorData* monitor;
    struct FilterResults fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FilterResults__Boxed_FWDDECL)
#define IL2CPP_STRUCT_FilterResults__Boxed_FWDDECL
#include <Modloader/app/structs/FilterResults__Class.h>
#endif
#undef IL2CPP_STRUCT_FilterResults__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilterResults__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_FilterResults__Boxed_FWDDECL)
#include <Modloader/app/structs/FilterResults__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FilterResults__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
