#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiderBossLaserAttackHorizontal {
    IL2CPP_REGISTER_METHOD(0x011B2120, void, OnEnter, (app::SpiderBossLaserAttackHorizontal * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011B2160, app::BehaviourStatus__Enum, OnExecute, (app::SpiderBossLaserAttackHorizontal * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011B21A0, void, OnExit, (app::SpiderBossLaserAttackHorizontal * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011B21F0, void, InitializeCancellableController, (app::SpiderBossLaserAttackHorizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B2240, void, InitializeHitReactionController, (app::SpiderBossLaserAttackHorizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B1480, void, ctor, (app::SpiderBossLaserAttackHorizontal * this_ptr))
}
