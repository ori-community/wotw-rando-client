#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UInt16Storage.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BitArray.h>

namespace app::classes::System::Data::Common::UInt16Storage {
    IL2CPP_REGISTER_METHOD(0x02866120, void, ctor, (app::UInt16Storage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02866270, app::Object*, Aggregate, (app::UInt16Storage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x047178B8, UInt16Storage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02866AC0, int32_t, Compare, (app::UInt16Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02866C40, int32_t, CompareValueTo, (app::UInt16Storage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02866DC0, app::Object*, ConvertValue, (app::UInt16Storage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02159340, void, Copy, (app::UInt16Storage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02866EF0, app::Object*, Get, (app::UInt16Storage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02867040, void, Set, (app::UInt16Storage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02867240, void, SetCapacity, (app::UInt16Storage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02867350, app::Object*, ConvertXmlToObject, (app::UInt16Storage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02867430, app::String*, ConvertObjectToXml, (app::UInt16Storage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02867510, app::Object*, GetEmptyStorage, (app::UInt16Storage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02867590, void, CopyValue, (app::UInt16Storage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02867720, void, SetStorage, (app::UInt16Storage * this_ptr, app::Object* store, app::BitArray* nullbits))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::System::Data::Common::UInt16Storage
