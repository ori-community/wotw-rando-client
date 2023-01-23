#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BindingList_1_System_Object_.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/ListSortDirection__Enum.h>
#include <Modloader/app/structs/IList_1_System_Object_.h>
#include <Modloader/app/structs/AddingNewEventHandler.h>
#include <Modloader/app/structs/AddingNewEventArgs.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ListChangedEventHandler.h>
#include <Modloader/app/structs/ListChangedEventArgs.h>
#include <Modloader/app/structs/ListChangedType__Enum.h>
#include <Modloader/app/structs/PropertyChangedEventArgs.h>

namespace app::classes::System::ComponentModel::BindingList_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02FAC160, bool, get_ItemTypeHasDefaultConstructor, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_RaiseListChangedEvents, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAC8A0, void, set_RaiseListChangedEvents, (app::BindingList_1_System_Object_ * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02FAD260, bool, get_AddingNewHandled, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD440, bool, get_AllowNew, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD470, void, set_AllowNew, (app::BindingList_1_System_Object_ * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02986CA0, bool, IBindingList_get_AllowNew, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060CCA0, bool, get_AllowEdit, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD4F0, void, set_AllowEdit, (app::BindingList_1_System_Object_ * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02FAD520, bool, IBindingList_get_AllowEdit, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B11420, bool, get_AllowRemove, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD550, void, set_AllowRemove, (app::BindingList_1_System_Object_ * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02ADBFA0, bool, IBindingList_get_AllowRemove, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD580, bool, IBindingList_get_SupportsChangeNotification, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsChangeNotificationCore, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD5B0, bool, IBindingList_get_SupportsSearching, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsSearchingCore, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD5E0, bool, IBindingList_get_SupportsSorting, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsSortingCore, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD610, bool, IBindingList_get_IsSorted, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSortedCore, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD640, app::PropertyDescriptor*, IBindingList_get_SortProperty, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::PropertyDescriptor*, get_SortPropertyCore, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD670, app::ListSortDirection__Enum, IBindingList_get_SortDirection, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ListSortDirection__Enum, get_SortDirectionCore, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0185DFF0, bool, IRaiseItemChangedEvents_get_RaisesItemChangedEvents, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FABDA0, void, ctor_1, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FABE10, void, ctor_2, (app::BindingList_1_System_Object_ * this_ptr, app::IList_1_System_Object_* list))
    IL2CPP_REGISTER_METHOD(0x02FABE80, void, Initialize, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAC2A0, void, add_AddingNew, (app::BindingList_1_System_Object_ * this_ptr, app::AddingNewEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x02FAC3E0, void, remove_AddingNew, (app::BindingList_1_System_Object_ * this_ptr, app::AddingNewEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x0194A370, void, OnAddingNew, (app::BindingList_1_System_Object_ * this_ptr, app::AddingNewEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x02FAC520, app::Object*, FireAddingNew, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAC700, void, add_ListChanged, (app::BindingList_1_System_Object_ * this_ptr, app::ListChangedEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x02FAC7D0, void, remove_ListChanged, (app::BindingList_1_System_Object_ * this_ptr, app::ListChangedEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x0194A390, void, OnListChanged, (app::BindingList_1_System_Object_ * this_ptr, app::ListChangedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x02FAC8B0, void, ResetBindings, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAC8E0, void, ResetItem, (app::BindingList_1_System_Object_ * this_ptr, int32_t position))
    IL2CPP_REGISTER_METHOD(0x02FAC910, void, FireListChanged, (app::BindingList_1_System_Object_ * this_ptr, app::ListChangedType__Enum type, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02FACAA0, void, ClearItems, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FACD50, void, InsertItem, (app::BindingList_1_System_Object_ * this_ptr, int32_t index, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02FACE10, void, RemoveItem, (app::BindingList_1_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473EC90, BindingList_1_System_Object__RemoveItem__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FACF70, void, SetItem, (app::BindingList_1_System_Object_ * this_ptr, int32_t index, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02FAD040, void, CancelNew, (app::BindingList_1_System_Object_ * this_ptr, int32_t item_index))
    IL2CPP_REGISTER_METHOD(0x02FAD080, void, EndNew, (app::BindingList_1_System_Object_ * this_ptr, int32_t item_index))
    IL2CPP_REGISTER_METHOD(0x02FAD0A0, app::Object*, AddNew, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD1A0, app::Object*, IBindingList_AddNew, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD2A0, app::Object*, AddNewCore, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD6A0, void, IBindingList_ApplySort, (app::BindingList_1_System_Object_ * this_ptr, app::PropertyDescriptor* prop, app::ListSortDirection__Enum direction))
    IL2CPP_REGISTER_METHOD(0x02FAD6D0, void, ApplySortCore, (app::BindingList_1_System_Object_ * this_ptr, app::PropertyDescriptor* prop, app::ListSortDirection__Enum direction))
    IL2CPP_REGISTER_METHODINFO(0x04773988, BindingList_1_System_Object__ApplySortCore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FAD720, void, IBindingList_RemoveSort, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAD750, void, RemoveSortCore, (app::BindingList_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748068, BindingList_1_System_Object__RemoveSortCore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FAD7A0, int32_t, IBindingList_Find, (app::BindingList_1_System_Object_ * this_ptr, app::PropertyDescriptor* prop, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02FAD7D0, int32_t, FindCore, (app::BindingList_1_System_Object_ * this_ptr, app::PropertyDescriptor* prop, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x04784298, BindingList_1_System_Object__FindCore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IBindingList_AddIndex, (app::BindingList_1_System_Object_ * this_ptr, app::PropertyDescriptor* prop))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IBindingList_RemoveIndex, (app::BindingList_1_System_Object_ * this_ptr, app::PropertyDescriptor* prop))
    IL2CPP_REGISTER_METHOD(0x02FAD820, void, HookPropertyChanged, (app::BindingList_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02FAD9D0, void, UnhookPropertyChanged, (app::BindingList_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02FADA80, void, Child_PropertyChanged, (app::BindingList_1_System_Object_ * this_ptr, app::Object* sender, app::PropertyChangedEventArgs* e))
} // namespace app::classes::System::ComponentModel::BindingList_1_System_Object_
