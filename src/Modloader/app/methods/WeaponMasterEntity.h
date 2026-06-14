#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WeaponMasterEntity.h>

namespace app::classes::WeaponMasterEntity {
    IL2CPP_REGISTER_METHOD(0x008E79D0, bool, get_OnGround, app::WeaponMasterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E7AC0, void, set_OnGround, app::WeaponMasterEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x008E7AD0, bool, get_CanTurn, app::WeaponMasterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E7B00, void, Awake, app::WeaponMasterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E7C00, void, OnEnable, app::WeaponMasterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E7E80, void, OnDisable, app::WeaponMasterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E8100, void, LeftTree, app::WeaponMasterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E8120, app::String*, get_DialogActorName, app::WeaponMasterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E81A0, app::String*, get_InteractionActorName, app::WeaponMasterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E8220, void, OnUpdate, app::WeaponMasterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E8320, bool, CanInteractWithCharacter, app::WeaponMasterEntity* this_ptr, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x008E8580, bool, get_CanEffectivelyStartInteraction, app::WeaponMasterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004173E0, void, ctor, app::WeaponMasterEntity* this_ptr)
} // namespace app::classes::WeaponMasterEntity
