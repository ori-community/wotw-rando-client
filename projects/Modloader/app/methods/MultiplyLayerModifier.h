#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MultiplyLayerModifier {
    IL2CPP_REGISTER_METHOD(0x0087BFC0, void, ApplyMultipliers, (app::MultiplyLayerModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x0087C710, void, SetProperties, (app::MultiplyLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C180, bool, get_IsWorldRotation, (app::MultiplyLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C1C0, bool, DoStrip, (app::MultiplyLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C820, void, OnEnable, (app::MultiplyLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C970, void, OnDisable, (app::MultiplyLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087CAC0, void, UpdateModifier, (app::MultiplyLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087CB00, void, UpdateWorldRotation, (app::MultiplyLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087CCF0, void, ctor, (app::MultiplyLayerModifier * this_ptr))
} // namespace app::classes::MultiplyLayerModifier
