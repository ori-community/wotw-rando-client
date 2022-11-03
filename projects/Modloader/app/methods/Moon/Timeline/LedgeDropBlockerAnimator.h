#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::LedgeDropBlockerAnimator {
    IL2CPP_REGISTER_METHOD(0x00773340, void, OnStartPlayback, (app::LedgeDropBlockerAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00773580, void, Process, (app::LedgeDropBlockerAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E718, LedgeDropBlockerAnimator_Process__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00773810, void, OnStopPlayback, (app::LedgeDropBlockerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00773A00, void, ctor, (app::LedgeDropBlockerAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::LedgeDropBlockerAnimator
