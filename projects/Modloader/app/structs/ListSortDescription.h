#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListSortDescription_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListSortDescription_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListSortDescription_DEFINED)
#include <Modloader/app/structs/ListSortDescription__Fields.h>
#if defined(IL2CPP_STRUCT_ListSortDescription__Fields_DEFINED)
#define IL2CPP_STRUCT_ListSortDescription_DEFINED
struct ListSortDescription__Class;
struct ListSortDescription {
    struct ListSortDescription__Class* klass;
    MonitorData* monitor;
    struct ListSortDescription__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListSortDescription_FWDDECL)
#define IL2CPP_STRUCT_ListSortDescription_FWDDECL
#include <Modloader/app/structs/ListSortDescription__Class.h>
#endif
#undef IL2CPP_STRUCT_ListSortDescription_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListSortDescription_DEFINED) && !defined(IL2CPP_STRUCT_ListSortDescription_FWDDECL)
#include <Modloader/app/structs/ListSortDescription.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListSortDescription.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
