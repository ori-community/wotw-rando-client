#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LaserShooterHommingMissleAttackBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/List_1_DynamicInstantiationDescriptor_.h>

namespace app::classes::LaserShooterHommingMissleAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F14A60, void, MisslePrefabInstantiation, (app::LaserShooterHommingMissleAttackBehaviour * this_ptr, app::List_1_DynamicInstantiationDescriptor_* instantiations))
    IL2CPP_REGISTER_METHOD(0x00F14C40, void, OnEnter, (app::LaserShooterHommingMissleAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F14CC0, void, OnShoot, (app::LaserShooterHommingMissleAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F15150, void, OnAttackInflateEnter, (app::LaserShooterHommingMissleAttackBehaviour * this_ptr, int32_t iteration))
    IL2CPP_REGISTER_METHOD(0x00F15280, void, OnAttackInflate, (app::LaserShooterHommingMissleAttackBehaviour * this_ptr, float d_time, float normalized_phase_time))
    IL2CPP_REGISTER_METHOD(0x00F152B0, void, OnAttackDeflate, (app::LaserShooterHommingMissleAttackBehaviour * this_ptr, float d_time, float normalized_phase_time))
    IL2CPP_REGISTER_METHOD(0x00F152E0, void, ctor, (app::LaserShooterHommingMissleAttackBehaviour * this_ptr))
} // namespace app::classes::LaserShooterHommingMissleAttackBehaviour
