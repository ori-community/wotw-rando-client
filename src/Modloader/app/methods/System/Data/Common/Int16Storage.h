#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Int16Storage.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::Common::Int16Storage {
    IL2CPP_REGISTER_METHOD(0x021668C0, void, ctor, app::Int16Storage* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x021669E0, app::Object*, Aggregate, app::Int16Storage* this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind)
    IL2CPP_REGISTER_METHOD(0x021671E0, int32_t, Compare, app::Int16Storage* this_ptr, int32_t record_no1, int32_t record_no2)
    IL2CPP_REGISTER_METHOD(0x02167280, int32_t, CompareValueTo, app::Int16Storage* this_ptr, int32_t record_no, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x021673D0, app::Object*, ConvertValue, app::Int16Storage* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02159340, void, Copy, app::Int16Storage* this_ptr, int32_t record_no1, int32_t record_no2)
    IL2CPP_REGISTER_METHOD(0x02167500, app::Object*, Get, app::Int16Storage* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x02167600, void, Set, app::Int16Storage* this_ptr, int32_t record, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x021677C0, void, SetCapacity, app::Int16Storage* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x021678D0, app::Object*, ConvertXmlToObject, app::Int16Storage* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x021679B0, app::String*, ConvertObjectToXml, app::Int16Storage* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02167A90, app::Object*, GetEmptyStorage, app::Int16Storage* this_ptr, int32_t record_count)
    IL2CPP_REGISTER_METHOD(
        0x02167B10,
        void,
        CopyValue,
        app::Int16Storage* this_ptr,
        int32_t record,
        app::Object* store,
        app::BitArray* nullbits,
        int32_t store_index
    )
    IL2CPP_REGISTER_METHOD(0x02167CA0, void, SetStorage, app::Int16Storage* this_ptr, app::Object* store, app::BitArray* nullbits)
} // namespace app::classes::System::Data::Common::Int16Storage
