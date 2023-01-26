#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MultiplyLayerThirdModifier.h>

namespace app::classes::MultiplyLayerThirdModifier {
    IL2CPP_REGISTER_METHOD(0x0087BFC0, void, ApplyMultipliers, (app::MultiplyLayerThirdModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x0087D6C0, void, SetProperties, (app::MultiplyLayerThirdModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C180, bool, get_IsWorldRotation, (app::MultiplyLayerThirdModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C1C0, bool, DoStrip, (app::MultiplyLayerThirdModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087D7F0, void, Update, (app::MultiplyLayerThirdModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087D830, void, UpdateWorldRotation, (app::MultiplyLayerThirdModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087DA20, void, ctor, (app::MultiplyLayerThirdModifier * this_ptr))
} // namespace app::classes::MultiplyLayerThirdModifier
