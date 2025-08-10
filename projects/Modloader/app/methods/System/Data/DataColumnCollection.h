#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/CollectionChangeEventArgs.h>
#include <Modloader/app/structs/CollectionChangeEventHandler.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataColumnCollection.h>
#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::DataColumnCollection {
    IL2CPP_REGISTER_METHOD(0x0239A1B0, void, ctor, app::DataColumnCollection* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ArrayList*, get_List, app::DataColumnCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::DataColumn__Array*, get_ColumnsImplementingIChangeTracking, app::DataColumnCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006410F0, int32_t, get_ColumnsImplementingIChangeTrackingCount, app::DataColumnCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FD3F0, int32_t, get_ColumnsImplementingIRevertibleChangeTrackingCount, app::DataColumnCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0239A420, app::DataColumn*, get_Item_1, app::DataColumnCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0239A550, app::DataColumn*, get_Item_2, app::DataColumnCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0239A6F0, app::DataColumn*, get_Item_3, app::DataColumnCollection* this_ptr, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x0239A830, void, Add, app::DataColumnCollection* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x0239A840, void, AddAt, app::DataColumnCollection* this_ptr, int32_t index, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x0239AD40, void, add_CollectionChanged, app::DataColumnCollection* this_ptr, app::CollectionChangeEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0239AE30, void, remove_CollectionChanged, app::DataColumnCollection* this_ptr, app::CollectionChangeEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0239AF20, void, add_ColumnPropertyChanged, app::DataColumnCollection* this_ptr, app::CollectionChangeEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0239B010, void, remove_ColumnPropertyChanged, app::DataColumnCollection* this_ptr, app::CollectionChangeEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0239B100, void, ArrayAdd_1, app::DataColumnCollection* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x0239B1A0, void, ArrayAdd_2, app::DataColumnCollection* this_ptr, int32_t index, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x0239B210, void, ArrayRemove, app::DataColumnCollection* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x0239B520, app::String*, AssignName, app::DataColumnCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0239B610, void, BaseAdd, app::DataColumnCollection* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(
        0x0239BA20,
        void,
        BaseGroupSwitch,
        app::DataColumnCollection* this_ptr,
        app::DataColumn__Array* old_array,
        int32_t old_length,
        app::DataColumn__Array* new_array,
        int32_t new_length
    )
    IL2CPP_REGISTER_METHOD(0x0239BCE0, void, BaseRemove, app::DataColumnCollection* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x0239BE90, bool, CanRemove, app::DataColumnCollection* this_ptr, app::DataColumn* column, bool f_throw_exception)
    IL2CPP_REGISTER_METHOD(0x0239C8C0, void, CheckIChangeTracking, app::DataColumnCollection* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x0239C910, void, Clear, app::DataColumnCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0239CE80, bool, Contains_1, app::DataColumnCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0239CFA0, bool, Contains_2, app::DataColumnCollection* this_ptr, app::String* name, bool case_sensitive)
    IL2CPP_REGISTER_METHOD(0x0239D0D0, int32_t, IndexOf, app::DataColumnCollection* this_ptr, app::String* column_name)
    IL2CPP_REGISTER_METHOD(0x0239D260, int32_t, IndexOfCaseInsensitive, app::DataColumnCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0239D460, void, FinishInitCollection, app::DataColumnCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0239D540, app::String*, MakeName, app::DataColumnCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0239D610, void, OnCollectionChanged, app::DataColumnCollection* this_ptr, app::CollectionChangeEventArgs* ccevent)
    IL2CPP_REGISTER_METHOD(0x0239D710, void, OnCollectionChanging, app::DataColumnCollection* this_ptr, app::CollectionChangeEventArgs* ccevent)
    IL2CPP_REGISTER_METHOD(0x0239D730, void, OnColumnPropertyChanged, app::DataColumnCollection* this_ptr, app::CollectionChangeEventArgs* ccevent)
    IL2CPP_REGISTER_METHOD(0x0239D780, void, RegisterColumnName, app::DataColumnCollection* this_ptr, app::String* name, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x0239D970, bool, CanRegisterName, app::DataColumnCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0239DA30, void, Remove, app::DataColumnCollection* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x0239DCD0, void, UnregisterName, app::DataColumnCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0239DDE0, void, AddColumnsImplementingIChangeTrackingList, app::DataColumnCollection* this_ptr, app::DataColumn* data_column)
    IL2CPP_REGISTER_METHOD(0x0239DF00, void, RemoveColumnsImplementingIChangeTrackingList, app::DataColumnCollection* this_ptr, app::DataColumn* data_column)
} // namespace app::classes::System::Data::DataColumnCollection
