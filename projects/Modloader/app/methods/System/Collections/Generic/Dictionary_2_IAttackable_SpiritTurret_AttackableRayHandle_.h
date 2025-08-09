#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/SpiritTurret_AttackableRayHandle.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_* this_ptr, app::IAttackable* key)
    IL2CPP_REGISTER_METHOD(0x02DE1360, bool, Remove, app::Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_* this_ptr, app::IAttackable* key)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_* this_ptr,
        app::IAttackable* key,
        app::SpiritTurret_AttackableRayHandle* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_* this_ptr,
        app::IAttackable* key,
        app::SpiritTurret_AttackableRayHandle value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_* this_ptr,
        app::IAttackable* key,
        app::SpiritTurret_AttackableRayHandle value
    )
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, app::Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_* this_ptr, int32_t capacity)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_
