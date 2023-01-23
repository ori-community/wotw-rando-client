#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SqlSingleStorage.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BitArray.h>

namespace app::classes::System::Data::Common::SqlSingleStorage {
    IL2CPP_REGISTER_METHOD(0x0285E1B0, void, ctor, (app::SqlSingleStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x0285E330, app::Object*, Aggregate, (app::SqlSingleStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x0475EEC8, SqlSingleStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0285F060, int32_t, Compare, (app::SqlSingleStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x0285F0C0, int32_t, CompareValueTo, (app::SqlSingleStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0285F1B0, app::Object*, ConvertValue, (app::SqlSingleStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02842A10, void, Copy, (app::SqlSingleStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x0285F270, app::Object*, Get, (app::SqlSingleStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02859AB0, bool, IsNull, (app::SqlSingleStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x0285F330, void, Set, (app::SqlSingleStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0285F380, void, SetCapacity, (app::SqlSingleStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0285F480, app::Object*, ConvertXmlToObject, (app::SqlSingleStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x0285F7D0, app::String*, ConvertObjectToXml, (app::SqlSingleStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0285FB30, app::Object*, GetEmptyStorage, (app::SqlSingleStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x0285FBB0, void, CopyValue, (app::SqlSingleStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x0285FD30, void, SetStorage, (app::SqlSingleStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::SqlSingleStorage
