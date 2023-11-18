#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Index__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Index__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Index__Fields_DEFINED)
#include <Modloader/app/structs/DataViewRowState__Enum.h>
#if defined(IL2CPP_STRUCT_DataViewRowState__Enum_DEFINED)
#define IL2CPP_STRUCT_Index__Fields_DEFINED
struct DataTable;
struct IndexField__Array;
struct Comparison_1_System_Data_DataRow_;
struct WeakReference;
struct Index_IndexTree;
struct Listeners_1_DataViewListener_;
struct __declspec(align(8)) Index__Fields {
    struct DataTable* _table;
    struct IndexField__Array* _indexFields;
    struct Comparison_1_System_Data_DataRow_* _comparison;
    DataViewRowState__Enum _recordStates;

    struct WeakReference* _rowFilter;
    struct Index_IndexTree* _records;
    int32_t _recordCount;
    int32_t _refCount;
    struct Listeners_1_DataViewListener_* _listeners;
    bool _suspendEvents;
    bool _isSharable;
    bool _hasRemoteAggregate;
    int32_t _objectID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Index__Fields_FWDDECL)
#define IL2CPP_STRUCT_Index__Fields_FWDDECL
#include <Modloader/app/structs/Comparison_1_System_Data_DataRow_.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/IndexField__Array.h>
#include <Modloader/app/structs/Index_IndexTree.h>
#include <Modloader/app/structs/Listeners_1_DataViewListener_.h>
#include <Modloader/app/structs/WeakReference.h>
#endif
#undef IL2CPP_STRUCT_Index__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Index__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Index__Fields_FWDDECL)
#include <Modloader/app/structs/Index__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Index__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
