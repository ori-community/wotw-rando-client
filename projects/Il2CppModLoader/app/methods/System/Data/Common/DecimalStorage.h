#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::Common::DecimalStorage {
    IL2CPP_REGISTER_METHOD(0x02163820, void, ctor, (app::DecimalStorage * this_ptr, app::DataColumn * column))
    IL2CPP_REGISTER_METHOD(0x02163970, app::Object *, Aggregate, (app::DecimalStorage * this_ptr, app::Int32__Array * records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x047415B0, DecimalStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021645E0, int32_t, Compare, (app::DecimalStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02164840, int32_t, CompareValueTo, (app::DecimalStorage * this_ptr, int32_t record_no, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02164A60, app::Object *, ConvertValue, (app::DecimalStorage * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02155CC0, void, Copy, (app::DecimalStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02164B90, app::Object *, Get, (app::DecimalStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02164C90, void, Set, (app::DecimalStorage * this_ptr, int32_t record, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02164EA0, void, SetCapacity, (app::DecimalStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02164FB0, app::Object *, ConvertXmlToObject, (app::DecimalStorage * this_ptr, app::String * s))
    IL2CPP_REGISTER_METHOD(0x02165070, app::String *, ConvertObjectToXml, (app::DecimalStorage * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02165160, app::Object *, GetEmptyStorage, (app::DecimalStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x021651E0, void, CopyValue, (app::DecimalStorage * this_ptr, int32_t record, app::Object * store, app::BitArray * nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02165380, void, SetStorage, (app::DecimalStorage * this_ptr, app::Object * store, app::BitArray * nullbits))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
