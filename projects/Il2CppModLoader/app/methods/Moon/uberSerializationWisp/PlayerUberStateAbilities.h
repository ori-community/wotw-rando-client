#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateAbilities {
    IL2CPP_REGISTER_METHOD(0x00F33660, void, ctor, (app::PlayerUberStateAbilities * this_ptr, app::Action * set_dirty_callback))
    IL2CPP_REGISTER_METHOD(0x00F33D20, void, SetAbility, (app::PlayerUberStateAbilities * this_ptr, app::AbilityType__Enum ability, bool value))
    IL2CPP_REGISTER_METHOD(0x00F33F00, bool, HasAbility, (app::PlayerUberStateAbilities * this_ptr, app::AbilityType__Enum ability))
    IL2CPP_REGISTER_METHOD(0x00F33FB0, app::HashSet_1_AbilityType_ *, GetAbilities, (app::PlayerUberStateAbilities * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F34250, uint32_t, GetAbilitiesHashCode, (app::PlayerUberStateAbilities * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F343C0, uint8_t, GetNextAbilityUnlockOrder, (app::PlayerUberStateAbilities * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F344F0, uint8_t, GetAbilityUnlockOrder, (app::PlayerUberStateAbilities * this_ptr, app::AbilityType__Enum ability))
    IL2CPP_REGISTER_METHOD(0x00F345E0, int32_t, GetAbilityLevel, (app::PlayerUberStateAbilities * this_ptr, app::AbilityType__Enum ability))
    IL2CPP_REGISTER_METHOD(0x00F34690, void, SetAbilityLevel, (app::PlayerUberStateAbilities * this_ptr, app::AbilityType__Enum ability, int32_t level))
    IL2CPP_REGISTER_METHOD(0x00F34750, void, IncrementAbilityLevel, (app::PlayerUberStateAbilities * this_ptr, app::AbilityType__Enum ability))
    IL2CPP_REGISTER_METHOD(0x00F34810, void, Save, (app::PlayerUberStateAbilities * this_ptr, app::UberStateArchive * archive, app::PlayerUberStateAbilities * abilities))
    IL2CPP_REGISTER_METHOD(0x00F34B40, void, Load, (app::PlayerUberStateAbilities * this_ptr, app::UberStateArchive * archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x00F34D70, void, OnGui, (app::PlayerUberStateAbilities * this_ptr, app::NavigableOnGUI * gui))
    IL2CPP_REGISTER_METHOD(0x00F34FC0, int64_t, get_Size, (app::PlayerUberStateAbilities * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F35070, void, RunSetDirtyCallback, (app::PlayerUberStateAbilities * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F35230, void, cctor, ())
}
