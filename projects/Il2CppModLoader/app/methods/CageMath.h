#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CageMath {
    IL2CPP_REGISTER_METHOD(0x00823240, bool, IsPointInsideCage, (app::Vector2 point, app::CageStructureTool* cage))
    IL2CPP_REGISTER_METHOD(0x00823620, float, GetAngle, (app::Vector2 A, app::Vector2 B, app::Vector2 C))
    IL2CPP_REGISTER_METHOD(0x00823730, float, DotProduct, (app::Vector2 A, app::Vector2 B, app::Vector2 C))
    IL2CPP_REGISTER_METHOD(0x00823780, float, CrossProductLength, (app::Vector2 A, app::Vector2 B, app::Vector2 C))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CageMath * this_ptr))
} // namespace app::classes::CageMath
