#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::Common::SqlBinaryStorage {
    IL2CPP_REGISTER_METHOD(0x02842470, void, ctor, (app::SqlBinaryStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x028425F0, app::Object*, Aggregate, (app::SqlBinaryStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x047685E0, SqlBinaryStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02842800, int32_t, Compare, (app::SqlBinaryStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02842860, int32_t, CompareValueTo, (app::SqlBinaryStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02842950, app::Object*, ConvertValue, (app::SqlBinaryStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02842A10, void, Copy, (app::SqlBinaryStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02842A80, app::Object*, Get, (app::SqlBinaryStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x0216B780, bool, IsNull, (app::SqlBinaryStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02842B40, void, Set, (app::SqlBinaryStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02842B90, void, SetCapacity, (app::SqlBinaryStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02842C90, app::Object*, ConvertXmlToObject, (app::SqlBinaryStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02842FE0, app::String*, ConvertObjectToXml, (app::SqlBinaryStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02843340, app::Object*, GetEmptyStorage, (app::SqlBinaryStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x028433C0, void, CopyValue, (app::SqlBinaryStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02843540, void, SetStorage, (app::SqlBinaryStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::SqlBinaryStorage
