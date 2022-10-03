#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberWaterEdge {
    IL2CPP_REGISTER_METHOD(0x0129E7A0, void, OnEnable, (app::UberWaterEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129E980, void, OnDisable, (app::UberWaterEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129EA40, void, BindShaderVariablesToMaterial, (app::UberWaterEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129EC00, void, ctor, (app::UberWaterEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129EC20, void, cctor, ())
} // namespace app::classes::UberWaterEdge
