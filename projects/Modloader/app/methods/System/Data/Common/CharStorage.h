#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::Common::CharStorage {
    IL2CPP_REGISTER_METHOD(0x02158BA0, void, ctor, (app::CharStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02158CC0, app::Object*, Aggregate, (app::CharStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x04757580, CharStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02159030, int32_t, Compare, (app::CharStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x021590D0, int32_t, CompareValueTo, (app::CharStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02159210, app::Object*, ConvertValue, (app::CharStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02159340, void, Copy, (app::CharStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02159400, app::Object*, Get, (app::CharStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02159500, void, Set, (app::CharStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04727C40, CharStorage_Set__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02159710, void, SetCapacity, (app::CharStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02159820, app::Object*, ConvertXmlToObject, (app::CharStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x021598D0, app::String*, ConvertObjectToXml, (app::CharStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x021599A0, app::Object*, GetEmptyStorage, (app::CharStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02159A20, void, CopyValue, (app::CharStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02159BA0, void, SetStorage, (app::CharStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::CharStorage
