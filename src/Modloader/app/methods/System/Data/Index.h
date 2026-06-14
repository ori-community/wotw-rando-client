#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_System_Data_DataRow_.h>
#include <Modloader/app/structs/DataColumnCollection.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRow__Array.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataViewListener.h>
#include <Modloader/app/structs/DataViewRowState__Enum.h>
#include <Modloader/app/structs/IFilter.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/IndexField__Array.h>
#include <Modloader/app/structs/ListChangedEventArgs.h>
#include <Modloader/app/structs/ListChangedType__Enum.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_System_Object__1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RBTree_1_K_RBTreeEnumerator_System_Int32_.h>
#include <Modloader/app/structs/Range.h>

namespace app::classes::System::Data::Index {
    IL2CPP_REGISTER_METHOD(
        0x01E39C40,
        void,
        ctor_1,
        app::Index* this_ptr,
        app::DataTable* table,
        app::IndexField__Array* index_fields,
        app::DataViewRowState__Enum record_states,
        app::IFilter* row_filter
    )
    IL2CPP_REGISTER_METHOD(
        0x01E39C70,
        void,
        ctor_2,
        app::Index* this_ptr,
        app::DataTable* table,
        app::Comparison_1_System_Data_DataRow_* comparison,
        app::DataViewRowState__Enum record_states,
        app::IFilter* row_filter
    )
    IL2CPP_REGISTER_METHOD(0x01E39DF0, app::IndexField__Array*, GetAllFields, app::DataColumnCollection* columns)
    IL2CPP_REGISTER_METHOD(
        0x01E39F10,
        void,
        ctor_3,
        app::Index* this_ptr,
        app::DataTable* table,
        app::IndexField__Array* index_fields,
        app::Comparison_1_System_Data_DataRow_* comparison,
        app::DataViewRowState__Enum record_states,
        app::IFilter* row_filter
    )
    IL2CPP_REGISTER_METHOD(
        0x01E3A500,
        bool,
        Equal,
        app::Index* this_ptr,
        app::IndexField__Array* index_desc,
        app::DataViewRowState__Enum record_states,
        app::IFilter* row_filter
    )
    IL2CPP_REGISTER_METHOD(0x013587B0, bool, get_HasRemoteAggregate, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_ObjectID, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB970, app::DataViewRowState__Enum, get_RecordStates, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E3A5D0, app::IFilter*, get_RowFilter, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E3A6A0, int32_t, GetRecord, app::Index* this_ptr, int32_t record_index)
    IL2CPP_REGISTER_METHOD(0x01E3A780, bool, get_HasDuplicates, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_RecordCount, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E3A810, bool, AcceptRecord_1, app::Index* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x01E3A840, bool, AcceptRecord_2, app::Index* this_ptr, int32_t record, app::IFilter* filter)
    IL2CPP_REGISTER_METHOD(0x01E3A9D0, void, ListChangedAdd, app::Index* this_ptr, app::DataViewListener* listener)
    IL2CPP_REGISTER_METHOD(0x01E3AA90, void, ListChangedRemove, app::Index* this_ptr, app::DataViewListener* listener)
    IL2CPP_REGISTER_METHOD(0x0057AAC0, int32_t, get_RefCount, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E3ABD0, void, AddRef, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E3ADC0, int32_t, RemoveRef, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E3AFF0, void, ApplyChangeAction, app::Index* this_ptr, int32_t record, int32_t action, int32_t change_record)
    IL2CPP_REGISTER_METHOD(0x01E3B090, bool, CheckUnique, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E3B0B0, int32_t, CompareRecords, app::Index* this_ptr, int32_t record1, int32_t record2)
    IL2CPP_REGISTER_METHOD(0x01E3B440, int32_t, CompareDataRows, app::Index* this_ptr, int32_t record1, int32_t record2)
    IL2CPP_REGISTER_METHOD(0x01E3B580, int32_t, CompareDuplicateRecords, app::Index* this_ptr, int32_t record1, int32_t record2)
    IL2CPP_REGISTER_METHOD(0x01E3B7C0, int32_t, CompareRecordToKey, app::Index* this_ptr, int32_t record1, app::Object__Array* vals)
    IL2CPP_REGISTER_METHOD(0x01E3B920, void, DeleteRecordFromIndex, app::Index* this_ptr, int32_t record_index)
    IL2CPP_REGISTER_METHOD(0x01E3B930, void, DeleteRecord_1, app::Index* this_ptr, int32_t record_index)
    IL2CPP_REGISTER_METHOD(0x01E3B940, void, DeleteRecord_2, app::Index* this_ptr, int32_t record_index, bool fire_event)
    IL2CPP_REGISTER_METHOD(0x01E3BB10, app::RBTree_1_K_RBTreeEnumerator_System_Int32_, GetEnumerator, app::Index* this_ptr, int32_t start_index)
    IL2CPP_REGISTER_METHOD(0x01E3BBC0, int32_t, GetIndex_1, app::Index* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x01E3BCB0, int32_t, GetIndex_2, app::Index* this_ptr, int32_t record, int32_t change_record)
    IL2CPP_REGISTER_METHOD(0x01E3BEF0, app::Object__Array*, GetUniqueKeyValues_1, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E3C0B0, int32_t, FindNodeByKey, app::Index* this_ptr, app::Object* original_key)
    IL2CPP_REGISTER_METHOD(0x01E3C640, int32_t, FindNodeByKeys, app::Index* this_ptr, app::Object__Array* original_key)
    IL2CPP_REGISTER_METHOD(0x01E3CB80, int32_t, FindNodeByKeyRecord, app::Index* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x01E3CE10, app::Range, GetRangeFromNode, app::Index* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x01E3D150, app::Range, FindRecords_1, app::Index* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x01E3D1A0, app::Range, FindRecords_2, app::Index* this_ptr, app::Object__Array* key)
    IL2CPP_REGISTER_METHOD(0x01E3D1F0, void, FireResetEvent, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01E3D300,
        int32_t,
        GetChangeAction,
        app::Index* this_ptr,
        app::DataViewRowState__Enum old_state,
        app::DataViewRowState__Enum new_state
    )
    IL2CPP_REGISTER_METHOD(0x01E3D320, int32_t, GetReplaceAction, app::DataViewRowState__Enum old_state)
    IL2CPP_REGISTER_METHOD(0x01E3D340, app::DataRow*, GetRow, app::Index* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x01E3D3B0, app::DataRow__Array*, GetRows_1, app::Index* this_ptr, app::Object__Array* values)
    IL2CPP_REGISTER_METHOD(0x01E3D400, app::DataRow__Array*, GetRows_2, app::Index* this_ptr, app::Range range)
    IL2CPP_REGISTER_METHOD(0x01E3D5E0, void, InitRecords, app::Index* this_ptr, app::IFilter* filter)
    IL2CPP_REGISTER_METHOD(0x01E3DA40, int32_t, InsertRecordToIndex, app::Index* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x01E3DAA0, int32_t, InsertRecord, app::Index* this_ptr, int32_t record, bool fire_event)
    IL2CPP_REGISTER_METHOD(0x01E3DEE0, bool, IsKeyInIndex_1, app::Index* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x01E3DF00, bool, IsKeyInIndex_2, app::Index* this_ptr, app::Object__Array* key)
    IL2CPP_REGISTER_METHOD(0x01E3DF20, bool, IsKeyRecordInIndex, app::Index* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x01E3DF40, bool, get_DoListChanged, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01E3E020,
        void,
        OnListChanged_1,
        app::Index* this_ptr,
        app::ListChangedType__Enum changed_type,
        int32_t new_index,
        int32_t old_index
    )
    IL2CPP_REGISTER_METHOD(0x01E3E1C0, void, OnListChanged_2, app::Index* this_ptr, app::ListChangedType__Enum changed_type, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01E3E350, void, OnListChanged_3, app::Index* this_ptr, app::ListChangedEventArgs* e)
    IL2CPP_REGISTER_METHOD(
        0x01E3E5B0,
        void,
        MaintainDataView,
        app::Index* this_ptr,
        app::ListChangedType__Enum changed_type,
        int32_t record,
        bool track_add_remove
    )
    IL2CPP_REGISTER_METHOD(0x01E3E880, void, Reset, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E3E980, void, RecordChanged_1, app::Index* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x01E3EA80, void, RecordChanged_2, app::Index* this_ptr, int32_t old_index, int32_t new_index)
    IL2CPP_REGISTER_METHOD(
        0x01E3EBE0,
        void,
        RecordStateChanged_1,
        app::Index* this_ptr,
        int32_t record,
        app::DataViewRowState__Enum old_state,
        app::DataViewRowState__Enum new_state
    )
    IL2CPP_REGISTER_METHOD(
        0x01E3ED30,
        void,
        RecordStateChanged_2,
        app::Index* this_ptr,
        int32_t old_record,
        app::DataViewRowState__Enum old_old_state,
        app::DataViewRowState__Enum old_new_state,
        int32_t new_record,
        app::DataViewRowState__Enum new_old_state,
        app::DataViewRowState__Enum new_new_state
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::DataTable*, get_Table, app::Index* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E3F1E0, void, GetUniqueKeyValues_2, app::Index* this_ptr, app::List_1_System_Object__1* list, int32_t cur_node_id)
    IL2CPP_REGISTER_METHOD(0x0209D5A0, int32_t, IndexOfReference, app::List_1_System_Object_* list, app::Object* item)
} // namespace app::classes::System::Data::Index
