#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RotationAnimationModifier {
    IL2CPP_REGISTER_METHOD(0x009328B0, void, ApplyMultipliers, (app::RotationAnimationModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x01370A80, void, SetProperties, (app::RotationAnimationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00932A30, void, Randomize, (app::RotationAnimationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01370BE0, void, ctor, (app::RotationAnimationModifier * this_ptr))
}
