#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TeleportBeaconDamageReceiver.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TeleportBeaconDamageReceiver {
    IL2CPP_REGISTER_METHOD(0x00CE7970, void, Awake, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE7B80, void, OnDestroy, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE7C20, app::Vector3, get_Position, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006514B0, bool, IsDead, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE7C60, bool, CanBeBashed, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritSpeared, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByBow, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByHammerHandle, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00651560, int32_t, get_BashPriority, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE7C80, void, OnRecieveDamage, (app::TeleportBeaconDamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IDamageReciever__Array*, get_AffectedReceivers, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::TeleportBeaconDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::TeleportBeaconDamageReceiver * this_ptr))
} // namespace app::classes::TeleportBeaconDamageReceiver
