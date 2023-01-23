#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRelationCollection_DataTableRelationCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRelationCollection_DataTableRelationCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelationCollection_DataTableRelationCollection__Fields_DEFINED)
#include <Modloader/app/structs/DataRelationCollection__Fields.h>
#if defined(IL2CPP_STRUCT_DataRelationCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRelationCollection_DataTableRelationCollection__Fields_DEFINED
struct DataTable;
struct ArrayList;
struct CollectionChangeEventHandler;
struct DataRelationCollection_DataTableRelationCollection__Fields {
    struct DataRelationCollection__Fields _;
    struct DataTable* _table;
    struct ArrayList* _relations;
    bool _fParentCollection;
    struct CollectionChangeEventHandler* RelationPropertyChanged;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRelationCollection_DataTableRelationCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataRelationCollection_DataTableRelationCollection__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/CollectionChangeEventHandler.h>
#include <Modloader/app/structs/DataTable.h>
#endif
#undef IL2CPP_STRUCT_DataRelationCollection_DataTableRelationCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelationCollection_DataTableRelationCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataRelationCollection_DataTableRelationCollection__Fields_FWDDECL)
#include <Modloader/app/structs/DataRelationCollection_DataTableRelationCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRelationCollection_DataTableRelationCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
