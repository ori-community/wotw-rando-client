#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SqlDateTimeStorage.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::Common::SqlDateTimeStorage {
    IL2CPP_REGISTER_METHOD(0x028507E0, void, ctor, (app::SqlDateTimeStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02850980, app::Object*, Aggregate, (app::SqlDateTimeStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHOD(0x02850F20, int32_t, Compare, (app::SqlDateTimeStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02850FA0, int32_t, CompareValueTo, (app::SqlDateTimeStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x028510A0, app::Object*, ConvertValue, (app::SqlDateTimeStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02851170, void, Copy, (app::SqlDateTimeStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x028511F0, app::Object*, Get, (app::SqlDateTimeStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x028512C0, bool, IsNull, (app::SqlDateTimeStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02851300, void, Set, (app::SqlDateTimeStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02851370, void, SetCapacity, (app::SqlDateTimeStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02851470, app::Object*, ConvertXmlToObject, (app::SqlDateTimeStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x028517C0, app::String*, ConvertObjectToXml, (app::SqlDateTimeStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02851B20, app::Object*, GetEmptyStorage, (app::SqlDateTimeStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02851BA0, void, CopyValue, (app::SqlDateTimeStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02851D40, void, SetStorage, (app::SqlDateTimeStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::SqlDateTimeStorage
