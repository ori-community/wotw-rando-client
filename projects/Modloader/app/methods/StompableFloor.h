#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/StompableFloor.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::StompableFloor {
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654890, bool, IsDead, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeStomped, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByHammerHandle, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritSpeared, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_HammerPriority, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_HammerPriority, app::StompableFloor* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_HammerEnableAutoTarget, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446980, void, set_HammerEnableAutoTarget, app::StompableFloor* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00654970, void, Awake, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654ED0, void, OnDestroy, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00443CC0, void, OnRestoreCheckpoint, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00655060, void, OnEnable, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00655150, void, OnDisable, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00655240, void, OnValidate, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00655360, bool, AllowedTypeCheck, app::StompableFloor* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x006553B0, bool, CanBeDestroyedByHammer, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006555F0, void, OnRecieveDamage, app::StompableFloor* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00655A70, void, FixedUpdate, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00655D70, void, Highlight, app::StompableFloor* this_ptr, bool on)
    IL2CPP_REGISTER_METHOD(0x00656130, void, PlayHighlightLoop, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00656300, void, UpdateWorldMap, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006565F0, void, ComputeRuntimeGasBallAttractionZone, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00656780, bool, OnRange, app::StompableFloor* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x006567D0, app::Vector2, GasBallBaitCenter, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_GasBallAttractionTime, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::IDamageReciever__Array*, get_AffectedReceivers, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00656930, void, ctor, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::StompableFloor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::StompableFloor* this_ptr)
} // namespace app::classes::StompableFloor
