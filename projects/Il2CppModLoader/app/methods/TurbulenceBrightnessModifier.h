#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TurbulenceBrightnessModifier {
    IL2CPP_REGISTER_METHOD(0x00B14850, void, Randomize, (app::TurbulenceBrightnessModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B14990, void, ApplyMultipliers, (app::TurbulenceBrightnessModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00B14A00, void, SetProperties, (app::TurbulenceBrightnessModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B14AF0, void, ctor, (app::TurbulenceBrightnessModifier * this_ptr))
}
