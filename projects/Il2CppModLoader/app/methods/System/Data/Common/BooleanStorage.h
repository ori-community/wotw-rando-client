#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::Common::BooleanStorage {
    IL2CPP_REGISTER_METHOD(0x02156620, void, ctor, (app::BooleanStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02156740, app::Object*, Aggregate, (app::BooleanStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x0478BCD0, BooleanStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02156A80, int32_t, Compare, (app::BooleanStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02156B70, int32_t, CompareValueTo, (app::BooleanStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02156CD0, app::Object*, ConvertValue, (app::BooleanStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02156E00, void, Copy, (app::BooleanStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02156EC0, app::Object*, Get, (app::BooleanStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02156FD0, void, Set, (app::BooleanStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02157190, void, SetCapacity, (app::BooleanStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x021572A0, app::Object*, ConvertXmlToObject, (app::BooleanStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02157350, app::String*, ConvertObjectToXml, (app::BooleanStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02157410, app::Object*, GetEmptyStorage, (app::BooleanStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02157490, void, CopyValue, (app::BooleanStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02157610, void, SetStorage, (app::BooleanStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::BooleanStorage
