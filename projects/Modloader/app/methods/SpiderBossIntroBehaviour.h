#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiderBossIntroBehaviour {
    IL2CPP_REGISTER_METHOD(0x011AF490, void, OnEnterTask, (app::SpiderBossIntroBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011AF7C0, void, OnExitTask, (app::SpiderBossIntroBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011AFBA0, void, OnTransitionEvent, (app::SpiderBossIntroBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04700B78, SpiderBossIntroBehaviour_OnTransitionEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010F6E90, void, ctor, (app::SpiderBossIntroBehaviour * this_ptr))
} // namespace app::classes::SpiderBossIntroBehaviour
