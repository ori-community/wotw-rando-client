#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SphereColliderAnimator.h>
#include <Modloader/app/structs/UpdateCategory__Enum.h>

namespace app::classes::SphereColliderAnimator {
    IL2CPP_REGISTER_METHOD(0x00417920, app::UpdateCategory__Enum, get_UpdateCategory, app::SphereColliderAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00952C10, app::GameObject*, get_ExternalTarget, app::SphereColliderAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, app::SphereColliderAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00952CC0, void, OnStartPlayback, app::SphereColliderAnimator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, app::SphereColliderAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00952E10, void, OnUpdateEntity, app::SphereColliderAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00952E90, void, ctor, app::SphereColliderAnimator* this_ptr)
} // namespace app::classes::SphereColliderAnimator
