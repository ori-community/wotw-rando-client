#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GrabbableSurfaceMovingWheel {
    IL2CPP_REGISTER_METHOD(0x01081AA0, bool, get_IsMoving, (app::GrabbableSurfaceMovingWheel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01081C20, float, get_AngularSpeed, (app::GrabbableSurfaceMovingWheel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01081F30, void, Awake, (app::GrabbableSurfaceMovingWheel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01082050, app::Vector2, GetVelocityAtPoint_1, (app::GrabbableSurfaceMovingWheel * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x01082070, app::Vector2, GetVelocityAtPoint_2, (app::GrabbableSurfaceMovingWheel * this_ptr, app::Vector2 point, app::Vector2 * point_on_circle))
    IL2CPP_REGISTER_METHOD(0x01082850, void, ctor, (app::GrabbableSurfaceMovingWheel * this_ptr))
}
