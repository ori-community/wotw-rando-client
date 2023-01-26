#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LaserShieldDamageReceiver.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LaserShieldDamageReceiver {
    IL2CPP_REGISTER_METHOD(0x00F08450, void, OnEnable, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D6470, bool, get_IsDestroyed, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F08460, app::Vector3, get_AnchorLocalPosition, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F08480, app::Quaternion, get_AnchorLocalRotation, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F08490, app::Vector3, get_DirectonToCenter, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F08530, app::Vector3, get_IndividualHitLocalPositionOffset, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F08550, void, set_IndividualHitLocalPositionOffset, (app::LaserShieldDamageReceiver * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00F08570, app::Vector3, get_SharedLocalPositionOffset, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F08590, void, set_SharedLocalPositionOffset, (app::LaserShieldDamageReceiver * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00F085B0, app::Vector3, get_SharedWorldPositionOffset, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F085D0, void, set_SharedWorldPositionOffset, (app::LaserShieldDamageReceiver * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00F085F0, app::Transform*, get_Pivot, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F086A0, app::Transform*, get_CircleRotator, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F087A0, float, get_LocalRotationZ, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F08840, void, set_LocalRotationZ, (app::LaserShieldDamageReceiver * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00F088A0, float, get_TargetAnglePosition, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F08A60, int32_t, get_Index, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F08A70, void, set_Index, (app::LaserShieldDamageReceiver * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00F08A80, void, SetOffset, (app::LaserShieldDamageReceiver * this_ptr, app::Vector3 offset))
    IL2CPP_REGISTER_METHOD(0x00F08FA0, void, AddAngle, (app::LaserShieldDamageReceiver * this_ptr, float degree))
    IL2CPP_REGISTER_METHOD(0x00F09020, void, OnDestroy, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F09170, void, OnRecieveDamage, (app::LaserShieldDamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00F095E0, void, Initialize, (app::LaserShieldDamageReceiver * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00F09900, void, ResetState, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F09A80, void, Repair, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F09AC0, void, ApplyPositionOffsets, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F09DC0, void, SpawnEffect, (app::LaserShieldDamageReceiver * this_ptr, app::GameObject* prefab))
    IL2CPP_REGISTER_METHOD(0x00F09E40, void, TurnOnIdleEffect, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0A140, void, TurnOffIdleEffect, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0A240, void, TurnOnHeavilyDamagedEffect, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0A430, void, TurnOffHeavilyDamagedEffect, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0A550, void, SetSelfComponents, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0A5F0, void, ForceDestroy, (app::LaserShieldDamageReceiver * this_ptr, bool spawn_effects))
    IL2CPP_REGISTER_METHOD(0x00F0A6E0, void, Destroy, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0A7E0, void, DestroyWithoutEffects, (app::LaserShieldDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0A8C0, void, ctor, (app::LaserShieldDamageReceiver * this_ptr))
} // namespace app::classes::LaserShieldDamageReceiver
