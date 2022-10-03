#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::EntityControllerBT {
    IL2CPP_REGISTER_METHOD(0x00C8E0A0, void, FixedUpdate, (app::EntityControllerBT * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEnd, (app::EntityControllerBT * this_ptr, app::TextureAnimation* anim))
    IL2CPP_REGISTER_METHOD(0x00C8E230, void, OnRecieveDamage, (app::EntityControllerBT * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeached, (app::EntityControllerBT * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00C8E440, void, OnCollisionEnter, (app::EntityControllerBT * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCollisionStay, (app::EntityControllerBT * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCollisionExit, (app::EntityControllerBT * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (app::EntityControllerBT * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00C8E640, void, ctor, (app::EntityControllerBT * this_ptr))
} // namespace app::classes::EntityControllerBT
