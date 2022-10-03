#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::Common::UInt32Storage {
    IL2CPP_REGISTER_METHOD(0x028677F0, void, ctor, (app::UInt32Storage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02867940, app::Object*, Aggregate, (app::UInt32Storage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x047621E8, UInt32Storage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02868190, int32_t, Compare, (app::UInt32Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02868310, int32_t, CompareValueTo, (app::UInt32Storage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x028684A0, app::Object*, ConvertValue, (app::UInt32Storage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x021689C0, void, Copy, (app::UInt32Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x028685D0, app::Object*, Get, (app::UInt32Storage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02868720, void, Set, (app::UInt32Storage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02868920, void, SetCapacity, (app::UInt32Storage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02868A30, app::Object*, ConvertXmlToObject, (app::UInt32Storage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02868B10, app::String*, ConvertObjectToXml, (app::UInt32Storage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02868BF0, app::Object*, GetEmptyStorage, (app::UInt32Storage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02868C70, void, CopyValue, (app::UInt32Storage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02868DF0, void, SetStorage, (app::UInt32Storage * this_ptr, app::Object* store, app::BitArray* nullbits))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::System::Data::Common::UInt32Storage
