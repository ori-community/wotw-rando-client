#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberShaderColorMultiplyAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_TargetName, (app::UberShaderColorMultiplyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_TargetName, (app::UberShaderColorMultiplyAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::UberShaderColorMultiplyAttribute * this_ptr, app::String* target_name))
} // namespace app::classes::UberShaderColorMultiplyAttribute
