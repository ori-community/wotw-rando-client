#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlFireProjectilesBehaviour.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::Moon::PetrifiedOwlFireProjectilesBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C34050, void, OnStartBehaviour, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C34600, void, OnUpdateBehaviour, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C34720, void, OnEndBehaviour, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C34AD0, float, GetScore, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C33F90, bool, EndCondition, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetBehaviour, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C34B60, void, StartShooting, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475CCE8, PetrifiedOwlFireProjectilesBehaviour_StartShooting__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00788D40, void, StopShooting, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716810, PetrifiedOwlFireProjectilesBehaviour_StopShooting__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C34BC0, void, Shoot, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr, app::ProjectileSpawner* spawner))
    IL2CPP_REGISTER_METHOD(0x00C34D40, float, GetSpawnInterval, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C34D90, void, FlipSpawnerDirection, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr, app::ProjectileSpawner* spawner))
    IL2CPP_REGISTER_METHOD(0x00C34DE0, bool, IsSeinToTheRight, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr, app::Transform* t))
    IL2CPP_REGISTER_METHOD(0x00C34F10, void, ctor, (app::PetrifiedOwlFireProjectilesBehaviour * this_ptr))
} // namespace app::classes::Moon::PetrifiedOwlFireProjectilesBehaviour
