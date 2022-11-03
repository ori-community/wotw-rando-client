#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SwapSpiderBossBehaviourZoneIdleAction {
    IL2CPP_REGISTER_METHOD(0x00676F10, app::String*, get_Info, (app::SwapSpiderBossBehaviourZoneIdleAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00676FC0, bool, OnExecute, (app::SwapSpiderBossBehaviourZoneIdleAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x006771B0, void, ctor, (app::SwapSpiderBossBehaviourZoneIdleAction * this_ptr))
} // namespace app::classes::SwapSpiderBossBehaviourZoneIdleAction
