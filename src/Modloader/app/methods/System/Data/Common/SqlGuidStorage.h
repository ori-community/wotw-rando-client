#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SqlGuidStorage.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::Common::SqlGuidStorage {
    IL2CPP_REGISTER_METHOD(0x02855A90, void, ctor, app::SqlGuidStorage* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x02855C20, app::Object*, Aggregate, app::SqlGuidStorage* this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind)
    IL2CPP_REGISTER_METHOD(0x02855E30, int32_t, Compare, app::SqlGuidStorage* this_ptr, int32_t record_no1, int32_t record_no2)
    IL2CPP_REGISTER_METHOD(0x02855E90, int32_t, CompareValueTo, app::SqlGuidStorage* this_ptr, int32_t record_no, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02855F80, app::Object*, ConvertValue, app::SqlGuidStorage* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02842A10, void, Copy, app::SqlGuidStorage* this_ptr, int32_t record_no1, int32_t record_no2)
    IL2CPP_REGISTER_METHOD(0x02856040, app::Object*, Get, app::SqlGuidStorage* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x0216B780, bool, IsNull, app::SqlGuidStorage* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x02856100, void, Set, app::SqlGuidStorage* this_ptr, int32_t record, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02856150, void, SetCapacity, app::SqlGuidStorage* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02856250, app::Object*, ConvertXmlToObject, app::SqlGuidStorage* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x028565A0, app::String*, ConvertObjectToXml, app::SqlGuidStorage* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02856900, app::Object*, GetEmptyStorage, app::SqlGuidStorage* this_ptr, int32_t record_count)
    IL2CPP_REGISTER_METHOD(
        0x02856980,
        void,
        CopyValue,
        app::SqlGuidStorage* this_ptr,
        int32_t record,
        app::Object* store,
        app::BitArray* nullbits,
        int32_t store_index
    )
    IL2CPP_REGISTER_METHOD(0x02856B00, void, SetStorage, app::SqlGuidStorage* this_ptr, app::Object* store, app::BitArray* nullbits)
} // namespace app::classes::System::Data::Common::SqlGuidStorage
