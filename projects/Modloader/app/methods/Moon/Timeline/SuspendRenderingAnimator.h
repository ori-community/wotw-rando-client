#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SuspendRenderingAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::SuspendRenderingAnimator {
    IL2CPP_REGISTER_METHOD(0x01E83130, void, OnStartPlayback, (app::SuspendRenderingAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E834C0, void, OnUpdateEntity, (app::SuspendRenderingAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E835C0, void, ctor, (app::SuspendRenderingAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::SuspendRenderingAnimator
