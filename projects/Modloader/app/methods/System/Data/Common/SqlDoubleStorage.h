#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SqlDoubleStorage.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BitArray.h>

namespace app::classes::System::Data::Common::SqlDoubleStorage {
    IL2CPP_REGISTER_METHOD(0x02853D30, void, ctor, (app::SqlDoubleStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02853EB0, app::Object*, Aggregate, (app::SqlDoubleStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x047266B8, SqlDoubleStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02854BC0, int32_t, Compare, (app::SqlDoubleStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02854C40, int32_t, CompareValueTo, (app::SqlDoubleStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02854D40, app::Object*, ConvertValue, (app::SqlDoubleStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02854E00, void, Copy, (app::SqlDoubleStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02854E70, app::Object*, Get, (app::SqlDoubleStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02854F40, bool, IsNull, (app::SqlDoubleStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02854F90, void, Set, (app::SqlDoubleStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02855000, void, SetCapacity, (app::SqlDoubleStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02855100, app::Object*, ConvertXmlToObject, (app::SqlDoubleStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02855450, app::String*, ConvertObjectToXml, (app::SqlDoubleStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x028557B0, app::Object*, GetEmptyStorage, (app::SqlDoubleStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02855830, void, CopyValue, (app::SqlDoubleStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x028559D0, void, SetStorage, (app::SqlDoubleStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::SqlDoubleStorage
