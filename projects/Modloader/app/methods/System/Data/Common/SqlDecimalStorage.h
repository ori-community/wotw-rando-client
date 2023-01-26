#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SqlDecimalStorage.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::Common::SqlDecimalStorage {
    IL2CPP_REGISTER_METHOD(0x02851E00, void, ctor, (app::SqlDecimalStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02851F90, app::Object*, Aggregate, (app::SqlDecimalStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHOD(0x02852E30, int32_t, Compare, (app::SqlDecimalStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02852EB0, int32_t, CompareValueTo, (app::SqlDecimalStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02852FB0, app::Object*, ConvertValue, (app::SqlDecimalStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02853080, void, Copy, (app::SqlDecimalStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02853100, app::Object*, Get, (app::SqlDecimalStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x028531D0, bool, IsNull, (app::SqlDecimalStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02853220, void, Set, (app::SqlDecimalStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02853290, void, SetCapacity, (app::SqlDecimalStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02853390, app::Object*, ConvertXmlToObject, (app::SqlDecimalStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x028536F0, app::String*, ConvertObjectToXml, (app::SqlDecimalStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02853A50, app::Object*, GetEmptyStorage, (app::SqlDecimalStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02853AD0, void, CopyValue, (app::SqlDecimalStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02853C70, void, SetStorage, (app::SqlDecimalStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::SqlDecimalStorage
