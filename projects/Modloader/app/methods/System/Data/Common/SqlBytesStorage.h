#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SqlBytesStorage.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::Common::SqlBytesStorage {
    IL2CPP_REGISTER_METHOD(0x02846750, void, ctor, (app::SqlBytesStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02846880, app::Object*, Aggregate, (app::SqlBytesStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, Compare, (app::SqlBytesStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, CompareValueTo, (app::SqlBytesStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0216B500, void, Copy, (app::SqlBytesStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02846A70, app::Object*, Get, (app::SqlBytesStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02846AB0, bool, IsNull, (app::SqlBytesStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02846B00, void, Set, (app::SqlBytesStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02846CC0, void, SetCapacity, (app::SqlBytesStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02846DC0, app::Object*, ConvertXmlToObject, (app::SqlBytesStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02847210, app::String*, ConvertObjectToXml, (app::SqlBytesStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02847570, app::Object*, GetEmptyStorage, (app::SqlBytesStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x028475F0, void, CopyValue, (app::SqlBytesStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x028477C0, void, SetStorage, (app::SqlBytesStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::SqlBytesStorage
