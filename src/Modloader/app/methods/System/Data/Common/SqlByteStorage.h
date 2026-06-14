#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SqlByteStorage.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::Common::SqlByteStorage {
    IL2CPP_REGISTER_METHOD(0x02844A10, void, ctor, app::SqlByteStorage* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x02844BA0, app::Object*, Aggregate, app::SqlByteStorage* this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind)
    IL2CPP_REGISTER_METHOD(0x02845910, int32_t, Compare, app::SqlByteStorage* this_ptr, int32_t record_no1, int32_t record_no2)
    IL2CPP_REGISTER_METHOD(0x02845970, int32_t, CompareValueTo, app::SqlByteStorage* this_ptr, int32_t record_no, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02845A60, app::Object*, ConvertValue, app::SqlByteStorage* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02845B20, void, Copy, app::SqlByteStorage* this_ptr, int32_t record_no1, int32_t record_no2)
    IL2CPP_REGISTER_METHOD(0x02845B90, app::Object*, Get, app::SqlByteStorage* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x02845C50, bool, IsNull, app::SqlByteStorage* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x02845C90, void, Set, app::SqlByteStorage* this_ptr, int32_t record, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02845CE0, void, SetCapacity, app::SqlByteStorage* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02845DE0, app::Object*, ConvertXmlToObject, app::SqlByteStorage* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x02846130, app::String*, ConvertObjectToXml, app::SqlByteStorage* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02846490, app::Object*, GetEmptyStorage, app::SqlByteStorage* this_ptr, int32_t record_count)
    IL2CPP_REGISTER_METHOD(
        0x02846510,
        void,
        CopyValue,
        app::SqlByteStorage* this_ptr,
        int32_t record,
        app::Object* store,
        app::BitArray* nullbits,
        int32_t store_index
    )
    IL2CPP_REGISTER_METHOD(0x02846690, void, SetStorage, app::SqlByteStorage* this_ptr, app::Object* store, app::BitArray* nullbits)
} // namespace app::classes::System::Data::Common::SqlByteStorage
