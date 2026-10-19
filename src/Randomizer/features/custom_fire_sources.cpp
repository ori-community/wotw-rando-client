#include <Modloader/app/methods/AttackableSwitch.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <Core/api/uber_states/uber_state.h>

#include <Randomizer/uber_states/randomizer_uber_states.h>
#include <magic_enum/magic_enum.hpp>
#include <unordered_map>
#include <unordered_set>

namespace {
    const std::unordered_set<std::string> damage_overrides{
        "winterForestBreakableIceA",
        "winterForestBreakableIceB",
        "winterForestBreakableIceC",
        "winterForestBreakableIceD",
        "winterForestBreakableIceE",
        "orbBulb",
    };

    bool is_melting_enabled(const app::DamageType__Enum damage_type) {
        switch (damage_type) {
            case app::DamageType__Enum::Bow: return randomizer::uber_states::state<"bonusUpgrades", "meltingBow">().get();
            case app::DamageType__Enum::Blaze: return randomizer::uber_states::state<"bonusUpgrades", "meltingBlaze">().get();
            case app::DamageType__Enum::Sword: return randomizer::uber_states::state<"bonusUpgrades", "meltingSword">().get();
            case app::DamageType__Enum::Hammer: return randomizer::uber_states::state<"bonusUpgrades", "meltingHammer">().get();
            case app::DamageType__Enum::SpiritSpear: return randomizer::uber_states::state<"bonusUpgrades", "meltingSpear">().get();
            case app::DamageType__Enum::Chakram: return randomizer::uber_states::state<"bonusUpgrades", "meltingShuriken">().get();
            default: return false;
        }
    }

    IL2CPP_INTERCEPT(bool, AttackableSwitch, DoesReactTo, app::AttackableSwitch * this_ptr, app::DamageType__Enum damage_type) {
        if (is_melting_enabled(damage_type)) {
            const auto parent = il2cpp::unity::get_parent(il2cpp::unity::get_transform(il2cpp::unity::get_game_object(this_ptr)));
            const auto parent_name = il2cpp::unity::get_object_name(parent);
            if (damage_overrides.contains(parent_name)) {
                return true;
            }
        }

        return next::AttackableSwitch::DoesReactTo(this_ptr, damage_type);
    }
} // namespace
