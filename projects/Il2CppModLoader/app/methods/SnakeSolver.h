#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SnakeSolver {
    IL2CPP_REGISTER_METHOD(0x006D4160, int32_t, get_TotalJoints, (app::SnakeSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Vector2__Array*, get_Segments, (app::SnakeSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D41F0, float, get_Time, ())
    IL2CPP_REGISTER_METHOD(0x006D4240, void, OnEnable, (app::SnakeSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D4570, void, Update, (app::SnakeSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D5BB0, void, OnValidate, (app::SnakeSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D5D70, app::Vector2, RotateVector2, (app::SnakeSolver * this_ptr, app::Vector2 v, float degrees))
    IL2CPP_REGISTER_METHOD(0x006D5F60, float, Angle, (app::SnakeSolver * this_ptr, app::Vector2 v))
    IL2CPP_REGISTER_METHOD(0x006D6010, void, ctor, (app::SnakeSolver * this_ptr))
} // namespace app::classes::SnakeSolver
