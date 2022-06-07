#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::Common::SingleStorage {
    IL2CPP_REGISTER_METHOD(0x021705C0, void, ctor, (app::SingleStorage * this_ptr, app::DataColumn * column))
    IL2CPP_REGISTER_METHOD(0x021706E0, app::Object *, Aggregate, (app::SingleStorage * this_ptr, app::Int32__Array * records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x0470CB28, SingleStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02170E30, int32_t, Compare, (app::SingleStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02170F60, int32_t, CompareValueTo, (app::SingleStorage * this_ptr, int32_t record_no, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02171110, app::Object *, ConvertValue, (app::SingleStorage * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02171240, void, Copy, (app::SingleStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02171300, app::Object *, Get, (app::SingleStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02171410, void, Set, (app::SingleStorage * this_ptr, int32_t record, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x021715D0, void, SetCapacity, (app::SingleStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x021716E0, app::Object *, ConvertXmlToObject, (app::SingleStorage * this_ptr, app::String * s))
    IL2CPP_REGISTER_METHOD(0x021717A0, app::String *, ConvertObjectToXml, (app::SingleStorage * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02171870, app::Object *, GetEmptyStorage, (app::SingleStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x021718F0, void, CopyValue, (app::SingleStorage * this_ptr, int32_t record, app::Object * store, app::BitArray * nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02171A80, void, SetStorage, (app::SingleStorage * this_ptr, app::Object * store, app::BitArray * nullbits))
}
