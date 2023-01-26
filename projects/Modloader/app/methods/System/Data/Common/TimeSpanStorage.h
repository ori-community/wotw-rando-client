#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimeSpanStorage.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::Data::Common::TimeSpanStorage {
    IL2CPP_REGISTER_METHOD(0x02864130, void, ctor, (app::TimeSpanStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02864280, app::Object*, Aggregate, (app::TimeSpanStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHOD(0x028650D0, int32_t, Compare, (app::TimeSpanStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x028652E0, int32_t, CompareValueTo, (app::TimeSpanStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02865490, app::TimeSpan, ConvertToTimeSpan, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02865710, app::Object*, ConvertValue, (app::TimeSpanStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x021627E0, void, Copy, (app::TimeSpanStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x028657F0, app::Object*, Get, (app::TimeSpanStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02865950, void, Set, (app::TimeSpanStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02865AD0, void, SetCapacity, (app::TimeSpanStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02865BE0, app::Object*, ConvertXmlToObject, (app::TimeSpanStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02865C90, app::String*, ConvertObjectToXml, (app::TimeSpanStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02865DA0, app::Object*, GetEmptyStorage, (app::TimeSpanStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02865E20, void, CopyValue, (app::TimeSpanStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02865FA0, void, SetStorage, (app::TimeSpanStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
    IL2CPP_REGISTER_METHOD(0x02866070, void, cctor, ())
} // namespace app::classes::System::Data::Common::TimeSpanStorage
