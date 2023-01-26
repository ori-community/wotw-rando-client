#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Int32Converter.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::Int32Converter {
    IL2CPP_REGISTER_METHOD(0x01FEF4D0, app::Type*, get_TargetType, (app::Int32Converter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEF570, app::Object*, FromString_1, (app::Int32Converter * this_ptr, app::String* value, int32_t radix))
    IL2CPP_REGISTER_METHOD(0x01FEF630, app::Object*, FromString_2, (app::Int32Converter * this_ptr, app::String* value, app::NumberFormatInfo* format_info))
    IL2CPP_REGISTER_METHOD(0x01FEF6F0, app::Object*, FromString_3, (app::Int32Converter * this_ptr, app::String* value, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x01FEF7A0, app::String*, ToString, (app::Int32Converter * this_ptr, app::Object* value, app::NumberFormatInfo* format_info))
    IL2CPP_REGISTER_METHOD(0x01FE1B70, void, ctor, (app::Int32Converter * this_ptr))
} // namespace app::classes::System::ComponentModel::Int32Converter
