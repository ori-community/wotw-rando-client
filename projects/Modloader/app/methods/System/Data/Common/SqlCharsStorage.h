#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::Common::SqlCharsStorage {
    IL2CPP_REGISTER_METHOD(0x02847880, void, ctor, (app::SqlCharsStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x028479B0, app::Object*, Aggregate, (app::SqlCharsStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x04730B70, SqlCharsStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, Compare, (app::SqlCharsStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, CompareValueTo, (app::SqlCharsStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0216B500, void, Copy, (app::SqlCharsStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02846A70, app::Object*, Get, (app::SqlCharsStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02846AB0, bool, IsNull, (app::SqlCharsStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02847BA0, void, Set, (app::SqlCharsStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02847D60, void, SetCapacity, (app::SqlCharsStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02847E60, app::Object*, ConvertXmlToObject, (app::SqlCharsStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02848340, app::String*, ConvertObjectToXml, (app::SqlCharsStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x028486A0, app::Object*, GetEmptyStorage, (app::SqlCharsStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02848720, void, CopyValue, (app::SqlCharsStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x028488F0, void, SetStorage, (app::SqlCharsStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::SqlCharsStorage
