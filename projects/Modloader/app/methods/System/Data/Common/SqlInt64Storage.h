#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SqlInt64Storage.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BitArray.h>

namespace app::classes::System::Data::Common::SqlInt64Storage {
    IL2CPP_REGISTER_METHOD(0x0285A5B0, void, ctor, (app::SqlInt64Storage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x0285A730, app::Object*, Aggregate, (app::SqlInt64Storage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x04784288, SqlInt64Storage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0285B560, int32_t, Compare, (app::SqlInt64Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x0285B5E0, int32_t, CompareValueTo, (app::SqlInt64Storage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0285B6E0, app::Object*, ConvertValue, (app::SqlInt64Storage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02854E00, void, Copy, (app::SqlInt64Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x0285B7A0, app::Object*, Get, (app::SqlInt64Storage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02854F40, bool, IsNull, (app::SqlInt64Storage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x0285B870, void, Set, (app::SqlInt64Storage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0285B8E0, void, SetCapacity, (app::SqlInt64Storage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0285B9E0, app::Object*, ConvertXmlToObject, (app::SqlInt64Storage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x0285BD30, app::String*, ConvertObjectToXml, (app::SqlInt64Storage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0285C090, app::Object*, GetEmptyStorage, (app::SqlInt64Storage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x0285C110, void, CopyValue, (app::SqlInt64Storage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x0285C2B0, void, SetStorage, (app::SqlInt64Storage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::SqlInt64Storage
