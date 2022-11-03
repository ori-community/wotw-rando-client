#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KwolokBossCleanWaterPhaseStartBehaviour {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, (app::KwolokBossCleanWaterPhaseStartBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, (app::KwolokBossCleanWaterPhaseStartBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::KwolokBossCleanWaterPhaseStartBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01250E20, void, OnEntityInitialized, (app::KwolokBossCleanWaterPhaseStartBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01251070, void, OnEnter, (app::KwolokBossCleanWaterPhaseStartBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01251320, app::BehaviourStatus__Enum, OnExecute, (app::KwolokBossCleanWaterPhaseStartBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012513C0, void, OnExit, (app::KwolokBossCleanWaterPhaseStartBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01251660, void, RequestGoToCenter, (app::KwolokBossCleanWaterPhaseStartBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012517A0, void, ClearMoveRequest, (app::KwolokBossCleanWaterPhaseStartBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01251800, void, ModifyDesiredLookAngle, (app::KwolokBossCleanWaterPhaseStartBehaviour * this_ptr, float* angle))
    IL2CPP_REGISTER_METHODINFO(0x047206C0, KwolokBossCleanWaterPhaseStartBehaviour_ModifyDesiredLookAngle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01251810, void, ModifyBodyHeight, (app::KwolokBossCleanWaterPhaseStartBehaviour * this_ptr, float* height))
    IL2CPP_REGISTER_METHODINFO(0x0478E040, KwolokBossCleanWaterPhaseStartBehaviour_ModifyBodyHeight__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01251870, void, ctor, (app::KwolokBossCleanWaterPhaseStartBehaviour * this_ptr))
} // namespace app::classes::KwolokBossCleanWaterPhaseStartBehaviour
