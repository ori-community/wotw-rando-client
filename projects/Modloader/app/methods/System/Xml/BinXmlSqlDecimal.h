#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinXmlSqlDecimal__Boxed.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UInt32__Array.h>

namespace app::classes::System::Xml::BinXmlSqlDecimal {
    IL2CPP_REGISTER_METHOD(0x001DE5A0, bool, get_IsPositive, app::BinXmlSqlDecimal__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DE5B0, void, ctor, app::BinXmlSqlDecimal__Boxed* this_ptr, app::Byte__Array* data, int32_t offset, bool trim)
    IL2CPP_REGISTER_METHOD(0x01B5AAD0, uint32_t, UIntFromByteArray, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E67F0, void, MpDiv1, app::UInt32__Array* rgul_u, int32_t* ciul_u, uint32_t iul_d, uint32_t* iul_r)
    IL2CPP_REGISTER_METHOD(0x021E6970, void, MpNormalize, app::UInt32__Array* rgul_u, int32_t* ciul_u)
    IL2CPP_REGISTER_METHOD(0x021E69C0, char16_t, ChFromDigit, uint32_t ui_digit)
    IL2CPP_REGISTER_METHOD(0x001DE5C0, app::Decimal, ToDecimal, app::BinXmlSqlDecimal__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DE5F0, void, TrimTrailingZeros, app::BinXmlSqlDecimal__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DE600, app::String*, ToString, app::BinXmlSqlDecimal__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021E7190, void, cctor, )
} // namespace app::classes::System::Xml::BinXmlSqlDecimal
