#include <Modloader/app/methods/AttackableSwitch.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <Core/api/uber_states/uber_state.h>

#include <Randomizer/uber_states/randomizer_uber_states.h>
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

    std::unordered_map<app::DamageType__Enum, core::api::uber_states::UberState<core::api::uber_states::UberStateType::SerializedBooleanUberState>> damage_override_states{
        { app::DamageType__Enum::Bow, randomizer::uber_states::state<"randoUpgrades", "bowAsFireSource">() },
        { app::DamageType__Enum::Blaze, randomizer::uber_states::state<"randoUpgrades", "blazeAsFireSource">() },
        { app::DamageType__Enum::Sword, randomizer::uber_states::state<"randoUpgrades", "swordAsFireSource">() },
        { app::DamageType__Enum::Hammer, randomizer::uber_states::state<"randoUpgrades", "hammerAsFireSource">() },
        { app::DamageType__Enum::SpiritSpear, randomizer::uber_states::state<"randoUpgrades", "spearAsFireSource">() },
        { app::DamageType__Enum::Chakram, randomizer::uber_states::state<"randoUpgrades", "shurikenAsFireSource">() },
    };

    bool is_overridden(const app::DamageType__Enum damage_type) {
        const auto it = damage_override_states.find(damage_type);
        return it != damage_override_states.end() && it->second.get();
    }

    IL2CPP_INTERCEPT(bool, AttackableSwitch, DoesReactTo, app::AttackableSwitch * this_ptr, app::DamageType__Enum damage_type) {
        if (is_overridden(damage_type)) {
            auto* parent = il2cpp::unity::get_parent(il2cpp::unity::get_transform(il2cpp::unity::get_game_object(this_ptr)));
            const auto parent_name = il2cpp::unity::get_object_name(parent);
            if (damage_overrides.find(parent_name) != damage_overrides.end())
                return true;
        }

        return next::AttackableSwitch::DoesReactTo(this_ptr, damage_type);
    }
} // namespace
