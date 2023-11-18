#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataView.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/CollectionChangeEventArgs.h>
#include <Modloader/app/structs/Comparison_1_System_Data_DataRow_.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowView.h>
#include <Modloader/app/structs/DataRowView__Array.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataViewManager.h>
#include <Modloader/app/structs/DataViewRowState__Enum.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IFilter.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/ListChangedEventArgs.h>
#include <Modloader/app/structs/ListChangedEventHandler.h>
#include <Modloader/app/structs/ListChangedType__Enum.h>
#include <Modloader/app/structs/ListSortDescriptionCollection.h>
#include <Modloader/app/structs/ListSortDirection__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/PropertyDescriptor__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::DataView {
    IL2CPP_REGISTER_METHOD(0x01F3F230, void, ctor_1, (app::DataView * this_ptr, app::DataTable* table, bool locked))
    IL2CPP_REGISTER_METHOD(0x01F3F840, void, ctor_2, (app::DataView * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_AllowDelete, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3F900, bool, get_AllowEdit, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3F910, bool, get_AllowNew, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3F920, int32_t, get_Count, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3F9B0, int32_t, get_CountFromIndex, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::DataViewManager*, get_DataViewManager, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01591680, bool, get_IsInitialized, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3F9E0, bool, get_IsOpen, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3F9F0, app::String*, get_RowFilter, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3FAA0, void, set_RowFilter, (app::DataView * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FD750, app::DataViewRowState__Enum, get_RowStateFilter, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3FD40, void, set_RowStateFilter, (app::DataView * this_ptr, app::DataViewRowState__Enum value))
    IL2CPP_REGISTER_METHOD(0x01F3FEB0, app::String*, get_Sort, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3FF10, void, set_Sort, (app::DataView * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Comparison_1_System_Data_DataRow_*, get_SortComparison, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, ICollection_get_SyncRoot, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::DataTable*, get_Table, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F40160, void, set_Table, (app::DataView * this_ptr, app::DataTable* value))
    IL2CPP_REGISTER_METHOD(0x01F40560, app::Object*, IList_get_Item, (app::DataView * this_ptr, int32_t record_index))
    IL2CPP_REGISTER_METHOD(0x01F40590, void, IList_set_Item, (app::DataView * this_ptr, int32_t record_index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01F40560, app::DataRowView*, get_Item, (app::DataView * this_ptr, int32_t record_index))
    IL2CPP_REGISTER_METHOD(0x01F405D0, app::DataRowView*, AddNew, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F40A70, void, BeginInit, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F40A80, void, EndInit, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F40E20, void, CheckOpen, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F40EB0, void, CheckSort, (app::DataView * this_ptr, app::String* sort))
    IL2CPP_REGISTER_METHOD(0x01F40F70, void, Close, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F40FB0, void, CopyTo_1, (app::DataView * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F411E0, void, CopyTo_2, (app::DataView * this_ptr, app::DataRowView__Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F41480, void, Delete_1, (app::DataView * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F414B0, void, Delete_2, (app::DataView * this_ptr, app::DataRow* row))
    IL2CPP_REGISTER_METHOD(0x01F416A0, void, Dispose, (app::DataView * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01F41700, void, FinishAddNew, (app::DataView * this_ptr, bool success))
    IL2CPP_REGISTER_METHOD(0x01F419C0, app::IEnumerator*, GetEnumerator, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F41A80, int32_t, IList_Add, (app::DataView * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01F41B40, void, IList_Clear, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F41B80, bool, IList_Contains, (app::DataView * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01F41C60, int32_t, IList_IndexOf, (app::DataView * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01F41D30, int32_t, IndexOf, (app::DataView * this_ptr, app::DataRowView* rowview))
    IL2CPP_REGISTER_METHOD(0x01F41EB0, int32_t, IndexOfDataRowView, (app::DataView * this_ptr, app::DataRowView* rowview))
    IL2CPP_REGISTER_METHOD(0x01F41F40, void, IList_Insert, (app::DataView * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01F41F80, void, IList_Remove, (app::DataView * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01F41480, void, IList_RemoveAt, (app::DataView * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F42080, app::Index*, GetFindIndex, (app::DataView * this_ptr, app::String* column, bool keep_index))
    IL2CPP_REGISTER_METHOD(0x01F3F910, bool, IBindingList_get_AllowNew, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F42390, app::Object*, IBindingList_AddNew, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3F900, bool, IBindingList_get_AllowEdit, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, IBindingList_get_AllowRemove, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IBindingList_get_SupportsChangeNotification, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IBindingList_get_SupportsSearching, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IBindingList_get_SupportsSorting, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F423B0, bool, IBindingList_get_IsSorted, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F42410, app::PropertyDescriptor*, IBindingList_get_SortProperty, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F42420, app::PropertyDescriptor*, GetSortProperty, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F425E0, app::ListSortDirection__Enum, IBindingList_get_SortDirection, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F42640, void, add_ListChanged, (app::DataView * this_ptr, app::ListChangedEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x01F42750, void, remove_ListChanged, (app::DataView * this_ptr, app::ListChangedEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x01F42860, void, add_Initialized, (app::DataView * this_ptr, app::EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x01F42950, void, remove_Initialized, (app::DataView * this_ptr, app::EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x01F42A40, void, IBindingList_AddIndex, (app::DataView * this_ptr, app::PropertyDescriptor* property))
    IL2CPP_REGISTER_METHOD(0x01F42A80, void, IBindingList_ApplySort, (app::DataView * this_ptr, app::PropertyDescriptor* property, app::ListSortDirection__Enum direction))
    IL2CPP_REGISTER_METHOD(0x01F42AB0, int32_t, IBindingList_Find, (app::DataView * this_ptr, app::PropertyDescriptor* property, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x01F42E20, void, IBindingList_RemoveIndex, (app::DataView * this_ptr, app::PropertyDescriptor* property))
    IL2CPP_REGISTER_METHOD(0x01F42E60, void, IBindingList_RemoveSort, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F42F40, void, IBindingListView_ApplySort, (app::DataView * this_ptr, app::ListSortDescriptionCollection* sorts))
    IL2CPP_REGISTER_METHOD(0x01F43340, app::String*, CreateSortString, (app::DataView * this_ptr, app::PropertyDescriptor* property, app::ListSortDirection__Enum direction))
    IL2CPP_REGISTER_METHOD(0x01F43520, void, IBindingListView_RemoveFilter, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F43610, app::String*, IBindingListView_get_Filter, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F43630, void, IBindingListView_set_Filter, (app::DataView * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01F43650, app::ListSortDescriptionCollection*, IBindingListView_get_SortDescriptions, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F43660, app::ListSortDescriptionCollection*, GetSortDescriptions, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IBindingListView_get_SupportsAdvancedSorting, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IBindingListView_get_SupportsFiltering, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F43C70, app::String*, ITypedList_GetListName, (app::DataView * this_ptr, app::PropertyDescriptor__Array* list_accessors))
    IL2CPP_REGISTER_METHOD(0x01F43D60, app::PropertyDescriptorCollection*, ITypedList_GetItemProperties, (app::DataView * this_ptr, app::PropertyDescriptor__Array* list_accessors))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IFilter*, GetFilter, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F43F80, int32_t, GetRecord, (app::DataView * this_ptr, int32_t record_index))
    IL2CPP_REGISTER_METHOD(0x01F44070, app::DataRow*, GetRow, (app::DataView * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F44250, app::DataRowView*, GetRowView_1, (app::DataView * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x01F442B0, app::DataRowView*, GetRowView_2, (app::DataView * this_ptr, app::DataRow* dr))
    IL2CPP_REGISTER_METHOD(0x01F44350, void, IndexListChanged, (app::DataView * this_ptr, app::Object* sender, app::ListChangedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01F443E0, void, IndexListChangedInternal, (app::DataView * this_ptr, app::ListChangedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01F444E0, void, MaintainDataView, (app::DataView * this_ptr, app::ListChangedType__Enum changed_type, app::DataRow* row, bool track_add_remove))
    IL2CPP_REGISTER_METHOD(0x01F44990, void, OnListChanged, (app::DataView * this_ptr, app::ListChangedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01F44F70, void, OnInitialized, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F45040, void, Reset, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F45070, void, ResetRowViewCache, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F45650, void, SetDataViewManager, (app::DataView * this_ptr, app::DataViewManager* data_view_manager))
    IL2CPP_REGISTER_METHOD(0x01F45930, void, SetIndex, (app::DataView * this_ptr, app::String* new_sort, app::DataViewRowState__Enum new_row_states, app::IFilter* new_row_filter))
    IL2CPP_REGISTER_METHOD(0x01F45950, void, SetIndex2, (app::DataView * this_ptr, app::String* new_sort, app::DataViewRowState__Enum new_row_states, app::IFilter* new_row_filter, bool fire_event))
    IL2CPP_REGISTER_METHOD(0x01F45CD0, void, UpdateIndex_1, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F45CF0, void, UpdateIndex_2, (app::DataView * this_ptr, bool force))
    IL2CPP_REGISTER_METHOD(0x01F45D00, void, UpdateIndex_3, (app::DataView * this_ptr, bool force, bool fire_event))
    IL2CPP_REGISTER_METHOD(0x01F46280, void, ChildRelationCollectionChanged, (app::DataView * this_ptr, app::Object* sender, app::CollectionChangeEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01F46830, void, ParentRelationCollectionChanged, (app::DataView * this_ptr, app::Object* sender, app::CollectionChangeEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01F46DE0, void, ColumnCollectionChanged, (app::DataView * this_ptr, app::Object* sender, app::CollectionChangeEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01F473A0, void, ColumnCollectionChangedInternal, (app::DataView * this_ptr, app::Object* sender, app::CollectionChangeEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x008519C0, int32_t, get_ObjectID, (app::DataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F473C0, void, cctor, ())
} // namespace app::classes::System::Data::DataView
