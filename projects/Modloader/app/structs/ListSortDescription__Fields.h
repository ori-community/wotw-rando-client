#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListSortDescription__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListSortDescription__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListSortDescription__Fields_DEFINED)
#include <Modloader/app/structs/ListSortDirection__Enum.h>
#if defined(IL2CPP_STRUCT_ListSortDirection__Enum_DEFINED)
#define IL2CPP_STRUCT_ListSortDescription__Fields_DEFINED
struct PropertyDescriptor;
struct __declspec(align(8)) ListSortDescription__Fields {
    struct PropertyDescriptor* property;
    ListSortDirection__Enum sortDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListSortDescription__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListSortDescription__Fields_FWDDECL
#include <Modloader/app/structs/PropertyDescriptor.h>
#endif
#undef IL2CPP_STRUCT_ListSortDescription__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListSortDescription__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListSortDescription__Fields_FWDDECL)
#include <Modloader/app/structs/ListSortDescription__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListSortDescription__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
