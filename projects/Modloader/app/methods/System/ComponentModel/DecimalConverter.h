#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DecimalConverter.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::ComponentModel::DecimalConverter {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowHex, (app::DecimalConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE11F0, app::Type*, get_TargetType, (app::DecimalConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE1290, bool, CanConvertTo, (app::DecimalConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x01FE1390, app::Object*, ConvertTo, (app::DecimalConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x01FE17B0, app::Object*, FromString_1, (app::DecimalConverter * this_ptr, app::String* value, int32_t radix))
    IL2CPP_REGISTER_METHOD(0x01FE18C0, app::Object*, FromString_2, (app::DecimalConverter * this_ptr, app::String* value, app::NumberFormatInfo* format_info))
    IL2CPP_REGISTER_METHOD(0x01FE19B0, app::Object*, FromString_3, (app::DecimalConverter * this_ptr, app::String* value, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x01FE1A90, app::String*, ToString, (app::DecimalConverter * this_ptr, app::Object* value, app::NumberFormatInfo* format_info))
    IL2CPP_REGISTER_METHOD(0x01FE1B70, void, ctor, (app::DecimalConverter * this_ptr))
} // namespace app::classes::System::ComponentModel::DecimalConverter
