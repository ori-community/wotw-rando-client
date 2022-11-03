#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::Common::StringStorage {
    IL2CPP_REGISTER_METHOD(0x02863480, void, ctor, (app::StringStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x028635A0, app::Object*, Aggregate, (app::StringStorage * this_ptr, app::Int32__Array* record_nos, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x04785CF0, StringStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02863940, int32_t, Compare, (app::StringStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02863A00, int32_t, CompareValueTo, (app::StringStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02863B20, app::Object*, ConvertValue, (app::StringStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0216B500, void, Copy, (app::StringStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x0216B5A0, app::Object*, Get, (app::StringStorage * this_ptr, int32_t record_no))
    IL2CPP_REGISTER_METHOD(0x02863B50, int32_t, GetStringLength, (app::StringStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x0216B780, bool, IsNull, (app::StringStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02863BA0, void, Set, (app::StringStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02863C80, void, SetCapacity, (app::StringStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, ConvertXmlToObject, (app::StringStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02863D80, app::String*, ConvertObjectToXml, (app::StringStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02863E20, app::Object*, GetEmptyStorage, (app::StringStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02863EA0, void, CopyValue, (app::StringStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02864070, void, SetStorage, (app::StringStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::StringStorage
