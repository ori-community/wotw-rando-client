#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataColumnChangeEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataColumnChangeEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnChangeEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_DataColumnChangeEventArgs__Fields_DEFINED
struct DataColumn;
struct DataRow;
struct Object;
struct __declspec(align(8)) DataColumnChangeEventArgs__Fields {
    struct DataColumn* _column;
    struct DataRow* _Row_k__BackingField;
    struct Object* _ProposedValue_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_DataColumnChangeEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataColumnChangeEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_DataColumnChangeEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnChangeEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataColumnChangeEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/DataColumnChangeEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataColumnChangeEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
