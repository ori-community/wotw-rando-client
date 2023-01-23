#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiderBossLaserAttack.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::SpiderBossLaserAttack {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SpiderBossLaserAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011AFCB0, bool, get_IsAttacking, (app::SpiderBossLaserAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011AFDF0, void, OnEnter, (app::SpiderBossLaserAttack * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B03A0, void, StartAttack, (app::SpiderBossLaserAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B0510, void, StopAttack, (app::SpiderBossLaserAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B0660, app::BehaviourStatus__Enum, OnExecute, (app::SpiderBossLaserAttack * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B0750, void, OnExit, (app::SpiderBossLaserAttack * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B0DB0, void, UpdateAngle, (app::SpiderBossLaserAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B0F00, void, UpdateAiming, (app::SpiderBossLaserAttack * this_ptr, float angle))
    IL2CPP_REGISTER_METHOD(0x011B0FB0, void, InstantiateChargeFX, (app::SpiderBossLaserAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716D18, SpiderBossLaserAttack_InstantiateChargeFX__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011B1390, void, DestroyChargeFX, (app::SpiderBossLaserAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777788, SpiderBossLaserAttack_DestroyChargeFX__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011B1480, void, ctor, (app::SpiderBossLaserAttack * this_ptr))
} // namespace app::classes::SpiderBossLaserAttack
