#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::Int16Converter {
    IL2CPP_REGISTER_METHOD(0x01FEEFA0, app::Type *, get_TargetType, (app::Int16Converter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEF040, app::Object *, FromString_1, (app::Int16Converter * this_ptr, app::String * value, int32_t radix))
    IL2CPP_REGISTER_METHOD(0x01FEF220, app::Object *, FromString_2, (app::Int16Converter * this_ptr, app::String * value, app::CultureInfo * culture))
    IL2CPP_REGISTER_METHOD(0x01FEF2D0, app::Object *, FromString_3, (app::Int16Converter * this_ptr, app::String * value, app::NumberFormatInfo * format_info))
    IL2CPP_REGISTER_METHOD(0x01FEF390, app::String *, ToString, (app::Int16Converter * this_ptr, app::Object * value, app::NumberFormatInfo * format_info))
    IL2CPP_REGISTER_METHOD(0x01FE1B70, void, ctor, (app::Int16Converter * this_ptr))
}
