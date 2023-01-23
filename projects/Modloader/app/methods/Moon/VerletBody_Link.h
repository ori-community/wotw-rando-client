#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VerletBody_Point.h>
#include <Modloader/app/structs/VerletBody_Link.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::VerletBody_Link {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::VerletBody_Point*, get_Point0, (app::VerletBody_Link * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::VerletBody_Point*, get_Point1, (app::VerletBody_Link * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_RestDistance, (app::VerletBody_Link * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A64050, void, set_RestDistance, (app::VerletBody_Link * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00E2F880, float, get_Stiffness, (app::VerletBody_Link * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012219F0, void, set_Stiffness, (app::VerletBody_Link * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x021267A0, app::Vector3, get_Direction, (app::VerletBody_Link * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02126940, void, ctor, (app::VerletBody_Link * this_ptr, app::VerletBody_Point* p0, app::VerletBody_Point* p1, float rest_distance, float stiffness))
    IL2CPP_REGISTER_METHOD(0x02126960, void, Rotate, (app::VerletBody_Link * this_ptr, float angle, app::Vector3 axis))
    IL2CPP_REGISTER_METHOD(0x02126B70, void, Update, (app::VerletBody_Link * this_ptr, float dt))
} // namespace app::classes::Moon::VerletBody_Link
