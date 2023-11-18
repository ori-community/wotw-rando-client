#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GradientRemapModifier.h>

namespace app::classes::GradientRemapModifier {
    IL2CPP_REGISTER_METHOD(0x01082920, void, SetProperties, (app::GradientRemapModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01082AC0, void, ctor, (app::GradientRemapModifier * this_ptr))
} // namespace app::classes::GradientRemapModifier
