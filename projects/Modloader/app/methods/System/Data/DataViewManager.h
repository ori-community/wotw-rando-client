#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/CollectionChangeEventArgs.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataView.h>
#include <Modloader/app/structs/DataViewManager.h>
#include <Modloader/app/structs/DataViewSettingCollection.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ListChangedEventArgs.h>
#include <Modloader/app/structs/ListChangedEventHandler.h>
#include <Modloader/app/structs/ListSortDirection__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/PropertyDescriptor__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::DataViewManager {
    IL2CPP_REGISTER_METHOD(0x01F49040, void, ctor, app::DataViewManager* this_ptr, app::DataSet* data_set, bool locked)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::DataSet*, get_DataSet, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::DataViewSettingCollection*, get_DataViewSettings, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F49590, app::IEnumerator*, IEnumerable_GetEnumerator, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, ICollection_get_Count, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, ICollection_get_SyncRoot, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F49650, void, ICollection_CopyTo, app::DataViewManager* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Object*, IList_get_Item, app::DataViewManager* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F497C0, void, IList_set_Item, app::DataViewManager* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F49800, int32_t, IList_Add, app::DataViewManager* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F49840, void, IList_Clear, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F49880, bool, IList_Contains, app::DataViewManager* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F49890, int32_t, IList_IndexOf, app::DataViewManager* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F498B0, void, IList_Insert, app::DataViewManager* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F498F0, void, IList_Remove, app::DataViewManager* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F49930, void, IList_RemoveAt, app::DataViewManager* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_AllowNew, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F49970, app::Object*, IBindingList_AddNew, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_AllowEdit, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_AllowRemove, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IBindingList_get_SupportsChangeNotification, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_SupportsSearching, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_SupportsSorting, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F49A20, bool, IBindingList_get_IsSorted, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F49AD0, app::PropertyDescriptor*, IBindingList_get_SortProperty, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F49B80, app::ListSortDirection__Enum, IBindingList_get_SortDirection, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F49C30, void, add_ListChanged, app::DataViewManager* this_ptr, app::ListChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x01F49D20, void, remove_ListChanged, app::DataViewManager* this_ptr, app::ListChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IBindingList_AddIndex, app::DataViewManager* this_ptr, app::PropertyDescriptor* property)
    IL2CPP_REGISTER_METHOD(
        0x01F49E10,
        void,
        IBindingList_ApplySort,
        app::DataViewManager* this_ptr,
        app::PropertyDescriptor* property,
        app::ListSortDirection__Enum direction
    )
    IL2CPP_REGISTER_METHOD(0x01F49EC0, int32_t, IBindingList_Find, app::DataViewManager* this_ptr, app::PropertyDescriptor* property, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IBindingList_RemoveIndex, app::DataViewManager* this_ptr, app::PropertyDescriptor* property)
    IL2CPP_REGISTER_METHOD(0x01F49F70, void, IBindingList_RemoveSort, app::DataViewManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F4A020, app::String*, ITypedList_GetListName, app::DataViewManager* this_ptr, app::PropertyDescriptor__Array* list_accessors)
    IL2CPP_REGISTER_METHOD(
        0x01F4A130,
        app::PropertyDescriptorCollection*,
        ITypedList_GetItemProperties,
        app::DataViewManager* this_ptr,
        app::PropertyDescriptor__Array* list_accessors
    )
    IL2CPP_REGISTER_METHOD(0x01F4A3C0, app::DataView*, CreateDataView, app::DataViewManager* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x01F4A550, void, OnListChanged, app::DataViewManager* this_ptr, app::ListChangedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01F4A670, void, TableCollectionChanged, app::DataViewManager* this_ptr, app::Object* sender, app::CollectionChangeEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01F4AC30, void, RelationCollectionChanged, app::DataViewManager* this_ptr, app::Object* sender, app::CollectionChangeEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01F4B1E0, void, cctor, )
} // namespace app::classes::System::Data::DataViewManager
