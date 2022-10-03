#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::TimescaleAnimator {
    IL2CPP_REGISTER_METHOD(0x00D0B430, void, OnStartPlayback, (app::TimescaleAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D0B4A0, float, GetTimeScaleToApply, (app::TimescaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0B600, void, OnUpdateEntity, (app::TimescaleAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00D0B730, void, OnStopPlayback, (app::TimescaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0B770, void, OnBeforeSerialize, (app::TimescaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (app::TimescaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0B7E0, void, ctor, (app::TimescaleAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::TimescaleAnimator
