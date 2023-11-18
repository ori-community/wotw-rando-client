#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTimeOffsetStorage.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::Common::DateTimeOffsetStorage {
    IL2CPP_REGISTER_METHOD(0x021603E0, void, ctor, (app::DateTimeOffsetStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02160530, app::Object*, Aggregate, (app::DateTimeOffsetStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHOD(0x02160A60, int32_t, Compare, (app::DateTimeOffsetStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02160E70, int32_t, CompareValueTo, (app::DateTimeOffsetStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02161130, app::Object*, ConvertValue, (app::DateTimeOffsetStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02155CC0, void, Copy, (app::DateTimeOffsetStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02161200, app::Object*, Get, (app::DateTimeOffsetStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02161430, void, Set, (app::DateTimeOffsetStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x021615D0, void, SetCapacity, (app::DateTimeOffsetStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x021616E0, app::Object*, ConvertXmlToObject, (app::DateTimeOffsetStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x021617A0, app::String*, ConvertObjectToXml, (app::DateTimeOffsetStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02161890, app::Object*, GetEmptyStorage, (app::DateTimeOffsetStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02161910, void, CopyValue, (app::DateTimeOffsetStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02161AB0, void, SetStorage, (app::DateTimeOffsetStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
    IL2CPP_REGISTER_METHOD(0x02161B80, void, cctor, ())
} // namespace app::classes::System::Data::Common::DateTimeOffsetStorage
