#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IDamageReciever.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Damage {
    IL2CPP_REGISTER_METHOD(0x00DC0030, int32_t, GetNewDamageID, ())
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Charged, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_Charged, (app::Damage * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00DC00B0, void, ctor, (app::Damage * this_ptr, float amount, app::Vector2 force, app::Vector3 position, app::DamageType__Enum type, app::AbilityType__Enum ability_type, app::GameObject* sender, int32_t damage_i_d, app::DamageOwner* owner, app::SpiritShardType__Enum shard_type, bool ignore_kickback, app::DamageWeight__Enum weight, float speed_transfer, bool bypass_players_invincibility))
    IL2CPP_REGISTER_METHOD(0x00DC0420, void, Reset, (app::Damage * this_ptr, float amount, app::Vector2 force, app::Vector3 position, app::DamageType__Enum type, app::AbilityType__Enum ability_type, app::GameObject* sender, int32_t damage_i_d, app::DamageOwner* owner, app::SpiritShardType__Enum shard_type, bool ignore_kickback, app::DamageWeight__Enum weight, float speed_transfer, bool bypass_players_invincibility))
    IL2CPP_REGISTER_METHOD(0x00DC0600, bool, GetDamageWeightByType, (app::Damage * this_ptr, app::DamageWeight__Enum* weight))
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_Amount, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_BonusAmount, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC0690, float, get_FinalAmount, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC06A0, app::Vector2, get_Force, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC06C0, void, set_Force, (app::Damage * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00DC06E0, app::Vector2, get_OriginalForceDirection, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC0700, void, set_OriginalForceDirection, (app::Damage * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00DC0720, app::Vector3, get_Position, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004E57A0, app::DamageType__Enum, get_DamageType, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC0740, bool, get_IsBash, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC0760, bool, IsBashType, (app::DamageType__Enum damage_type))
    IL2CPP_REGISTER_METHOD(0x0057AAC0, app::DamageWeight__Enum, get_DamageWeight, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08D30, void, set_DamageWeight, (app::Damage * this_ptr, app::DamageWeight__Enum value))
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_SpeedTransfer, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F4A0, app::AbilityType__Enum, get_AbilityType, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::GameObject*, get_Sender, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_Ignored, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C0F0, float, get_DisableFallingDuration, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008682A0, float, get_StunDuration, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575470, app::SpiritShardType__Enum, get_ShardType, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575450, bool, get_BypassPlayerInvincibility, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC0770, void, OverrideForce, (app::Damage * this_ptr, app::Vector2 force))
    IL2CPP_REGISTER_METHOD(0x008FDC10, void, SetAmount, (app::Damage * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x00DC07D0, void, AddBonusAmount, (app::Damage * this_ptr, float bonus))
    IL2CPP_REGISTER_METHOD(0x00A64050, void, SetBonusAmount, (app::Damage * this_ptr, float bonus))
    IL2CPP_REGISTER_METHOD(0x00DC07E0, void, ClearDamageAmount, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC07F0, void, RoundUpToNextInt, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC08D0, void, DealToComponents_1, (app::Damage * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x00DC0AD0, void, DealToComponents_2, (app::Damage * this_ptr, app::IAttackable* target))
    IL2CPP_REGISTER_METHOD(0x00DC0BE0, void, DealToComponents_3, (app::Damage * this_ptr, app::IDamageReciever* damage_receiver))
    IL2CPP_REGISTER_METHOD(0x00DC0C80, void, DealToComponents_4, (app::Damage * this_ptr, app::IDamageReciever__Array* damage_receivers))
    IL2CPP_REGISTER_METHOD(0x00997600, void, Ignore, (app::Damage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C100, void, SetDisableFallingDuration, (app::Damage * this_ptr, float disable_falling_duration))
    IL2CPP_REGISTER_METHOD(0x008682B0, void, SetStunDuration, (app::Damage * this_ptr, float stun_duration))
    IL2CPP_REGISTER_METHOD(0x00DC0DF0, app::Vector3, GetDamageEffectPosition, (app::IDamageReciever * receiver, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00DC1030, app::String*, CreateFullDescription, (app::Damage * this_ptr))
} // namespace app::classes::Damage
