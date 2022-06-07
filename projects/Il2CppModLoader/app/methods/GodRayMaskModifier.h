#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GodRayMaskModifier {
    IL2CPP_REGISTER_METHOD(0x00800520, void, SetProperties, (app::GodRayMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800610, void, ctor, (app::GodRayMaskModifier * this_ptr))
}
