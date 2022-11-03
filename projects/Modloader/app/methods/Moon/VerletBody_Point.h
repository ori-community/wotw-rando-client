#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::VerletBody_Point {
    IL2CPP_REGISTER_METHOD(0x00C1B1E0, app::Vector3, get_Acceleration, (app::VerletBody_Point * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1B200, void, set_Acceleration, (app::VerletBody_Point * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_Damping, (app::VerletBody_Point * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447350, void, set_Damping, (app::VerletBody_Point * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02126E60, float, get_Mass, (app::VerletBody_Point * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02126E70, void, set_Mass, (app::VerletBody_Point * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_InverseMass, (app::VerletBody_Point * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_InverseMass, (app::VerletBody_Point * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0167FE90, app::Vector3, get_Position, (app::VerletBody_Point * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0167FEB0, void, set_Position, (app::VerletBody_Point * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x007EC230, app::Vector3, get_PreviousPosition, (app::VerletBody_Point * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C51C0, void, set_PreviousPosition, (app::VerletBody_Point * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x02126F60, void, ctor, (app::VerletBody_Point * this_ptr, app::Vector3 position, float mass, float damping))
    IL2CPP_REGISTER_METHOD(0x02127060, void, AddForce, (app::VerletBody_Point * this_ptr, app::Vector3 force))
    IL2CPP_REGISTER_METHOD(0x02127170, void, AddAcceleration, (app::VerletBody_Point * this_ptr, app::Vector3 acceleration))
    IL2CPP_REGISTER_METHOD(0x02127280, void, Update, (app::VerletBody_Point * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x02127450, void, cctor, ())
} // namespace app::classes::Moon::VerletBody_Point
