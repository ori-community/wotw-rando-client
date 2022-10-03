#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::Common::DateTimeStorage {
    IL2CPP_REGISTER_METHOD(0x02161C30, void, ctor, (app::DateTimeStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02161D80, app::Object*, Aggregate, (app::DateTimeStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x04785128, DateTimeStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021622A0, int32_t, Compare, (app::DateTimeStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x021624C0, int32_t, CompareValueTo, (app::DateTimeStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x021626B0, app::Object*, ConvertValue, (app::DateTimeStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x021627E0, void, Copy, (app::DateTimeStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02162890, app::Object*, Get, (app::DateTimeStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02162A00, void, Set, (app::DateTimeStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04770E78, DateTimeStorage_Set__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02162D80, void, SetCapacity, (app::DateTimeStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02162E90, app::Object*, ConvertXmlToObject, (app::DateTimeStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02163040, app::String*, ConvertObjectToXml, (app::DateTimeStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02163210, app::Object*, GetEmptyStorage, (app::DateTimeStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02163290, void, CopyValue, (app::DateTimeStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x021634A0, void, SetStorage, (app::DateTimeStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
    IL2CPP_REGISTER_METHOD(0x02163770, void, cctor, ())
} // namespace app::classes::System::Data::Common::DateTimeStorage
