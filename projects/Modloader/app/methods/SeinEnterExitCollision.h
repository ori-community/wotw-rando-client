#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/SeinEnterExitCollision.h>

namespace app::classes::SeinEnterExitCollision {
    IL2CPP_REGISTER_METHOD(0x00AD0BD0, void, OnTriggerEnter, app::SeinEnterExitCollision* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x00AD0BE0, void, OnTriggerExit, app::SeinEnterExitCollision* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x00AD0BF0, void, OnCollisionEnter, app::SeinEnterExitCollision* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00AD0C20, void, OnCollisionExit, app::SeinEnterExitCollision* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00AD0C50, void, OnEnter, app::SeinEnterExitCollision* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x00AD0D90, void, OnExit, app::SeinEnterExitCollision* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x00AD0ED0, bool, IsPlayer, app::SeinEnterExitCollision* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x005D1790, void, ctor, app::SeinEnterExitCollision* this_ptr)
} // namespace app::classes::SeinEnterExitCollision
