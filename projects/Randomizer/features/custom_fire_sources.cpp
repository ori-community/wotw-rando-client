#include <Modloader/app/methods/AttackableSwitch.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <Core/api/uber_states/uber_state.h>

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

    const std::unordered_map<app::DamageType__Enum, core::api::uber_states::UberState> damage_override_states{
        { app::DamageType__Enum::Bow, core::api::uber_states::UberState(UberStateGroup::RandoUpgrade, 70) },
        { app::DamageType__Enum::Blaze, core::api::uber_states::UberState(UberStateGroup::RandoUpgrade, 71) },
        { app::DamageType__Enum::Sword, core::api::uber_states::UberState(UberStateGroup::RandoUpgrade, 72) },
        { app::DamageType__Enum::Hammer, core::api::uber_states::UberState(UberStateGroup::RandoUpgrade, 73) },
        { app::DamageType__Enum::SpiritSpear, core::api::uber_states::UberState(UberStateGroup::RandoUpgrade, 74) },
        { app::DamageType__Enum::Chakram, core::api::uber_states::UberState(UberStateGroup::RandoUpgrade, 75) },
    };

    bool is_overridden(const app::DamageType__Enum damage_type) {
        const auto it = damage_override_states.find(damage_type);
        return it != damage_override_states.end() && it->second.get<bool>();
    }

    IL2CPP_INTERCEPT(AttackableSwitch, bool, DoesReactTo, (app::AttackableSwitch * this_ptr, app::DamageType__Enum damage_type)) {
        if (is_overridden(damage_type)) {
            auto* parent = il2cpp::unity::get_parent(il2cpp::unity::get_transform(il2cpp::unity::get_game_object(this_ptr)));
            const auto parent_name = il2cpp::unity::get_object_name(parent);
            if (damage_overrides.find(parent_name) != damage_overrides.end())
                return true;
        }

        return next::AttackableSwitch::DoesReactTo(this_ptr, damage_type);
    }
} // namespace
