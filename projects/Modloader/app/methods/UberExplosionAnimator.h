#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberExplosionAnimator.h>

namespace app::classes::UberExplosionAnimator {
    IL2CPP_REGISTER_METHOD(0x013E87A0, app::Transform*, get_Actor, app::UberExplosionAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013E8880, void, UpdateDirectionVector, app::UberExplosionAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013E8B40, void, OnUpdateEntity, app::UberExplosionAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x013E8BA0, void, OnStartPlayback, app::UberExplosionAnimator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, app::UberExplosionAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, app::UberExplosionAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013E8BE0, void, OnStartWhenPlaybackOrPreview, app::UberExplosionAnimator* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopWhenPlaybackOrPreview, app::UberExplosionAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013E8C10, void, UpdateAtTime, app::UberExplosionAnimator* this_ptr, float time_value)
    IL2CPP_REGISTER_METHOD(0x013E8C70, void, ExplodeAtCurrentTime, app::UberExplosionAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013E8CD0, void, Explode, app::UberExplosionAnimator* this_ptr, float weight, float start_time, bool force_play)
    IL2CPP_REGISTER_METHOD(0x013E90F0, bool, InArcMode, app::UberExplosionAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013E9100, void, OnDrawGizmosSelected, app::UberExplosionAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013E93E0, void, ctor, app::UberExplosionAnimator* this_ptr)
} // namespace app::classes::UberExplosionAnimator
