#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTableCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTableCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTableCollection__Fields_DEFINED
struct DataSet;
struct ArrayList;
struct DataTable__Array;
struct CollectionChangeEventHandler;
struct __declspec(align(8)) DataTableCollection__Fields {
    struct DataSet* _dataSet;
    struct ArrayList* _list;
    int32_t _defaultNameIndex;
    struct DataTable__Array* _delayedAddRangeTables;
    struct CollectionChangeEventHandler* _onCollectionChangedDelegate;
    struct CollectionChangeEventHandler* _onCollectionChangingDelegate;
    int32_t _objectID;
};
#endif
#if !defined(IL2CPP_STRUCT_DataTableCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataTableCollection__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/CollectionChangeEventHandler.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable__Array.h>
#endif
#undef IL2CPP_STRUCT_DataTableCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataTableCollection__Fields_FWDDECL)
#include <Modloader/app/structs/DataTableCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTableCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
