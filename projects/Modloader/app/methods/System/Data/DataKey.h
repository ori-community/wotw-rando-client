#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataKey__Boxed.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataKey.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataViewRowState__Enum.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/IndexField__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Data::DataKey {
    IL2CPP_REGISTER_METHOD(0x001E9F50, void, ctor, (app::DataKey__Boxed * this_ptr, app::DataColumn__Array* columns, bool copy_columns))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::DataColumn__Array*, get_ColumnsReference, (app::DataKey__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011D880, bool, get_HasValue, (app::DataKey__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E9F60, app::DataTable*, get_Table, (app::DataKey__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E9FB0, void, CheckState, (app::DataKey__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E9FC0, bool, ColumnsEqual_1, (app::DataKey__Boxed * this_ptr, app::DataKey key))
    IL2CPP_REGISTER_METHOD(0x023A0CC0, bool, ColumnsEqual_2, (app::DataColumn__Array * column1, app::DataColumn__Array* column2))
    IL2CPP_REGISTER_METHOD(0x001E9FD0, bool, ContainsColumn, (app::DataKey__Boxed * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x001EA030, int32_t, GetHashCode, (app::DataKey__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EA040, bool, Equals_1, (app::DataKey__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x001EA050, bool, Equals_2, (app::DataKey__Boxed * this_ptr, app::DataKey value))
    IL2CPP_REGISTER_METHOD(0x001EA060, app::String__Array*, GetColumnNames, (app::DataKey__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EA070, app::IndexField__Array*, GetIndexDesc, (app::DataKey__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EA080, app::Object__Array*, GetKeyValues, (app::DataKey__Boxed * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x001EA090, app::Index*, GetSortIndex_1, (app::DataKey__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EA0A0, app::Index*, GetSortIndex_2, (app::DataKey__Boxed * this_ptr, app::DataViewRowState__Enum record_states))
    IL2CPP_REGISTER_METHOD(0x001EA0B0, bool, RecordsEqual, (app::DataKey__Boxed * this_ptr, int32_t record1, int32_t record2))
    IL2CPP_REGISTER_METHOD(0x001EA0C0, app::DataColumn__Array*, ToArray, (app::DataKey__Boxed * this_ptr))
} // namespace app::classes::System::Data::DataKey
