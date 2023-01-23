#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BushSetupController.h>
#include <Modloader/app/structs/BushSetupController_State__Enum.h>

namespace app::classes::BushSetupController {
    IL2CPP_REGISTER_METHOD(0x0081CD00, void, FixedUpdate, (app::BushSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081CD10, void, UpdateState, (app::BushSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081CF00, void, ChangeState, (app::BushSetupController * this_ptr, app::BushSetupController_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x0081DA70, void, NoticeSeinOnAnimationEnd, (app::BushSetupController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472FF58, BushSetupController_NoticeSeinOnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0081DBF0, void, RockFallOnAnimatoinEnd, (app::BushSetupController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478F978, BushSetupController_RockFallOnAnimatoinEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0081DD80, void, RockReachOnAnimatoinEnd, (app::BushSetupController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047459E0, BushSetupController_RockReachOnAnimatoinEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0081DD90, void, RockReachToLiftSeinOnAnimatoinEnd, (app::BushSetupController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716B98, BushSetupController_RockReachToLiftSeinOnAnimatoinEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0081DDA0, void, LiftSeinToRockReachOnAnimatoinEnd, (app::BushSetupController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477BA60, BushSetupController_LiftSeinToRockReachOnAnimatoinEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0081DD90, void, KneelingRockToLiftSeinOnAnimatoinEnd, (app::BushSetupController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753C10, BushSetupController_KneelingRockToLiftSeinOnAnimatoinEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0081DDB0, void, PlayerCollisionTrigger, (app::BushSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081DFD0, void, NoticeSeinTrigger, (app::BushSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BushSetupController * this_ptr))
} // namespace app::classes::BushSetupController
