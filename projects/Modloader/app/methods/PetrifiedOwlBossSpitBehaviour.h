#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossSpitBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PetrifiedOwlBossSpitBehaviour {
    IL2CPP_REGISTER_METHOD(0x0177E780, int32_t, get_ShotsLeft, (app::PetrifiedOwlBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177E790, void, CopyData, (app::PetrifiedOwlBossSpitBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x0177E990, void, OnEnter, (app::PetrifiedOwlBossSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0177ED90, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0177EFB0, void, OnExit, (app::PetrifiedOwlBossSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0177F290, void, StartShootProcess, (app::PetrifiedOwlBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177F2C0, void, OnShootEvent, (app::PetrifiedOwlBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177F430, app::Projectile*, SpawnProjectile, (app::PetrifiedOwlBossSpitBehaviour * this_ptr, app::Vector2 shoot_point, app::Vector3 shoot_velocity))
    IL2CPP_REGISTER_METHOD(0x0177F890, void, ctor, (app::PetrifiedOwlBossSpitBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossSpitBehaviour
