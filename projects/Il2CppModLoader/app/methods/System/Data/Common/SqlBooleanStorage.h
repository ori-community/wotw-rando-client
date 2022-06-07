#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::Common::SqlBooleanStorage {
    IL2CPP_REGISTER_METHOD(0x02843600, void, ctor, (app::SqlBooleanStorage * this_ptr, app::DataColumn * column))
    IL2CPP_REGISTER_METHOD(0x02843790, app::Object *, Aggregate, (app::SqlBooleanStorage * this_ptr, app::Int32__Array * records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x04738D80, SqlBooleanStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02843BD0, int32_t, Compare, (app::SqlBooleanStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02843C30, int32_t, CompareValueTo, (app::SqlBooleanStorage * this_ptr, int32_t record_no, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02843D20, app::Object *, ConvertValue, (app::SqlBooleanStorage * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02843DE0, void, Copy, (app::SqlBooleanStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02843E50, app::Object *, Get, (app::SqlBooleanStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02843F10, bool, IsNull, (app::SqlBooleanStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02843F50, void, Set, (app::SqlBooleanStorage * this_ptr, int32_t record, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02843FA0, void, SetCapacity, (app::SqlBooleanStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x028440A0, app::Object *, ConvertXmlToObject, (app::SqlBooleanStorage * this_ptr, app::String * s))
    IL2CPP_REGISTER_METHOD(0x028443F0, app::String *, ConvertObjectToXml, (app::SqlBooleanStorage * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02844750, app::Object *, GetEmptyStorage, (app::SqlBooleanStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x028447D0, void, CopyValue, (app::SqlBooleanStorage * this_ptr, int32_t record, app::Object * store, app::BitArray * nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02844950, void, SetStorage, (app::SqlBooleanStorage * this_ptr, app::Object * store, app::BitArray * nullbits))
}
