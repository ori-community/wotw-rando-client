#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBossAnimationPlayer.h>

namespace app::classes::Moon::Timeline::SpiderBossAnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x00D059A0, void, OnStartPlayback, app::SpiderBossAnimationPlayer* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00D05BC0, void, ctor, app::SpiderBossAnimationPlayer* this_ptr)
} // namespace app::classes::Moon::Timeline::SpiderBossAnimationPlayer
