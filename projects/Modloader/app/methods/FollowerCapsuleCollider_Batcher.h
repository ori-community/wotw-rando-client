#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FollowerCapsuleCollider_Batcher__Boxed.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::FollowerCapsuleCollider_Batcher {
    IL2CPP_REGISTER_METHOD(0x001257B0, void, RefreshCapacity, (app::FollowerCapsuleCollider_Batcher__Boxed * this_ptr, int32_t instance_count))
    IL2CPP_REGISTER_METHOD(0x001257C0, bool, RequestCapsule, (app::FollowerCapsuleCollider_Batcher__Boxed * this_ptr, app::CapsuleCollider* capsule, app::Transform* transform, app::Vector3 pos, app::Quaternion rot, float height))
    IL2CPP_REGISTER_METHOD(0x00125820, void, RemovePendingRequest, (app::FollowerCapsuleCollider_Batcher__Boxed * this_ptr, app::CapsuleCollider* capsule))
    IL2CPP_REGISTER_METHOD(0x00125830, void, Update, (app::FollowerCapsuleCollider_Batcher__Boxed * this_ptr))
} // namespace app::classes::FollowerCapsuleCollider_Batcher
