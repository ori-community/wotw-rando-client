#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataView__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataView__Fields_DEFINED)
#include <Modloader/app/structs/DataViewRowState__Enum.h>
#include <Modloader/app/structs/MarshalByValueComponent__Fields.h>
#if defined(IL2CPP_STRUCT_MarshalByValueComponent__Fields_DEFINED) && defined(IL2CPP_STRUCT_DataViewRowState__Enum_DEFINED)
#define IL2CPP_STRUCT_DataView__Fields_DEFINED
struct DataViewManager;
struct DataTable;
struct Index;
struct Dictionary_2_System_String_System_Data_Index_;
struct String;
struct Comparison_1_System_Data_DataRow_;
struct IFilter;
struct DataRow;
struct ListChangedEventArgs;
struct ListChangedEventHandler;
struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView_;
struct DataViewListener;
struct EventHandler;
struct DataView__Fields {
    struct MarshalByValueComponent__Fields _;
    struct DataViewManager* _dataViewManager;
    struct DataTable* _table;
    bool _locked;
    struct Index* _index;
    struct Dictionary_2_System_String_System_Data_Index_* _findIndexes;
    struct String* _sort;
    struct Comparison_1_System_Data_DataRow_* _comparison;
    struct IFilter* _rowFilter;
    DataViewRowState__Enum _recordStates;

    bool _shouldOpen;
    bool _open;
    bool _allowNew;
    bool _allowEdit;
    bool _allowDelete;
    bool _applyDefaultSort;
    struct DataRow* _addNewRow;
    struct ListChangedEventArgs* _addNewMoved;
    struct ListChangedEventHandler* _onListChanged;
    struct DataTable* _delayedTable;
    struct String* _delayedRowFilter;
    struct String* _delayedSort;
    DataViewRowState__Enum _delayedRecordStates;

    bool _fInitInProgress;
    bool _fEndInitInProgress;
    struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView_* _rowViewCache;
    struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView_* _rowViewBuffer;
    struct DataViewListener* _dvListener;
    int32_t _objectID;
    struct EventHandler* Initialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataView__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataView__Fields_FWDDECL
#include <Modloader/app/structs/Comparison_1_System_Data_DataRow_.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataViewListener.h>
#include <Modloader/app/structs/DataViewManager.h>
#include <Modloader/app/structs/Dictionary_2_System_Data_DataRow_System_Data_DataRowView_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Data_Index_.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/IFilter.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/ListChangedEventArgs.h>
#include <Modloader/app/structs/ListChangedEventHandler.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DataView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataView__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataView__Fields_FWDDECL)
#include <Modloader/app/structs/DataView__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataView__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
