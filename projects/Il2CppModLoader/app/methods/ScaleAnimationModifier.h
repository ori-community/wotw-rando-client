#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ScaleAnimationModifier {
    IL2CPP_REGISTER_METHOD(0x009328B0, void, ApplyMultipliers, (app::ScaleAnimationModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x009328E0, void, SetProperties, (app::ScaleAnimationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00932A30, void, Randomize, (app::ScaleAnimationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00932A90, void, ctor, (app::ScaleAnimationModifier * this_ptr))
}
