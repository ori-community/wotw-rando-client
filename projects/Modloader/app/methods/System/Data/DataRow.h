#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataKey.h>
#include <Modloader/app/structs/DataRelation.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowBuilder.h>
#include <Modloader/app/structs/DataRowState__Enum.h>
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#include <Modloader/app/structs/DataRow__Array.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataViewRowState__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::DataRow {
    IL2CPP_REGISTER_METHOD(0x023A95B0, void, ctor, app::DataRow* this_ptr, app::DataRowBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x023A9690, app::DataColumn*, get_LastChangedColumn, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A96A0, void, set_LastChangedColumn, app::DataRow* this_ptr, app::DataColumn* value)
    IL2CPP_REGISTER_METHOD(0x023A96B0, bool, get_HasPropertyChanged, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_RBTreeNodeId, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A96C0, void, set_RBTreeNodeId, app::DataRow* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x023A97A0, app::String*, get_RowError, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A9840, void, set_RowError, app::DataRow* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x023A9B50, void, RowErrorChanged, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, int64_t, get_rowID, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A9BB0, void, set_rowID, app::DataRow* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x023A9BC0, app::DataRowState__Enum, get_RowState, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::DataTable*, get_Table, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A9D90, void, CheckForLoops, app::DataRow* this_ptr, app::DataRelation* rel)
    IL2CPP_REGISTER_METHOD(0x023A9F20, int32_t, GetNestedParentCount, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AA000, void, set_Item_1, app::DataRow* this_ptr, app::String* column_name, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x023AA040, app::Object*, get_Item_1, app::DataRow* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x023AA0A0, void, set_Item_2, app::DataRow* this_ptr, app::DataColumn* column, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x023AA580, app::Object*, get_Item_2, app::DataRow* this_ptr, app::DataColumn* column, app::DataRowVersion__Enum version)
    IL2CPP_REGISTER_METHOD(0x023AA5F0, void, set_ItemArray, app::DataRow* this_ptr, app::Object__Array* value)
    IL2CPP_REGISTER_METHOD(0x023AABA0, void, AcceptChanges, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AAEE0, void, BeginEdit, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AAEF0, bool, BeginEditInternal, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AB020, void, CancelEdit, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AB0F0, void, CheckColumn, app::DataRow* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x023AB200, void, CheckInTable, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AB290, void, Delete, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AB350, void, EndEdit, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AB490, void, SetColumnError_1, app::DataRow* this_ptr, int32_t column_index, app::String* error)
    IL2CPP_REGISTER_METHOD(0x023AB560, void, SetColumnError_2, app::DataRow* this_ptr, app::DataColumn* column, app::String* error)
    IL2CPP_REGISTER_METHOD(0x023AB9C0, app::String*, GetColumnError_1, app::DataRow* this_ptr, app::String* column_name)
    IL2CPP_REGISTER_METHOD(0x023AB9F0, app::String*, GetColumnError_2, app::DataRow* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x023ABC30, void, ClearErrors, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023ABD70, void, ClearError, app::DataRow* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x023ABDE0, bool, get_HasErrors, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023ABE20, app::DataColumn__Array*, GetColumnsInError, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023ABFD0, app::DataRow__Array*, GetChildRows_1, app::DataRow* this_ptr, app::DataRelation* relation)
    IL2CPP_REGISTER_METHOD(
        0x023ABFE0,
        app::DataRow__Array*,
        GetChildRows_2,
        app::DataRow* this_ptr,
        app::DataRelation* relation,
        app::DataRowVersion__Enum version
    )
    IL2CPP_REGISTER_METHOD(0x023AC1D0, app::DataColumn*, GetDataColumn, app::DataRow* this_ptr, app::String* column_name)
    IL2CPP_REGISTER_METHOD(0x023AC2B0, app::DataRow*, GetParentRow_1, app::DataRow* this_ptr, app::DataRelation* relation)
    IL2CPP_REGISTER_METHOD(0x023AC2C0, app::DataRow*, GetParentRow_2, app::DataRow* this_ptr, app::DataRelation* relation, app::DataRowVersion__Enum version)
    IL2CPP_REGISTER_METHOD(0x023AC4A0, app::DataRow*, GetNestedParentRow, app::DataRow* this_ptr, app::DataRowVersion__Enum version)
    IL2CPP_REGISTER_METHOD(0x023AC580, app::DataRow__Array*, GetParentRows_1, app::DataRow* this_ptr, app::DataRelation* relation)
    IL2CPP_REGISTER_METHOD(
        0x023AC590,
        app::DataRow__Array*,
        GetParentRows_2,
        app::DataRow* this_ptr,
        app::DataRelation* relation,
        app::DataRowVersion__Enum version
    )
    IL2CPP_REGISTER_METHOD(0x023AC850, app::Object__Array*, GetColumnValues_1, app::DataRow* this_ptr, app::DataColumn__Array* columns)
    IL2CPP_REGISTER_METHOD(
        0x023AC8A0,
        app::Object__Array*,
        GetColumnValues_2,
        app::DataRow* this_ptr,
        app::DataColumn__Array* columns,
        app::DataRowVersion__Enum version
    )
    IL2CPP_REGISTER_METHOD(0x023AC900, app::Object__Array*, GetKeyValues_1, app::DataRow* this_ptr, app::DataKey key)
    IL2CPP_REGISTER_METHOD(0x023AC930, app::Object__Array*, GetKeyValues_2, app::DataRow* this_ptr, app::DataKey key, app::DataRowVersion__Enum version)
    IL2CPP_REGISTER_METHOD(0x023AC960, int32_t, GetCurrentRecordNo, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AC9F0, int32_t, GetDefaultRecord, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023ACAA0, int32_t, GetOriginalRecordNo, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023ACB30, int32_t, GetProposedRecordNo, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023ACBC0, int32_t, GetRecordFromVersion, app::DataRow* this_ptr, app::DataRowVersion__Enum version)
    IL2CPP_REGISTER_METHOD(0x023ACD40, app::DataRowVersion__Enum, GetDefaultRowVersion, app::DataRow* this_ptr, app::DataViewRowState__Enum view_state)
    IL2CPP_REGISTER_METHOD(0x023ACD70, app::DataViewRowState__Enum, GetRecordState, app::DataRow* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x023ACDC0, bool, HasKeyChanged_1, app::DataRow* this_ptr, app::DataKey key)
    IL2CPP_REGISTER_METHOD(
        0x023ACDF0,
        bool,
        HasKeyChanged_2,
        app::DataRow* this_ptr,
        app::DataKey key,
        app::DataRowVersion__Enum version1,
        app::DataRowVersion__Enum version2
    )
    IL2CPP_REGISTER_METHOD(0x023ACE80, bool, HasVersion, app::DataRow* this_ptr, app::DataRowVersion__Enum version)
    IL2CPP_REGISTER_METHOD(0x023ACF80, bool, HaveValuesChanged_1, app::DataRow* this_ptr, app::DataColumn__Array* columns)
    IL2CPP_REGISTER_METHOD(
        0x023AD080,
        bool,
        HaveValuesChanged_2,
        app::DataRow* this_ptr,
        app::DataColumn__Array* columns,
        app::DataRowVersion__Enum version1,
        app::DataRowVersion__Enum version2
    )
    IL2CPP_REGISTER_METHOD(0x023AD180, void, RejectChanges, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AD630, void, ResetLastChangedColumn, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AD640, void, SetKeyValues, app::DataRow* this_ptr, app::DataKey key, app::Object__Array* key_values)
    IL2CPP_REGISTER_METHOD(0x023AD7E0, void, SetNestedParentRow, app::DataRow* this_ptr, app::DataRow* parent_row, bool set_non_nested)
    IL2CPP_REGISTER_METHOD(0x023ADB90, void, SetParentRowToDBNull_1, app::DataRow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023ADDE0, void, SetParentRowToDBNull_2, app::DataRow* this_ptr, app::DataRelation* relation)
    IL2CPP_REGISTER_METHOD(
        0x023AE000,
        int32_t,
        CopyValuesIntoStore,
        app::DataRow* this_ptr,
        app::ArrayList* store_list,
        app::ArrayList* nullbit_list,
        int32_t store_index
    )
} // namespace app::classes::System::Data::DataRow
