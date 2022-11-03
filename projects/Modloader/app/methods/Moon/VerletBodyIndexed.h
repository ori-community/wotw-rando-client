#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::VerletBodyIndexed {
    IL2CPP_REGISTER_METHOD(0x021274D0, int32_t, AddPoint, (app::VerletBodyIndexed * this_ptr, app::Vector3 position, float mass, float damping))
    IL2CPP_REGISTER_METHOD(0x021277C0, int32_t, AddLink, (app::VerletBodyIndexed * this_ptr, int32_t index_p0, int32_t index_p1, float rest_distance, float stiffness))
    IL2CPP_REGISTER_METHOD(0x02127A40, int32_t, AddAngularConstraint, (app::VerletBodyIndexed * this_ptr, int32_t index_l0, int32_t index_l1, float max_angle))
    IL2CPP_REGISTER_METHOD(0x02127CA0, void, Update, (app::VerletBodyIndexed * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x02128EF0, void, Clear, (app::VerletBodyIndexed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02128FA0, app::Vector3, GetPointPosition, (app::VerletBodyIndexed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02129000, void, SetPointCurrentAndPrevPositions, (app::VerletBodyIndexed * this_ptr, int32_t index, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x02129070, void, AddForceToPoint, (app::VerletBodyIndexed * this_ptr, int32_t index, app::Vector3 force))
    IL2CPP_REGISTER_METHOD(0x021290D0, void, SetLinkRestDistance, (app::VerletBodyIndexed * this_ptr, int32_t index, float distance))
    IL2CPP_REGISTER_METHOD(0x02129110, void, ctor, (app::VerletBodyIndexed * this_ptr))
} // namespace app::classes::Moon::VerletBodyIndexed
