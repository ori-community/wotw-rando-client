#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::Common::Int64Storage {
    IL2CPP_REGISTER_METHOD(0x021692D0, void, ctor, (app::Int64Storage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x021693F0, app::Object*, Aggregate, (app::Int64Storage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x04737338, Int64Storage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02169D20, int32_t, Compare, (app::Int64Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02169DD0, int32_t, CompareValueTo, (app::Int64Storage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02169F30, app::Object*, ConvertValue, (app::Int64Storage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0216A060, void, Copy, (app::Int64Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x0216A110, app::Object*, Get, (app::Int64Storage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x0216A210, void, Set, (app::Int64Storage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0216A3D0, void, SetCapacity, (app::Int64Storage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0216A4E0, app::Object*, ConvertXmlToObject, (app::Int64Storage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x0216A5C0, app::String*, ConvertObjectToXml, (app::Int64Storage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0216A6A0, app::Object*, GetEmptyStorage, (app::Int64Storage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x0216A720, void, CopyValue, (app::Int64Storage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x0216A8A0, void, SetStorage, (app::Int64Storage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::Int64Storage
