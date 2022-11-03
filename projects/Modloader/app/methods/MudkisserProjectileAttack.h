#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MudkisserProjectileAttack {
    IL2CPP_REGISTER_METHOD(0x00877830, void, Shoot, (app::MudkisserProjectileAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C3B8, MudkisserProjectileAttack_Shoot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00877AC0, void, SpawnProjectile, (app::MudkisserProjectileAttack * this_ptr, app::Vector2 shoot_point, app::Vector3 shoot_velocity))
    IL2CPP_REGISTER_METHOD(0x00877D80, void, OnEntityInitialized, (app::MudkisserProjectileAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00877E20, app::BehaviourStatus__Enum, OnExecute, (app::MudkisserProjectileAttack * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008780B0, void, OnEnter, (app::MudkisserProjectileAttack * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008784C0, void, Aim, (app::MudkisserProjectileAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743450, MudkisserProjectileAttack_Aim__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008785B0, void, DisableProjectile, (app::MudkisserProjectileAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008785D0, void, EnableProjectile, (app::MudkisserProjectileAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008785F0, void, PullOut, (app::MudkisserProjectileAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047898C8, MudkisserProjectileAttack_PullOut__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008789B0, void, OnExit, (app::MudkisserProjectileAttack * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00878EB0, void, ctor, (app::MudkisserProjectileAttack * this_ptr))
} // namespace app::classes::MudkisserProjectileAttack
