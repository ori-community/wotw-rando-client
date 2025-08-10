#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/HornBugBossRollBackBehaviour_new.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IDamageReciever.h>

namespace app::classes::HornBugBossRollBackBehaviour_new {
    IL2CPP_REGISTER_METHOD(
        0x00B68320,
        app::Damage*,
        TweakDamage,
        app::HornBugBossRollBackBehaviour_new* this_ptr,
        app::Damage* dmg,
        app::DamageDealer* dealer,
        app::IDamageReciever* reciever
    )
    IL2CPP_REGISTER_METHOD(0x00B68340, void, OnEnter, app::HornBugBossRollBackBehaviour_new* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B685B0, void, OnExit, app::HornBugBossRollBackBehaviour_new* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B65470, void, ctor, app::HornBugBossRollBackBehaviour_new* this_ptr)
} // namespace app::classes::HornBugBossRollBackBehaviour_new
