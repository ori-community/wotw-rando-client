#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Merger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Merger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Merger__Fields_DEFINED)
#include <Modloader/app/structs/MissingSchemaAction__Enum.h>
#if defined(IL2CPP_STRUCT_MissingSchemaAction__Enum_DEFINED)
#define IL2CPP_STRUCT_Merger__Fields_DEFINED
struct DataSet;
struct DataTable;
struct __declspec(align(8)) Merger__Fields {
    struct DataSet* _dataSet;
    struct DataTable* _dataTable;
    bool _preserveChanges;
    MissingSchemaAction__Enum _missingSchemaAction;

    bool _isStandAlonetable;
    bool _IgnoreNSforTableLookup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Merger__Fields_FWDDECL)
#define IL2CPP_STRUCT_Merger__Fields_FWDDECL
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#endif
#undef IL2CPP_STRUCT_Merger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Merger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Merger__Fields_FWDDECL)
#include <Modloader/app/structs/Merger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Merger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
