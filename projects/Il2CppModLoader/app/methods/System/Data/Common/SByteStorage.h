#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::Common::SByteStorage {
    IL2CPP_REGISTER_METHOD(0x0216F1C0, void, ctor, (app::SByteStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x0216F2E0, app::Object*, Aggregate, (app::SByteStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x047209D0, SByteStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0216FA50, int32_t, Compare, (app::SByteStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x0216FAF0, int32_t, CompareValueTo, (app::SByteStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0216FC30, app::Object*, ConvertValue, (app::SByteStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02158280, void, Copy, (app::SByteStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x0216FD60, app::Object*, Get, (app::SByteStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x0216FE60, void, Set, (app::SByteStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02170020, void, SetCapacity, (app::SByteStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02170130, app::Object*, ConvertXmlToObject, (app::SByteStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02170210, app::String*, ConvertObjectToXml, (app::SByteStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x021702F0, app::Object*, GetEmptyStorage, (app::SByteStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02170370, void, CopyValue, (app::SByteStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x021704F0, void, SetStorage, (app::SByteStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::SByteStorage
