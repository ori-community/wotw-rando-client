#include <Randomizer/macros.h>

#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>

#include <Modloader/app/methods/Game/Targets.h>
#include <Modloader/app/methods/SeinBowAttack.h>
#include <Modloader/app/methods/SeinChakramSpell.h>
#include <Modloader/app/methods/SeinSpiritSpearSpell.h>
#include <Modloader/app/types/IAttackable.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace app::classes;

namespace {
    bool overwrite_attackables = false;

    // IL2CPP_INTERCEPT(SeinSpiritSpearSpell, void, FindClosestAttackTarget, (app::SeinSpiritSpearSpell * this_ptr)) {
    //     overwrite_attackables = !core::settings::autoaim();
    //     next::SeinSpiritSpearSpell::FindClosestAttackTarget(this_ptr);
    //     overwrite_attackables = false;
    // }

    IL2CPP_INTERCEPT(SeinChakramSpell, void, UpdateCharacterState, (app::SeinChakramSpell * this_ptr)) {
        this_ptr->fields.AutoAimEnabled = core::settings::autoaim();
        // Maybe we still want this on?
        if (this_ptr->fields.m_prefabChakramProjectile != nullptr) {
            this_ptr->fields.m_prefabChakramProjectile->fields.AutoAimEnabled = this_ptr->fields.AutoAimEnabled;
        }

        next::SeinChakramSpell::UpdateCharacterState(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinBowAttack, void, UpdateCharacterState, (app::SeinBowAttack * this_ptr)) {
        modloader::ScopedSetter setter(overwrite_attackables, !core::settings::autoaim());
        next::SeinBowAttack::UpdateCharacterState(this_ptr);
    }

    IL2CPP_INTERCEPT(Game::Targets, app::IEnumerable_1_IAttackable_*, get_Attackables, ()) {
        return overwrite_attackables
            ? reinterpret_cast<app::IEnumerable_1_IAttackable_*>(types::IAttackable::create_array(0))
            : next::Game::Targets::get_Attackables();
    }
} // namespace
