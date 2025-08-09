#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowCollection.h>
#include <Modloader/app/structs/DataRow__Array.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Data::DataRowCollection {
    IL2CPP_REGISTER_METHOD(0x017E0200, void, ctor, app::DataRowCollection* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x017E0400, int32_t, get_Count, app::DataRowCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017E0490, app::DataRow*, get_Item, app::DataRowCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x017E0570, void, Add, app::DataRowCollection* this_ptr, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(0x017E05B0, void, DiffInsertAt, app::DataRowCollection* this_ptr, app::DataRow* row, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x017E08E0, int32_t, IndexOf, app::DataRowCollection* this_ptr, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(0x017E0A80, app::DataRow*, AddWithColumnEvents, app::DataRowCollection* this_ptr, app::Object__Array* values)
    IL2CPP_REGISTER_METHOD(0x017E0BB0, void, ArrayAdd, app::DataRowCollection* this_ptr, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(0x017E0CD0, void, ArrayInsert, app::DataRowCollection* this_ptr, app::DataRow* row, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x017E0DB0, void, ArrayClear, app::DataRowCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017E0E60, void, ArrayRemove, app::DataRowCollection* this_ptr, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(0x017E0F50, void, CopyTo_1, app::DataRowCollection* this_ptr, app::Array* ar, int32_t index)
    IL2CPP_REGISTER_METHOD(0x017E1000, void, CopyTo_2, app::DataRowCollection* this_ptr, app::DataRow__Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x017E10B0, app::IEnumerator*, GetEnumerator, app::DataRowCollection* this_ptr)
} // namespace app::classes::System::Data::DataRowCollection
