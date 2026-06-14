#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/OneWayCapsuleCollider.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::OneWayCapsuleCollider {
    IL2CPP_REGISTER_METHOD(0x00615290, void, OnValidate, app::OneWayCapsuleCollider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00615370, void, Start, app::OneWayCapsuleCollider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006159C0, void, OnTriggerStay, app::OneWayCapsuleCollider* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x00615F70, void, OnTriggerExit, app::OneWayCapsuleCollider* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x00616150, app::Vector3, get_CollisionDirection, app::OneWayCapsuleCollider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00616370, app::Vector3, get_CapsuleDirection, app::OneWayCapsuleCollider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00616460, bool, IsInLayerMask, app::OneWayCapsuleCollider* this_ptr, int32_t layer, app::LayerMask layermask)
    IL2CPP_REGISTER_METHOD(0x00616480, void, OnDrawGizmosSelected, app::OneWayCapsuleCollider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00617040, void, ctor, app::OneWayCapsuleCollider* this_ptr)
} // namespace app::classes::OneWayCapsuleCollider
