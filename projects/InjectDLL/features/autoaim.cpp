#include <macros.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <uber_states/uber_state_manager.h>

namespace
{
    constexpr int AUTOAIM_ID = 37;

    bool overwrite_attackables = false;
    IL2CPP_INTERCEPT(, SeinSpiritSpearSpell, void, FindClosestAttackTarget, (app::SeinSpiritSpearSpell* this_ptr)) {
        overwrite_attackables = uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, AUTOAIM_ID) < 0.5f;
        SeinSpiritSpearSpell::FindClosestAttackTarget(this_ptr);
        overwrite_attackables = false;
    }

    IL2CPP_INTERCEPT(, SeinChakramSpell, void, UpdateCharacterState, (app::SeinChakramSpell* this_ptr)) {
        this_ptr->fields.AutoAimEnabled = uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, AUTOAIM_ID) > 0.5f;
        // Maybe we still want this on?
        if (this_ptr->fields.m_prefabChakramProjectile != nullptr)
            this_ptr->fields.m_prefabChakramProjectile->fields.AutoAimEnabled = this_ptr->fields.AutoAimEnabled;

        SeinChakramSpell::UpdateCharacterState(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinBowAttack, void, UpdateCharacterState, (app::SeinBowAttack* this_ptr)) {
        overwrite_attackables = uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, AUTOAIM_ID) < 0.5f;
        SeinBowAttack::UpdateCharacterState(this_ptr);
        overwrite_attackables = false;
    }

    uint32_t handle = 0;
    IL2CPP_INTERCEPT(Game, Targets, app::IEnumerable_1_IAttackable_*, get_Attackables, (app::Targets* this_ptr)) {
        if (overwrite_attackables)
        {
            Il2CppArraySize* arr = nullptr;
            if (handle == 0)
            {
                arr = il2cpp::untyped::array_new(il2cpp::get_class("", "IAttackable"), 0);
                il2cpp::gchandle_new(arr, false);
            }
            else
                arr = reinterpret_cast<Il2CppArraySize*>(il2cpp::gchandle_target(handle));

            return reinterpret_cast<app::IEnumerable_1_IAttackable_*>(arr);
        }

        return Targets::get_Attackables(this_ptr);
    }
}
