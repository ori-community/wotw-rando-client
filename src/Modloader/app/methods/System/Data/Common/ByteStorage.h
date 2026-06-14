#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/ByteStorage.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::Common::ByteStorage {
    IL2CPP_REGISTER_METHOD(0x021576E0, void, ctor, app::ByteStorage* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x02157800, app::Object*, Aggregate, app::ByteStorage* this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind)
    IL2CPP_REGISTER_METHOD(0x02157F70, int32_t, Compare, app::ByteStorage* this_ptr, int32_t record_no1, int32_t record_no2)
    IL2CPP_REGISTER_METHOD(0x02158010, int32_t, CompareValueTo, app::ByteStorage* this_ptr, int32_t record_no, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02158150, app::Object*, ConvertValue, app::ByteStorage* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02158280, void, Copy, app::ByteStorage* this_ptr, int32_t record_no1, int32_t record_no2)
    IL2CPP_REGISTER_METHOD(0x02158340, app::Object*, Get, app::ByteStorage* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x02158440, void, Set, app::ByteStorage* this_ptr, int32_t record, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02158600, void, SetCapacity, app::ByteStorage* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02158710, app::Object*, ConvertXmlToObject, app::ByteStorage* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x021587F0, app::String*, ConvertObjectToXml, app::ByteStorage* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x021588D0, app::Object*, GetEmptyStorage, app::ByteStorage* this_ptr, int32_t record_count)
    IL2CPP_REGISTER_METHOD(
        0x02158950,
        void,
        CopyValue,
        app::ByteStorage* this_ptr,
        int32_t record,
        app::Object* store,
        app::BitArray* nullbits,
        int32_t store_index
    )
    IL2CPP_REGISTER_METHOD(0x02158AD0, void, SetStorage, app::ByteStorage* this_ptr, app::Object* store, app::BitArray* nullbits)
} // namespace app::classes::System::Data::Common::ByteStorage
