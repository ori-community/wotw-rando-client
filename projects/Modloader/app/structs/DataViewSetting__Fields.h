#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataViewSetting__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataViewSetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewSetting__Fields_DEFINED)
#include <Modloader/app/structs/DataViewRowState__Enum.h>
#if defined(IL2CPP_STRUCT_DataViewRowState__Enum_DEFINED)
#define IL2CPP_STRUCT_DataViewSetting__Fields_DEFINED
struct DataViewManager;
struct DataTable;
struct String;
struct __declspec(align(8)) DataViewSetting__Fields {
    struct DataViewManager* _dataViewManager;
    struct DataTable* _table;
    struct String* _sort;
    struct String* _rowFilter;
    DataViewRowState__Enum _rowStateFilter;

    bool _applyDefaultSort;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataViewSetting__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataViewSetting__Fields_FWDDECL
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataViewManager.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DataViewSetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewSetting__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataViewSetting__Fields_FWDDECL)
#include <Modloader/app/structs/DataViewSetting__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataViewSetting__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
