#include <macros.h>

#include <randomizer/settings.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    bool overwrite_attackables = false;
    IL2CPP_INTERCEPT(, SeinSpiritSpearSpell, void, FindClosestAttackTarget, (app::SeinSpiritSpearSpell* this_ptr)) {
        overwrite_attackables = !randomizer::settings::autoaim();
        SeinSpiritSpearSpell::FindClosestAttackTarget(this_ptr);
        overwrite_attackables = false;
    }

    IL2CPP_INTERCEPT(, SeinChakramSpell, void, UpdateCharacterState, (app::SeinChakramSpell* this_ptr)) {
        this_ptr->fields.AutoAimEnabled = randomizer::settings::autoaim();
        // Maybe we still want this on?
        if (this_ptr->fields.m_prefabChakramProjectile != nullptr)
            this_ptr->fields.m_prefabChakramProjectile->fields.AutoAimEnabled = this_ptr->fields.AutoAimEnabled;

        SeinChakramSpell::UpdateCharacterState(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinBowAttack, void, UpdateCharacterState, (app::SeinBowAttack* this_ptr)) {
        overwrite_attackables = !randomizer::settings::autoaim();
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
