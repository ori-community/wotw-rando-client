#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTablePropertyDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTablePropertyDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTablePropertyDescriptor__Fields_DEFINED)
#include <Modloader/app/structs/PropertyDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTablePropertyDescriptor__Fields_DEFINED
struct DataTable;
struct DataTablePropertyDescriptor__Fields {
    struct PropertyDescriptor__Fields _;
    struct DataTable* _Table_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataTablePropertyDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataTablePropertyDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/DataTable.h>
#endif
#undef IL2CPP_STRUCT_DataTablePropertyDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTablePropertyDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataTablePropertyDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/DataTablePropertyDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTablePropertyDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
