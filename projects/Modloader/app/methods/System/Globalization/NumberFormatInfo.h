#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/CultureData.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Globalization::NumberFormatInfo {
    IL2CPP_REGISTER_METHOD(0x01DE9EB0, void, ctor_1, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE9EC0, void, OnSerializing, (app::NumberFormatInfo * this_ptr, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeserializing, (app::NumberFormatInfo * this_ptr, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeserialized, (app::NumberFormatInfo * this_ptr, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x01DE9FE0, void, ctor_2, (app::NumberFormatInfo * this_ptr, app::CultureData* culture_data))
    IL2CPP_REGISTER_METHOD(0x01DEA630, app::NumberFormatInfo*, get_InvariantInfo, ())
    IL2CPP_REGISTER_METHOD(0x01DEA7E0, app::NumberFormatInfo*, GetInstance, (app::IFormatProvider * format_provider))
    IL2CPP_REGISTER_METHOD(0x01DEA970, app::Object*, Clone, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063D090, int32_t, get_CurrencyDecimalDigits, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_CurrencyDecimalSeparator, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_IsReadOnly, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DEAAB0, app::Int32__Array*, get_CurrencyGroupSizes, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DEABF0, app::Int32__Array*, get_NumberGroupSizes, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DEAD30, app::Int32__Array*, get_PercentGroupSizes, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_CurrencyGroupSeparator, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_CurrencySymbol, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DEAE70, app::NumberFormatInfo*, get_CurrentInfo, ())
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::String*, get_NaNSymbol, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073EDA0, int32_t, get_CurrencyNegativePattern, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855600, int32_t, get_NumberNegativePattern, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519C0, int32_t, get_PercentPositivePattern, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFCE0, int32_t, get_PercentNegativePattern, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::String*, get_NegativeInfinitySymbol, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_NegativeSign, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005035C0, int32_t, get_NumberDecimalDigits, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_NumberDecimalSeparator, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_NumberGroupSeparator, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062C500, int32_t, get_CurrencyPositivePattern, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::String*, get_PositiveInfinitySymbol, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_PositiveSign, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008468B0, int32_t, get_PercentDecimalDigits, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::String*, get_PercentDecimalSeparator, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String*, get_PercentGroupSeparator, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String*, get_PercentSymbol, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::String*, get_PerMilleSymbol, (app::NumberFormatInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DEAFA0, app::Object*, GetFormat, (app::NumberFormatInfo * this_ptr, app::Type* format_type))
    IL2CPP_REGISTER_METHOD(0x01DEB070, app::NumberFormatInfo*, ReadOnly, (app::NumberFormatInfo * nfi))
    IL2CPP_REGISTER_METHOD(0x01DEB200, void, ValidateParseStyleInteger, (app::NumberStyles__Enum style))
    IL2CPP_REGISTER_METHOD(0x01DEB320, void, ValidateParseStyleFloatingPoint, (app::NumberStyles__Enum style))
} // namespace app::classes::System::Globalization::NumberFormatInfo
