#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MultiplyLayerDistortedExtraModifier {
    IL2CPP_REGISTER_METHOD(0x0087A2E0, void, ApplyMultipliers, (app::MultiplyLayerDistortedExtraModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x0087A370, void, SetProperties, (app::MultiplyLayerDistortedExtraModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087A5C0, void, ctor, (app::MultiplyLayerDistortedExtraModifier * this_ptr))
} // namespace app::classes::MultiplyLayerDistortedExtraModifier
