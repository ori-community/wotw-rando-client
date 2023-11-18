#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DodgeLayerModifier.h>

namespace app::classes::DodgeLayerModifier {
    IL2CPP_REGISTER_METHOD(0x0087BFC0, void, ApplyMultipliers, (app::DodgeLayerModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00B9B650, void, SetProperties, (app::DodgeLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C180, bool, get_IsWorldRotation, (app::DodgeLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C1C0, bool, DoStrip, (app::DodgeLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9B780, void, Update, (app::DodgeLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9B7C0, void, UpdateWorldRotation, (app::DodgeLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9B9B0, void, ctor, (app::DodgeLayerModifier * this_ptr))
} // namespace app::classes::DodgeLayerModifier
