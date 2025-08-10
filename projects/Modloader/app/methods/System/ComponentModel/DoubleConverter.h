#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DoubleConverter.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::ComponentModel::DoubleConverter {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowHex, app::DoubleConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FE78C0, app::Type*, get_TargetType, app::DoubleConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FE7960, app::Object*, FromString_1, app::DoubleConverter* this_ptr, app::String* value, int32_t radix)
    IL2CPP_REGISTER_METHOD(0x01FE7A60, app::Object*, FromString_2, app::DoubleConverter* this_ptr, app::String* value, app::NumberFormatInfo* format_info)
    IL2CPP_REGISTER_METHOD(0x01FE7B30, app::Object*, FromString_3, app::DoubleConverter* this_ptr, app::String* value, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x01FE7C00, app::String*, ToString, app::DoubleConverter* this_ptr, app::Object* value, app::NumberFormatInfo* format_info)
    IL2CPP_REGISTER_METHOD(0x01FE1B70, void, ctor, app::DoubleConverter* this_ptr)
} // namespace app::classes::System::ComponentModel::DoubleConverter
