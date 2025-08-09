#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/MeleeComboMove.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/WeaponJoint__Enum.h>

namespace app::classes::MeleeWeapon {
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MoonAnimator*, get_WeaponAnimator, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD750, app::WeaponJoint__Enum, get_WeaponJoint, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C56C0, app::Transform*, FindJoint, app::MeleeWeapon* this_ptr, app::WeaponJoint__Enum joint)
    IL2CPP_REGISTER_METHOD(0x009C57E0, void, SetAnimatorPosition, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5B40, app::Transform__Array*, GetAnimatorTransforms, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5C50, app::MoonAnimator*, get_OwnerAnimator, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::SeinCharacter*, get_WeaponOwner, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5D50, float, get_CurrentGravityMultiplier, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5D60, void, set_CurrentGravityMultiplier, app::MeleeWeapon* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x009C5D70, bool, get_IsPerformingCombo, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5D80, void, set_IsPerformingCombo, app::MeleeWeapon* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x009C5D90, bool, get_IsInitialized, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5DA0, bool, get_SpriteMirrorLock, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5DB0, void, set_SpriteMirrorLock, app::MeleeWeapon* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x009C5E70, app::SoundHost*, get_SoundHost, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00739A80, app::AbilityType__Enum, get_ComboAbilityType, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5F40, float, get_WeaponCooldown, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5F50, void, set_WeaponCooldown, app::MeleeWeapon* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x009C5F40, float, get_ProviderCooldown, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5F60, float, get_ProviderCooldownTimer, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5F70, void, set_ProviderCooldownTimer, app::MeleeWeapon* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x009C5F80, app::IComboMove*, GetComboMove, app::MeleeWeapon* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x009C60F0, app::List_1_Moon_ComboSystem_IComboMove_*, get_ComboMoves, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C6120, void, Initialize, app::MeleeWeapon* this_ptr, app::SeinComboHandler* handler)
    IL2CPP_REGISTER_METHOD(0x009C6260, void, Deinitialize, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C6360, app::MeleeComboMove*, GetUsableMove, app::MeleeWeapon* this_ptr, app::SeinCharacter* sein)
    IL2CPP_REGISTER_METHOD(0x009C64A0, void, OnEquip, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C64E0, void, OnUnequip, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E5C0, bool, CanDeactivateRoot, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C6510, void, Update, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B62B0, void, Deactivate, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C6600, void, ShowWeapon, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C66D0, void, HideWeapon, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C6870, void, LateUpdate, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C6940, void, OnDamageResultReceived, app::MeleeWeapon* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugWeapon, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_TrackTranformChangesForRecording, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420230, app::RecordableParsingGroup__Enum, get_ParsingGroup, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C6AF0, app::TrackingExclusions, get_TrackingExclusions, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C6B00, void, ResetInputCache, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C6B10, void, ctor, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C6E20, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_1, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_2, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_3, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_4, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_5, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_6, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_7, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_8, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_9, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_10, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_11, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_12, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_13, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_14, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_15, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_16, app::MeleeWeapon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_17, app::MeleeWeapon* this_ptr)
} // namespace app::classes::MeleeWeapon
