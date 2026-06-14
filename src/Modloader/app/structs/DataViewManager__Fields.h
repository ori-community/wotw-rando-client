#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataViewManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataViewManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewManager__Fields_DEFINED)
#include <Modloader/app/structs/MarshalByValueComponent__Fields.h>
#if defined(IL2CPP_STRUCT_MarshalByValueComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_DataViewManager__Fields_DEFINED
struct DataViewSettingCollection;
struct DataSet;
struct DataViewManagerListItemTypeDescriptor;
struct ListChangedEventHandler;
struct DataViewManager__Fields {
    struct MarshalByValueComponent__Fields _;
    struct DataViewSettingCollection* _dataViewSettingsCollection;
    struct DataSet* _dataSet;
    struct DataViewManagerListItemTypeDescriptor* _item;
    bool _locked;
    int32_t _nViews;
    struct ListChangedEventHandler* ListChanged;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataViewManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataViewManager__Fields_FWDDECL
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataViewManagerListItemTypeDescriptor.h>
#include <Modloader/app/structs/DataViewSettingCollection.h>
#include <Modloader/app/structs/ListChangedEventHandler.h>
#endif
#undef IL2CPP_STRUCT_DataViewManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataViewManager__Fields_FWDDECL)
#include <Modloader/app/structs/DataViewManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataViewManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
