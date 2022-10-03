#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::HornBugBossBullChargeBehaviour {
    IL2CPP_REGISTER_METHOD(0x00B606F0, void, OnEntityInitialized, (app::HornBugBossBullChargeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B60C60, void, PlayTimeline, (app::HornBugBossBullChargeBehaviour * this_ptr, app::MoonTimeline* timeline, bool root_motion, float time_scale))
    IL2CPP_REGISTER_METHOD(0x00B60D50, void, OnEnter, (app::HornBugBossBullChargeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B60DD0, void, OnStopEvent, (app::HornBugBossBullChargeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475F950, HornBugBossBullChargeBehaviour_OnStopEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B60F60, app::BehaviourStatus__Enum, OnExecute, (app::HornBugBossBullChargeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B610E0, void, OnExit, (app::HornBugBossBullChargeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B61180, void, UpdateRun, (app::HornBugBossBullChargeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B61820, void, SpawnImpactEffect, (app::HornBugBossBullChargeBehaviour * this_ptr, app::Vector2 point, app::Vector2 normal))
    IL2CPP_REGISTER_METHOD(0x00B61A10, void, ctor, (app::HornBugBossBullChargeBehaviour * this_ptr))
} // namespace app::classes::HornBugBossBullChargeBehaviour
