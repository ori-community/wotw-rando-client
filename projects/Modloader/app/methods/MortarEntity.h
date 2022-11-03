#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MortarEntity {
    IL2CPP_REGISTER_METHOD(0x01476150, bool, get_ShouldCharge, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01476160, bool, get_ShouldHide, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01476170, bool, get_CouldHitTarget, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E8390, bool, get_IsMortarHidden, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01476180, bool, get_IsAggroed, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014762D0, bool, get_SpawnCreep, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014762E0, void, set_SpawnCreep, (app::MortarEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x014762F0, void, OnAwake, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01476370, void, DetectGroundSurface, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01476810, bool, CalcLaunchVelocityWouldHitTarget, (app::MortarEntity * this_ptr, app::Vector3 velocity, float airtime, app::Vector3 sphere_cast_origin))
    IL2CPP_REGISTER_METHOD(0x01476D90, void, OnFixedUpdate, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01477CB0, void, GenerateAimVeloCache, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TestVeloPacking, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01477F40, void, ResolveDamage, (app::MortarEntity * this_ptr, app::DamageResult* damage_result))
    IL2CPP_REGISTER_METHOD(0x01478020, void, AssignRegularIdle, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01478050, void, AssignHiddenIdle, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01478080, void, ctor, (app::MortarEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01478130, void, cctor, ())
} // namespace app::classes::MortarEntity
