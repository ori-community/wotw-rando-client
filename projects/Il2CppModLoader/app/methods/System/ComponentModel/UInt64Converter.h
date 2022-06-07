#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::UInt64Converter {
    IL2CPP_REGISTER_METHOD(0x0295D7A0, app::Type *, get_TargetType, (app::UInt64Converter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0295D840, app::Object *, FromString_1, (app::UInt64Converter * this_ptr, app::String * value, int32_t radix))
    IL2CPP_REGISTER_METHOD(0x0295D9C0, app::Object *, FromString_2, (app::UInt64Converter * this_ptr, app::String * value, app::NumberFormatInfo * format_info))
    IL2CPP_REGISTER_METHOD(0x0295DA80, app::Object *, FromString_3, (app::UInt64Converter * this_ptr, app::String * value, app::CultureInfo * culture))
    IL2CPP_REGISTER_METHOD(0x0295DB30, app::String *, ToString, (app::UInt64Converter * this_ptr, app::Object * value, app::NumberFormatInfo * format_info))
    IL2CPP_REGISTER_METHOD(0x01FE1B70, void, ctor, (app::UInt64Converter * this_ptr))
}
