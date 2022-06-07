#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::SpiderBossAnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x00D059A0, void, OnStartPlayback, (app::SpiderBossAnimationPlayer * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00D05BC0, void, ctor, (app::SpiderBossAnimationPlayer * this_ptr))
}
