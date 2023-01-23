#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/SByteConverter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/CultureInfo.h>

namespace app::classes::System::ComponentModel::SByteConverter {
    IL2CPP_REGISTER_METHOD(0x029AC600, app::Type*, get_TargetType, (app::SByteConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029AC6A0, app::Object*, FromString_1, (app::SByteConverter * this_ptr, app::String* value, int32_t radix))
    IL2CPP_REGISTER_METHOD(0x029AC870, app::Object*, FromString_2, (app::SByteConverter * this_ptr, app::String* value, app::NumberFormatInfo* format_info))
    IL2CPP_REGISTER_METHOD(0x029AC930, app::Object*, FromString_3, (app::SByteConverter * this_ptr, app::String* value, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x029AC9E0, app::String*, ToString, (app::SByteConverter * this_ptr, app::Object* value, app::NumberFormatInfo* format_info))
    IL2CPP_REGISTER_METHOD(0x01FE1B70, void, ctor, (app::SByteConverter * this_ptr))
} // namespace app::classes::System::ComponentModel::SByteConverter
