#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UInt64Storage.h>

namespace app::classes::System::Data::Common::UInt64Storage {
    IL2CPP_REGISTER_METHOD(0x02868EC0, void, ctor, app::UInt64Storage* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x02869010, app::Object*, Aggregate, app::UInt64Storage* this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind)
    IL2CPP_REGISTER_METHOD(0x028699C0, int32_t, Compare, app::UInt64Storage* this_ptr, int32_t record_no1, int32_t record_no2)
    IL2CPP_REGISTER_METHOD(0x02869B40, int32_t, CompareValueTo, app::UInt64Storage* this_ptr, int32_t record_no, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02869CD0, app::Object*, ConvertValue, app::UInt64Storage* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0216A060, void, Copy, app::UInt64Storage* this_ptr, int32_t record_no1, int32_t record_no2)
    IL2CPP_REGISTER_METHOD(0x02869E00, app::Object*, Get, app::UInt64Storage* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x02869F50, void, Set, app::UInt64Storage* this_ptr, int32_t record, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0286A150, void, SetCapacity, app::UInt64Storage* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x0286A260, app::Object*, ConvertXmlToObject, app::UInt64Storage* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x0286A340, app::String*, ConvertObjectToXml, app::UInt64Storage* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0286A420, app::Object*, GetEmptyStorage, app::UInt64Storage* this_ptr, int32_t record_count)
    IL2CPP_REGISTER_METHOD(
        0x0286A4A0,
        void,
        CopyValue,
        app::UInt64Storage* this_ptr,
        int32_t record,
        app::Object* store,
        app::BitArray* nullbits,
        int32_t store_index
    )
    IL2CPP_REGISTER_METHOD(0x0286A620, void, SetStorage, app::UInt64Storage* this_ptr, app::Object* store, app::BitArray* nullbits)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::System::Data::Common::UInt64Storage
