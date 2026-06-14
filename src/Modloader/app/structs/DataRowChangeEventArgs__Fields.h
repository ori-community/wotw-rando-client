#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRowChangeEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRowChangeEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowChangeEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/DataRowAction__Enum.h>
#if defined(IL2CPP_STRUCT_DataRowAction__Enum_DEFINED)
#define IL2CPP_STRUCT_DataRowChangeEventArgs__Fields_DEFINED
struct DataRow;
struct __declspec(align(8)) DataRowChangeEventArgs__Fields {
    struct DataRow* _Row_k__BackingField;
    DataRowAction__Enum _Action_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRowChangeEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataRowChangeEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/DataRow.h>
#endif
#undef IL2CPP_STRUCT_DataRowChangeEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowChangeEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataRowChangeEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/DataRowChangeEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRowChangeEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
