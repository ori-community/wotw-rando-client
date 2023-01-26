#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaterFallMaskModifier.h>

namespace app::classes::WaterFallMaskModifier {
    IL2CPP_REGISTER_METHOD(0x008D6620, void, Randomize, (app::WaterFallMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D6630, void, ApplyMultipliers, (app::WaterFallMaskModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, (app::WaterFallMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D66C0, void, SetProperties, (app::WaterFallMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D6820, void, ctor, (app::WaterFallMaskModifier * this_ptr))
} // namespace app::classes::WaterFallMaskModifier
