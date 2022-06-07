#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::TriggerActionAnimator {
    IL2CPP_REGISTER_METHOD(0x00D123E0, void, OnStartPlayback, (app::TriggerActionAnimator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00D12410, void, ctor, (app::TriggerActionAnimator * this_ptr))
}
