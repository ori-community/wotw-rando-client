#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MaskModifier.h>

namespace app::classes::MaskModifier {
    IL2CPP_REGISTER_METHOD(0x00A10DA0, void, Randomize, (app::MaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A10DB0, void, ApplyMultipliers, (app::MaskModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, (app::MaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A11160, void, SetProperties, (app::MaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A11250, void, ctor, (app::MaskModifier * this_ptr))
} // namespace app::classes::MaskModifier
