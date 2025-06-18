#include <Randomizer/macros.h>

#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>

#include <Modloader/app/methods/Game/Targets.h>
#include <Modloader/app/methods/SeinBowAttack.h>
#include <Modloader/app/methods/SeinChakramSpell.h>
#include <Modloader/app/types/IAttackable.h>
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

    [[maybe_unused]]
    auto on_injection_complete = modloader::event_bus().register_handler(ModloaderEvent::InjectionComplete, [](auto) {
        // In vanilla, the game divides the distance to enemies by 10, making the spear autoaim heavily prefer targeting them
        // over anything else. The DIVSS instruction lives at 0xa74431, and here we replace it with NOP instructions to
        // disable that behavior.
        modloader::win::memory::modify_memory(
            modloader::win::memory::resolve_rva(0xa74431),
            5,
            [](auto memory) {
                memory[0] = static_cast<uint8_t>(modloader::win::memory::Instruction::NOP);
                memory[1] = static_cast<uint8_t>(modloader::win::memory::Instruction::NOP);
                memory[2] = static_cast<uint8_t>(modloader::win::memory::Instruction::NOP);
                memory[3] = static_cast<uint8_t>(modloader::win::memory::Instruction::NOP);
                memory[4] = static_cast<uint8_t>(modloader::win::memory::Instruction::NOP);
            }
        );
    });

    IL2CPP_INTERCEPT(SeinChakramSpell, void, UpdateCharacterState, (app::SeinChakramSpell * this_ptr)) {
        this_ptr->fields.AutoAimEnabled = !core::settings::disable_auto_aim();
        // Maybe we still want this on?
        if (this_ptr->fields.m_prefabChakramProjectile != nullptr) {
            this_ptr->fields.m_prefabChakramProjectile->fields.AutoAimEnabled = this_ptr->fields.AutoAimEnabled;
        }

        next::SeinChakramSpell::UpdateCharacterState(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinBowAttack, void, UpdateCharacterState, (app::SeinBowAttack * this_ptr)) {
        modloader::ScopedSetter setter(overwrite_attackables, core::settings::disable_auto_aim());
        next::SeinBowAttack::UpdateCharacterState(this_ptr);
    }

    IL2CPP_INTERCEPT(Game::Targets, app::IEnumerable_1_IAttackable_*, get_Attackables, ()) {
        return overwrite_attackables
            ? reinterpret_cast<app::IEnumerable_1_IAttackable_*>(types::IAttackable::create_array(0))
            : next::Game::Targets::get_Attackables();
    }
} // namespace
