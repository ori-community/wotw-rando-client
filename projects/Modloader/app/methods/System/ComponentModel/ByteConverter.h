#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ByteConverter.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::ByteConverter {
    IL2CPP_REGISTER_METHOD(0x024A5B20, app::Type*, get_TargetType, (app::ByteConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A5BC0, app::Object*, FromString_1, (app::ByteConverter * this_ptr, app::String* value, int32_t radix))
    IL2CPP_REGISTER_METHOD(0x024A5C80, app::Object*, FromString_2, (app::ByteConverter * this_ptr, app::String* value, app::NumberFormatInfo* format_info))
    IL2CPP_REGISTER_METHOD(0x024A5D40, app::Object*, FromString_3, (app::ByteConverter * this_ptr, app::String* value, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x024A5DF0, app::String*, ToString, (app::ByteConverter * this_ptr, app::Object* value, app::NumberFormatInfo* format_info))
    IL2CPP_REGISTER_METHOD(0x01FE1B70, void, ctor, (app::ByteConverter * this_ptr))
} // namespace app::classes::System::ComponentModel::ByteConverter
