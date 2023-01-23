#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnicodeCategory__Enum.h>

namespace app::classes::System::Globalization::CharUnicodeInfo {
    IL2CPP_REGISTER_METHOD(0x01A21B10, int32_t, InternalConvertToUtf32, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01A21C30, bool, IsWhiteSpace_1, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01A21D00, bool, IsWhiteSpace_2, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x01A21DB0, app::UnicodeCategory__Enum, GetUnicodeCategory_1, (uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x01A21E50, app::UnicodeCategory__Enum, GetUnicodeCategory_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0471FA10, CharUnicodeInfo_GetUnicodeCategory_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A21F70, app::UnicodeCategory__Enum, InternalGetUnicodeCategory_1, (int32_t ch))
    IL2CPP_REGISTER_METHOD(0x01A22010, uint8_t, InternalGetCategoryValue, (int32_t ch, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01A22190, app::UnicodeCategory__Enum, InternalGetUnicodeCategory_2, (app::String * value, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01A22300, void, cctor, ())
} // namespace app::classes::System::Globalization::CharUnicodeInfo
