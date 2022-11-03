#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HornBugBossTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x00B688F0, void, OnEntityInitialized, (app::HornBugBossTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B68AD0, void, Flip, (app::HornBugBossTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473BA00, HornBugBossTimelineBehaviour_Flip__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, RootMotionModifier, (app::HornBugBossTimelineBehaviour * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x00B68B70, void, OnEnter, (app::HornBugBossTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B68ED0, app::BehaviourStatus__Enum, OnExecute, (app::HornBugBossTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B68FA0, void, OnStopTimeline, (app::HornBugBossTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D3D8, HornBugBossTimelineBehaviour_OnStopTimeline__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B69160, void, OnExit, (app::HornBugBossTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B65470, void, ctor, (app::HornBugBossTimelineBehaviour * this_ptr))
} // namespace app::classes::HornBugBossTimelineBehaviour
