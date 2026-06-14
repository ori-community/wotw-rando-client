#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataColumnPropertyDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataColumnPropertyDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnPropertyDescriptor__Fields_DEFINED)
#include <Modloader/app/structs/PropertyDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_DataColumnPropertyDescriptor__Fields_DEFINED
struct DataColumn;
struct DataColumnPropertyDescriptor__Fields {
    struct PropertyDescriptor__Fields _;
    struct DataColumn* _Column_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataColumnPropertyDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataColumnPropertyDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/DataColumn.h>
#endif
#undef IL2CPP_STRUCT_DataColumnPropertyDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnPropertyDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataColumnPropertyDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/DataColumnPropertyDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataColumnPropertyDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
