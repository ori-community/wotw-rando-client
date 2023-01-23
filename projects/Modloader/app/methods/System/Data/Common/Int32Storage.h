#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Int32Storage.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BitArray.h>

namespace app::classes::System::Data::Common::Int32Storage {
    IL2CPP_REGISTER_METHOD(0x02167D70, void, ctor, (app::Int32Storage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02167E90, app::Object*, Aggregate, (app::Int32Storage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x0479A238, Int32Storage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02168680, int32_t, Compare, (app::Int32Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02168730, int32_t, CompareValueTo, (app::Int32Storage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02168890, app::Object*, ConvertValue, (app::Int32Storage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x021689C0, void, Copy, (app::Int32Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02168A70, app::Object*, Get, (app::Int32Storage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02168B70, void, Set, (app::Int32Storage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02168D30, void, SetCapacity, (app::Int32Storage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02168E40, app::Object*, ConvertXmlToObject, (app::Int32Storage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02168F20, app::String*, ConvertObjectToXml, (app::Int32Storage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02169000, app::Object*, GetEmptyStorage, (app::Int32Storage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02169080, void, CopyValue, (app::Int32Storage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02169200, void, SetStorage, (app::Int32Storage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::Int32Storage
