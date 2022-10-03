#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WaterReflectionRenderer {
    IL2CPP_REGISTER_METHOD(0x008DFF60, void, Start, (app::WaterReflectionRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E0080, void, LateUpdate, (app::WaterReflectionRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WaterReflectionRenderer * this_ptr))
} // namespace app::classes::WaterReflectionRenderer
