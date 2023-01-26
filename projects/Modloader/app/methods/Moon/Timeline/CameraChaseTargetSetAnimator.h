#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraChaseTargetSetAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::CameraChaseTargetSetAnimator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::CameraChaseTargetSetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C8890, void, OnStartPlayback, (app::CameraChaseTargetSetAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010C8A70, void, OnStopPlayback, (app::CameraChaseTargetSetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C8BB0, void, ctor, (app::CameraChaseTargetSetAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::CameraChaseTargetSetAnimator
