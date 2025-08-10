#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/CollectionChangeEventArgs.h>
#include <Modloader/app/structs/CollectionChangeEventHandler.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataTableCollection.h>
#include <Modloader/app/structs/DataTable__Array.h>
#include <Modloader/app/structs/List_1_System_Data_DataTable_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::DataTableCollection {
    IL2CPP_REGISTER_METHOD(0x01F3AE00, void, ctor, app::DataTableCollection* this_ptr, app::DataSet* data_set)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ArrayList*, get_List, app::DataTableCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_ObjectID, app::DataTableCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3AFF0, app::DataTable*, get_Item_1, app::DataTableCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F3B120, app::DataTable*, get_Item_2, app::DataTableCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01F3B230, app::DataTable*, get_Item_3, app::DataTableCollection* this_ptr, app::String* name, app::String* table_namespace)
    IL2CPP_REGISTER_METHOD(0x01F3B350, app::DataTable*, GetTable, app::DataTableCollection* this_ptr, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x01F3B520, app::DataTable*, GetTableSmart, app::DataTableCollection* this_ptr, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x01F3B710, void, Add, app::DataTableCollection* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x01F3BB40, void, add_CollectionChanged, app::DataTableCollection* this_ptr, app::CollectionChangeEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x01F3BC50, void, remove_CollectionChanged, app::DataTableCollection* this_ptr, app::CollectionChangeEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x01F3BD60, void, ArrayAdd, app::DataTableCollection* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x01F3BD90, app::String*, AssignName, app::DataTableCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3BE00, void, BaseAdd, app::DataTableCollection* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(
        0x01F3C020,
        void,
        BaseGroupSwitch,
        app::DataTableCollection* this_ptr,
        app::DataTable__Array* old_array,
        int32_t old_length,
        app::DataTable__Array* new_array,
        int32_t new_length
    )
    IL2CPP_REGISTER_METHOD(0x01F3C220, void, BaseRemove, app::DataTableCollection* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x01F3C2F0, bool, CanRemove, app::DataTableCollection* this_ptr, app::DataTable* table, bool f_throw_exception)
    IL2CPP_REGISTER_METHOD(0x01F3C9A0, void, Clear, app::DataTableCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3CCE0, bool, Contains_1, app::DataTableCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x01F3CD00,
        bool,
        Contains_2,
        app::DataTableCollection* this_ptr,
        app::String* name,
        app::String* table_namespace,
        bool check_property,
        bool case_sensitive
    )
    IL2CPP_REGISTER_METHOD(0x01F3CEE0, bool, Contains_3, app::DataTableCollection* this_ptr, app::String* name, bool case_sensitive)
    IL2CPP_REGISTER_METHOD(0x01F3D040, int32_t, IndexOf_1, app::DataTableCollection* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x01F3D1A0, int32_t, IndexOf_2, app::DataTableCollection* this_ptr, app::String* table_name)
    IL2CPP_REGISTER_METHOD(
        0x01F3D1C0,
        int32_t,
        IndexOf_3,
        app::DataTableCollection* this_ptr,
        app::String* table_name,
        app::String* table_namespace,
        bool chekfor_null
    )
    IL2CPP_REGISTER_METHOD(0x01F3D2C0, void, ReplaceFromInference, app::DataTableCollection* this_ptr, app::List_1_System_Data_DataTable_* table_list)
    IL2CPP_REGISTER_METHOD(0x01F3D320, int32_t, InternalIndexOf_1, app::DataTableCollection* this_ptr, app::String* table_name)
    IL2CPP_REGISTER_METHOD(0x01F3D540, int32_t, InternalIndexOf_2, app::DataTableCollection* this_ptr, app::String* table_name, app::String* table_namespace)
    IL2CPP_REGISTER_METHOD(0x01F3D750, void, FinishInitCollection, app::DataTableCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3D7D0, app::String*, MakeName, app::DataTableCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F3D8A0, void, OnCollectionChanged, app::DataTableCollection* this_ptr, app::CollectionChangeEventArgs* ccevent)
    IL2CPP_REGISTER_METHOD(0x01F3D990, void, OnCollectionChanging, app::DataTableCollection* this_ptr, app::CollectionChangeEventArgs* ccevent)
    IL2CPP_REGISTER_METHOD(0x01F3DA80, void, RegisterName, app::DataTableCollection* this_ptr, app::String* name, app::String* tb_namespace)
    IL2CPP_REGISTER_METHOD(0x01F3DE80, void, Remove, app::DataTableCollection* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x01F3E210, void, UnregisterName, app::DataTableCollection* this_ptr, app::String* name)
} // namespace app::classes::System::Data::DataTableCollection
