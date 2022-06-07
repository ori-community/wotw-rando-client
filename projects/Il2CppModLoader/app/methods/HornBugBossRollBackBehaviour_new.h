#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HornBugBossRollBackBehaviour_new {
    IL2CPP_REGISTER_METHOD(0x00B68320, app::Damage *, TweakDamage, (app::HornBugBossRollBackBehaviour_new * this_ptr, app::Damage * dmg, app::DamageDealer * dealer, app::IDamageReciever * reciever))
    IL2CPP_REGISTER_METHODINFO(0x04790970, HornBugBossRollBackBehaviour_new_TweakDamage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B68340, void, OnEnter, (app::HornBugBossRollBackBehaviour_new * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00B685B0, void, OnExit, (app::HornBugBossRollBackBehaviour_new * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00B65470, void, ctor, (app::HornBugBossRollBackBehaviour_new * this_ptr))
}
