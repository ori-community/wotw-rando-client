#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/EntityControllerSM.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::EntityControllerSM {
    IL2CPP_REGISTER_METHOD(0x00C8E790, void, FixedUpdate, app::EntityControllerSM* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8EA10, void, OnAnimationEnd, app::EntityControllerSM* this_ptr, app::TextureAnimation* anim)
    IL2CPP_REGISTER_METHOD(0x00C8EB00, void, OnRecieveDamage, app::EntityControllerSM* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00C8EC70, void, OnSpiritLeached, app::EntityControllerSM* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00C8EDE0, void, OnCollisionEnter, app::EntityControllerSM* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00C8EF40, void, OnCollisionStay, app::EntityControllerSM* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00C8F0A0, void, OnCollisionExit, app::EntityControllerSM* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowCurrentStateClassName, app::EntityControllerSM* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8F200, void, Serialize, app::EntityControllerSM* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x006C51F0, void, ctor, app::EntityControllerSM* this_ptr)
} // namespace app::classes::EntityControllerSM
