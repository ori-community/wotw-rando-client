#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SqlInt32Storage.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BitArray.h>

namespace app::classes::System::Data::Common::SqlInt32Storage {
    IL2CPP_REGISTER_METHOD(0x028588F0, void, ctor, (app::SqlInt32Storage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02858A80, app::Object*, Aggregate, (app::SqlInt32Storage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x0478DEB0, SqlInt32Storage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028597E0, int32_t, Compare, (app::SqlInt32Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02859840, int32_t, CompareValueTo, (app::SqlInt32Storage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02859930, app::Object*, ConvertValue, (app::SqlInt32Storage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02842A10, void, Copy, (app::SqlInt32Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x028599F0, app::Object*, Get, (app::SqlInt32Storage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02859AB0, bool, IsNull, (app::SqlInt32Storage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02859AF0, void, Set, (app::SqlInt32Storage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02859B40, void, SetCapacity, (app::SqlInt32Storage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02859C40, app::Object*, ConvertXmlToObject, (app::SqlInt32Storage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02859F90, app::String*, ConvertObjectToXml, (app::SqlInt32Storage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0285A2F0, app::Object*, GetEmptyStorage, (app::SqlInt32Storage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x0285A370, void, CopyValue, (app::SqlInt32Storage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x0285A4F0, void, SetStorage, (app::SqlInt32Storage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::SqlInt32Storage
