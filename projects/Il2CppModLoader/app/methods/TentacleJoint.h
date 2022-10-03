#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TentacleJoint {
    IL2CPP_REGISTER_METHOD(0x010CDB80, void, add_ReceiveDamageCallback, (app::TentacleJoint * this_ptr, app::Action_2_Damage_Int32_* value))
    IL2CPP_REGISTER_METHOD(0x010CDC70, void, remove_ReceiveDamageCallback, (app::TentacleJoint * this_ptr, app::Action_2_Damage_Int32_* value))
    IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (app::TentacleJoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CDD60, void, OnRecieveDamage, (app::TentacleJoint * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x010CDF10, void, ctor, (app::TentacleJoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::TentacleJoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::TentacleJoint * this_ptr))
} // namespace app::classes::TentacleJoint
