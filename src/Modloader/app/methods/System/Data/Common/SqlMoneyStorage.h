#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SqlMoneyStorage.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::Common::SqlMoneyStorage {
    IL2CPP_REGISTER_METHOD(0x0285C370, void, ctor, app::SqlMoneyStorage* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x0285C4F0, app::Object*, Aggregate, app::SqlMoneyStorage* this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind)
    IL2CPP_REGISTER_METHOD(0x0285D3A0, int32_t, Compare, app::SqlMoneyStorage* this_ptr, int32_t record_no1, int32_t record_no2)
    IL2CPP_REGISTER_METHOD(0x0285D420, int32_t, CompareValueTo, app::SqlMoneyStorage* this_ptr, int32_t record_no, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0285D520, app::Object*, ConvertValue, app::SqlMoneyStorage* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02854E00, void, Copy, app::SqlMoneyStorage* this_ptr, int32_t record_no1, int32_t record_no2)
    IL2CPP_REGISTER_METHOD(0x0285D5E0, app::Object*, Get, app::SqlMoneyStorage* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x02854F40, bool, IsNull, app::SqlMoneyStorage* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x0285D6B0, void, Set, app::SqlMoneyStorage* this_ptr, int32_t record, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0285D720, void, SetCapacity, app::SqlMoneyStorage* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x0285D820, app::Object*, ConvertXmlToObject, app::SqlMoneyStorage* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x0285DB70, app::String*, ConvertObjectToXml, app::SqlMoneyStorage* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0285DED0, app::Object*, GetEmptyStorage, app::SqlMoneyStorage* this_ptr, int32_t record_count)
    IL2CPP_REGISTER_METHOD(
        0x0285DF50,
        void,
        CopyValue,
        app::SqlMoneyStorage* this_ptr,
        int32_t record,
        app::Object* store,
        app::BitArray* nullbits,
        int32_t store_index
    )
    IL2CPP_REGISTER_METHOD(0x0285E0F0, void, SetStorage, app::SqlMoneyStorage* this_ptr, app::Object* store, app::BitArray* nullbits)
} // namespace app::classes::System::Data::Common::SqlMoneyStorage
