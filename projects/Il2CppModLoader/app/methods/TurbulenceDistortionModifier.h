#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TurbulenceDistortionModifier {
    IL2CPP_REGISTER_METHOD(0x00B14990, void, ApplyMultipliers, (app::TurbulenceDistortionModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Randomize, (app::TurbulenceDistortionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B14D60, float, GetQuadExpandSize, (app::TurbulenceDistortionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B14E40, void, SetProperties, (app::TurbulenceDistortionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B14FA0, void, ctor, (app::TurbulenceDistortionModifier * this_ptr))
}
