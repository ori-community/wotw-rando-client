#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::Common::SqlInt16Storage {
    IL2CPP_REGISTER_METHOD(0x02856BC0, void, ctor, (app::SqlInt16Storage * this_ptr, app::DataColumn * column))
    IL2CPP_REGISTER_METHOD(0x02856D40, app::Object *, Aggregate, (app::SqlInt16Storage * this_ptr, app::Int32__Array * records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x04728778, SqlInt16Storage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02857AB0, int32_t, Compare, (app::SqlInt16Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02857B10, int32_t, CompareValueTo, (app::SqlInt16Storage * this_ptr, int32_t record_no, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02857C00, app::Object *, ConvertValue, (app::SqlInt16Storage * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02857CC0, void, Copy, (app::SqlInt16Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02857D30, app::Object *, Get, (app::SqlInt16Storage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02857DF0, bool, IsNull, (app::SqlInt16Storage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02857E30, void, Set, (app::SqlInt16Storage * this_ptr, int32_t record, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02857E80, void, SetCapacity, (app::SqlInt16Storage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02857F80, app::Object *, ConvertXmlToObject, (app::SqlInt16Storage * this_ptr, app::String * s))
    IL2CPP_REGISTER_METHOD(0x028582D0, app::String *, ConvertObjectToXml, (app::SqlInt16Storage * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02858630, app::Object *, GetEmptyStorage, (app::SqlInt16Storage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x028586B0, void, CopyValue, (app::SqlInt16Storage * this_ptr, int32_t record, app::Object * store, app::BitArray * nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02858830, void, SetStorage, (app::SqlInt16Storage * this_ptr, app::Object * store, app::BitArray * nullbits))
}
