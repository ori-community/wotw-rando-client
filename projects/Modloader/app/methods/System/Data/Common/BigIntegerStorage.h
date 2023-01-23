#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BigIntegerStorage.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/BigInteger_2.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BitArray.h>

namespace app::classes::System::Data::Common::BigIntegerStorage {
    IL2CPP_REGISTER_METHOD(0x02154A20, void, ctor, (app::BigIntegerStorage * this_ptr, app::DataColumn* column))
    IL2CPP_REGISTER_METHOD(0x02154B70, app::Object*, Aggregate, (app::BigIntegerStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x04721D40, BigIntegerStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02154BC0, int32_t, Compare, (app::BigIntegerStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02154C70, int32_t, CompareValueTo, (app::BigIntegerStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02154DE0, app::BigInteger_2, ConvertToBigInteger, (app::Object * value, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHODINFO(0x047642E0, BigIntegerStorage_ConvertToBigInteger__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021554C0, app::Object*, ConvertFromBigInteger, (app::BigInteger_2 value, app::Type* type, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHODINFO(0x04711CA0, BigIntegerStorage_ConvertFromBigInteger__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02155BE0, app::Object*, ConvertValue, (app::BigIntegerStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02155CC0, void, Copy, (app::BigIntegerStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02155D80, app::Object*, Get, (app::BigIntegerStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02155E90, void, Set, (app::BigIntegerStorage * this_ptr, int32_t record, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02156030, void, SetCapacity, (app::BigIntegerStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02156140, app::Object*, ConvertXmlToObject, (app::BigIntegerStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02156230, app::String*, ConvertObjectToXml, (app::BigIntegerStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02156330, app::Object*, GetEmptyStorage, (app::BigIntegerStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x021563B0, void, CopyValue, (app::BigIntegerStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02156550, void, SetStorage, (app::BigIntegerStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
} // namespace app::classes::System::Data::Common::BigIntegerStorage
