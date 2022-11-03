#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GlowChargeEffect {
    IL2CPP_REGISTER_METHOD(0x007FAA40, void, Awake, (app::GlowChargeEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FAC20, void, OnEnable, (app::GlowChargeEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FAC30, void, OnDisable, (app::GlowChargeEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FAC40, void, OnDestroy, (app::GlowChargeEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::GlowChargeEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FAE20, void, CancelCharge, (app::GlowChargeEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FAE40, void, OnChargeTimelineEnded, (app::GlowChargeEffect * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B8E8, GlowChargeEffect_OnChargeTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x007FAF30, void, OnCancelTimelineEnded, (app::GlowChargeEffect * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047998C0, GlowChargeEffect_OnCancelTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x007FB020, void, OnChargeCompletedTrigger, (app::GlowChargeEffect * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473FFD0, GlowChargeEffect_OnChargeCompletedTrigger__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x007FB040, void, ChangeState, (app::GlowChargeEffect * this_ptr, app::GlowChargeEffect_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x007FB710, void, ctor, (app::GlowChargeEffect * this_ptr))
} // namespace app::classes::GlowChargeEffect
