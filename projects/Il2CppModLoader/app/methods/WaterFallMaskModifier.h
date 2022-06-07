#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WaterFallMaskModifier {
    IL2CPP_REGISTER_METHOD(0x008D6620, void, Randomize, (app::WaterFallMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D6630, void, ApplyMultipliers, (app::WaterFallMaskModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, (app::WaterFallMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D66C0, void, SetProperties, (app::WaterFallMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D6820, void, ctor, (app::WaterFallMaskModifier * this_ptr))
}
