#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataViewManagerListItemTypeDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataViewManagerListItemTypeDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewManagerListItemTypeDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_DataViewManagerListItemTypeDescriptor__Fields_DEFINED
struct DataViewManager;
struct PropertyDescriptorCollection;
struct __declspec(align(8)) DataViewManagerListItemTypeDescriptor__Fields {
    struct DataViewManager* _dataViewManager;
    struct PropertyDescriptorCollection* _propsCollection;
};
#endif
#if !defined(IL2CPP_STRUCT_DataViewManagerListItemTypeDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataViewManagerListItemTypeDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/DataViewManager.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#endif
#undef IL2CPP_STRUCT_DataViewManagerListItemTypeDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewManagerListItemTypeDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataViewManagerListItemTypeDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/DataViewManagerListItemTypeDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataViewManagerListItemTypeDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
