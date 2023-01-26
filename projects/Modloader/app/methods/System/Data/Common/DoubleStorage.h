#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DoubleStorage.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::Common::DoubleStorage {
    IL2CPP_REGISTER_METHOD(0x02165450, void, ctor, (app::DoubleStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02165570, app::Object*, Aggregate, (app::DoubleStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHOD(0x02165C70, int32_t, Compare, (app::DoubleStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02165D20, int32_t, CompareValueTo, (app::DoubleStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02165E80, app::Object*, ConvertValue, (app::DoubleStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02165FB0, void, Copy, (app::DoubleStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02166070, app::Object*, Get, (app::DoubleStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02166180, void, Set, (app::DoubleStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02166340, void, SetCapacity, (app::DoubleStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02166450, app::Object*, ConvertXmlToObject, (app::DoubleStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02166510, app::String*, ConvertObjectToXml, (app::DoubleStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x021665E0, app::Object*, GetEmptyStorage, (app::DoubleStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02166660, void, CopyValue, (app::DoubleStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x021667F0, void, SetStorage, (app::DoubleStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::DoubleStorage
