#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LedgeDropBlockerAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::LedgeDropBlockerAnimator {
    IL2CPP_REGISTER_METHOD(0x00773340, void, OnStartPlayback, (app::LedgeDropBlockerAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00773580, void, Process, (app::LedgeDropBlockerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00773810, void, OnStopPlayback, (app::LedgeDropBlockerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00773A00, void, ctor, (app::LedgeDropBlockerAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::LedgeDropBlockerAnimator
