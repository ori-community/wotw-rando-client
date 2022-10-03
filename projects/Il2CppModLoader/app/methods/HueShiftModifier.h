#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::HueShiftModifier {
    IL2CPP_REGISTER_METHOD(0x00B6FC80, void, SetProperties, (app::HueShiftModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B6FD40, void, ctor, (app::HueShiftModifier * this_ptr))
} // namespace app::classes::HueShiftModifier
