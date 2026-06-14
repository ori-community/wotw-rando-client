#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/SpiritLeashInteractable.h>
#include <Modloader/app/structs/SpiritLeashMode__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiritLeashInteractable {
    IL2CPP_REGISTER_METHOD(0x00A35C30, float, get_OriCloseEnoughDistance, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDecelerateOnApproach, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_CanBeSustained, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_Activated, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_Activated, app::SpiritLeashInteractable* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00C41600, app::Vector3, get_Position, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritLeashed, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E57A0, app::SpiritLeashMode__Enum, get_LeashInteractionMode, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_SpiritLeashCost, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_PositionOffset, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Transform*, get_HookTargetTransform, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashHighlight, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashDehighlight, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00D5FD90,
        void,
        OnSpiritLeashed,
        app::SpiritLeashInteractable* this_ptr,
        app::Vector3 player_position,
        app::Vector3 target_position
    )
    IL2CPP_REGISTER_METHOD(0x00D5FE60, void, Awake, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D60040, void, OnEnable, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D600E0, void, OnDisable, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D60180, void, Serialize, app::SpiritLeashInteractable* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IDamageReciever__Array*, get_AffectedReceivers, app::SpiritLeashInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D601F0, void, ctor, app::SpiritLeashInteractable* this_ptr)
} // namespace app::classes::SpiritLeashInteractable
