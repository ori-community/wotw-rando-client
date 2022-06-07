#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AdditiveLayerDistortedModifier {
    IL2CPP_REGISTER_METHOD(0x004CA140, void, ApplyMultipliers, (app::AdditiveLayerDistortedModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x004CA180, void, SetProperties, (app::AdditiveLayerDistortedModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004CA320, void, ctor, (app::AdditiveLayerDistortedModifier * this_ptr))
}
