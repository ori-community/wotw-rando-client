#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RotationAnimationModifier.h>

namespace app::classes::RotationAnimationModifier {
    IL2CPP_REGISTER_METHOD(0x009328B0, void, ApplyMultipliers, app::RotationAnimationModifier* this_ptr, float strength, float speed)
    IL2CPP_REGISTER_METHOD(0x01370A80, void, SetProperties, app::RotationAnimationModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00932A30, void, Randomize, app::RotationAnimationModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01370BE0, void, ctor, app::RotationAnimationModifier* this_ptr)
} // namespace app::classes::RotationAnimationModifier
