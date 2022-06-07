#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::UInt16Converter {
    IL2CPP_REGISTER_METHOD(0x0295CEB0, app::Type *, get_TargetType, (app::UInt16Converter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0295CF50, app::Object *, FromString_1, (app::UInt16Converter * this_ptr, app::String * value, int32_t radix))
    IL2CPP_REGISTER_METHOD(0x0295D110, app::Object *, FromString_2, (app::UInt16Converter * this_ptr, app::String * value, app::NumberFormatInfo * format_info))
    IL2CPP_REGISTER_METHOD(0x0295D1D0, app::Object *, FromString_3, (app::UInt16Converter * this_ptr, app::String * value, app::CultureInfo * culture))
    IL2CPP_REGISTER_METHOD(0x0295D280, app::String *, ToString, (app::UInt16Converter * this_ptr, app::Object * value, app::NumberFormatInfo * format_info))
    IL2CPP_REGISTER_METHOD(0x01FE1B70, void, ctor, (app::UInt16Converter * this_ptr))
}
