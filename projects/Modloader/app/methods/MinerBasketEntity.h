#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MinerBasketEntity {
    IL2CPP_REGISTER_METHOD(0x01445560, void, Awake, (app::MinerBasketEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01445620, void, FixedUpdate, (app::MinerBasketEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01445FF0, void, OnCollisionStay, (app::MinerBasketEntity * this_ptr, app::Collision* collision_info))
    IL2CPP_REGISTER_METHOD(0x01446190, void, ctor, (app::MinerBasketEntity * this_ptr))
} // namespace app::classes::MinerBasketEntity
