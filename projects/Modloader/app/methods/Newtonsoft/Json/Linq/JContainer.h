#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddingNewEventArgs.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IJsonLineInfo.h>
#include <Modloader/app/structs/JContainer.h>
#include <Modloader/app/structs/JEnumerable_1_JToken_.h>
#include <Modloader/app/structs/JProperty.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/JToken__Array.h>
#include <Modloader/app/structs/JsonLoadSettings.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/ListChangedEventArgs.h>
#include <Modloader/app/structs/ListChangedEventHandler.h>
#include <Modloader/app/structs/ListSortDirection__Enum.h>
#include <Modloader/app/structs/NotifyCollectionChangedEventArgs.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/PropertyDescriptor__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Linq::JContainer {
    IL2CPP_REGISTER_METHOD(0x01F050C0, void, add_ListChanged, app::JContainer* this_ptr, app::ListChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x01F05180, void, remove_ListChanged, app::JContainer* this_ptr, app::ListChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x01F05240, void, ctor_1, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F052D0, void, ctor_2, app::JContainer* this_ptr, app::JContainer* other)
    IL2CPP_REGISTER_METHOD(0x01F054D0, void, CheckReentrancy, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0194A370, void, OnAddingNew, app::JContainer* this_ptr, app::AddingNewEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01F055D0, void, OnListChanged, app::JContainer* this_ptr, app::ListChangedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01F05670, void, OnCollectionChanged, app::JContainer* this_ptr, app::NotifyCollectionChangedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01F05710, bool, get_HasValues, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F057C0, app::JToken*, get_First, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F05880, app::JToken*, get_Last, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F05940, app::JEnumerable_1_JToken_, Children, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F05A40, bool, IsMultiContent, app::JContainer* this_ptr, app::Object* content)
    IL2CPP_REGISTER_METHOD(0x01F05B50, app::JToken*, EnsureParentToken, app::JContainer* this_ptr, app::JToken* item, bool skip_parent_check)
    IL2CPP_REGISTER_METHOD(0x01F05BF0, void, InsertItem, app::JContainer* this_ptr, int32_t index, app::JToken* item, bool skip_parent_check)
    IL2CPP_REGISTER_METHOD(0x01F05FB0, void, RemoveItemAt, app::JContainer* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F06380, bool, RemoveItem, app::JContainer* this_ptr, app::JToken* item)
    IL2CPP_REGISTER_METHOD(0x01F063D0, app::JToken*, GetItem, app::JContainer* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F06480, void, SetItem, app::JContainer* this_ptr, int32_t index, app::JToken* item)
    IL2CPP_REGISTER_METHOD(0x01F068C0, void, ClearItems, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F06D00, void, ReplaceItem, app::JContainer* this_ptr, app::JToken* existing, app::JToken* replacement)
    IL2CPP_REGISTER_METHOD(0x01F06D50, bool, ContainsItem, app::JContainer* this_ptr, app::JToken* item)
    IL2CPP_REGISTER_METHOD(0x01F06D70, void, CopyItemsTo, app::JContainer* this_ptr, app::Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x01F07030, bool, IsTokenUnchanged, app::JToken* current_value, app::JToken* new_value)
    IL2CPP_REGISTER_METHOD(0x01F07150, void, ValidateToken, app::JContainer* this_ptr, app::JToken* o, app::JToken* existing)
    IL2CPP_REGISTER_METHOD(0x01F072B0, void, Add, app::JContainer* this_ptr, app::Object* content)
    IL2CPP_REGISTER_METHOD(0x01F07380, void, AddAndSkipParentCheck, app::JContainer* this_ptr, app::JToken* token)
    IL2CPP_REGISTER_METHOD(0x01F07450, void, AddInternal, app::JContainer* this_ptr, int32_t index, app::Object* content, bool skip_parent_check)
    IL2CPP_REGISTER_METHOD(0x01F07710, app::JToken*, CreateFromContent, app::Object* content)
    IL2CPP_REGISTER_METHOD(0x01F04500, void, RemoveAll, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F078C0, void, ReadTokenFrom, app::JContainer* this_ptr, app::JsonReader* reader, app::JsonLoadSettings* options)
    IL2CPP_REGISTER_METHOD(0x01F07AB0, void, ReadContentFrom, app::JContainer* this_ptr, app::JsonReader* r, app::JsonLoadSettings* settings)
    IL2CPP_REGISTER_METHOD(
        0x01F08370,
        app::JProperty*,
        ReadProperty,
        app::JsonReader* r,
        app::JsonLoadSettings* settings,
        app::IJsonLineInfo* line_info,
        app::JContainer* parent
    )
    IL2CPP_REGISTER_METHOD(0x01F08750, app::String*, ITypedList_GetListName, app::JContainer* this_ptr, app::PropertyDescriptor__Array* list_accessors)
    IL2CPP_REGISTER_METHOD(
        0x01F087D0,
        app::PropertyDescriptorCollection*,
        ITypedList_GetItemProperties,
        app::JContainer* this_ptr,
        app::PropertyDescriptor__Array* list_accessors
    )
    IL2CPP_REGISTER_METHOD(0x01F043D0, int32_t, IList_JToken__IndexOf, app::JContainer* this_ptr, app::JToken* item)
    IL2CPP_REGISTER_METHOD(0x01F043F0, void, IList_JToken__Insert, app::JContainer* this_ptr, int32_t index, app::JToken* item)
    IL2CPP_REGISTER_METHOD(0x01F04420, void, IList_JToken__RemoveAt, app::JContainer* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F042A0, app::JToken*, IList_JToken__get_Item, app::JContainer* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F042C0, void, IList_JToken__set_Item, app::JContainer* this_ptr, int32_t index, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F044E0, void, ICollection_JToken__Add, app::JContainer* this_ptr, app::JToken* item)
    IL2CPP_REGISTER_METHOD(0x01F04500, void, ICollection_JToken__Clear, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F04520, bool, ICollection_JToken__Contains, app::JContainer* this_ptr, app::JToken* item)
    IL2CPP_REGISTER_METHOD(0x01F04540, void, ICollection_JToken__CopyTo, app::JContainer* this_ptr, app::JToken__Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_JToken__get_IsReadOnly, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F04560, bool, ICollection_JToken__Remove, app::JContainer* this_ptr, app::JToken* item)
    IL2CPP_REGISTER_METHOD(0x01F08880, app::JToken*, EnsureValue, app::JContainer* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F08980, int32_t, IList_Add, app::JContainer* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F04500, void, IList_Clear, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F089C0, bool, IList_Contains, app::JContainer* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F089F0, int32_t, IList_IndexOf, app::JContainer* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F08A20, void, IList_Insert, app::JContainer* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F08A70, void, IList_Remove, app::JContainer* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F04420, void, IList_RemoveAt, app::JContainer* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F042A0, app::Object*, IList_get_Item, app::JContainer* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F08AA0, void, IList_set_Item, app::JContainer* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F04540, void, ICollection_CopyTo, app::JContainer* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F08AE0, int32_t, get_Count, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F08B80, app::Object*, ICollection_get_SyncRoot, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IBindingList_AddIndex, app::JContainer* this_ptr, app::PropertyDescriptor* property)
    IL2CPP_REGISTER_METHOD(0x01F08CE0, app::Object*, IBindingList_AddNew, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IBindingList_get_AllowEdit, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IBindingList_get_AllowNew, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IBindingList_get_AllowRemove, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F09030,
        void,
        IBindingList_ApplySort,
        app::JContainer* this_ptr,
        app::PropertyDescriptor* property,
        app::ListSortDirection__Enum direction
    )
    IL2CPP_REGISTER_METHOD(0x01F09080, int32_t, IBindingList_Find, app::JContainer* this_ptr, app::PropertyDescriptor* property, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_IsSorted, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IBindingList_RemoveIndex, app::JContainer* this_ptr, app::PropertyDescriptor* property)
    IL2CPP_REGISTER_METHOD(0x01F090D0, void, IBindingList_RemoveSort, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ListSortDirection__Enum, IBindingList_get_SortDirection, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::PropertyDescriptor*, IBindingList_get_SortProperty, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IBindingList_get_SupportsChangeNotification, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_SupportsSearching, app::JContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_SupportsSorting, app::JContainer* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Linq::JContainer
