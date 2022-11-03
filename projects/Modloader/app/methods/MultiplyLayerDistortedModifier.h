#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MultiplyLayerDistortedModifier {
    IL2CPP_REGISTER_METHOD(0x0087A2E0, void, ApplyMultipliers, (app::MultiplyLayerDistortedModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x0087ACE0, void, SetProperties, (app::MultiplyLayerDistortedModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087AF30, void, ctor, (app::MultiplyLayerDistortedModifier * this_ptr))
} // namespace app::classes::MultiplyLayerDistortedModifier
