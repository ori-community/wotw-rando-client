#include <variant>
#include <Modloader/app/types/BombSlugEntity.h>
#include <Modloader/app/types/DropSlugEntity.h>
#include <Modloader/app/types/EnemyEntity.h>
#include <Modloader/app/types/GasballEntity.h>
#include <Modloader/app/types/KamikazeLizardEntity.h>
#include <Modloader/app/types/MinerEntity.h>
#include <Modloader/app/types/PiranhaEntity.h>
#include <Modloader/app/types/SandWormEntity.h>
#include <Modloader/app/types/SkeetoEntity.h>
#include <Modloader/app/types/SpikeSlugEntity.h>
#include <Modloader/app/types/TentacleEntity.h>
#include <Modloader/il2cpp_helpers.h>

#include <Common/event_bus.h>
#include <Common/vx.h>
#include <Core/api/game/death_listener.h>
#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>

namespace core::api::death_listener {
    using namespace app::classes;
    using namespace core::api::uber_states;

    namespace {
        std::optional<UberState<UberStateType::SerializedIntUberState>> get_kills_uber_state_for_damage_type(app::DamageType__Enum damage_type) {
            switch (damage_type) {
                case app::DamageType__Enum::Sword:
                    return randomizer::uber_states::state<"randoStats", "swordKills">();
                case app::DamageType__Enum::Hammer:
                    return randomizer::uber_states::state<"randoStats", "hammerKills">();
                case app::DamageType__Enum::Bow:
                    return randomizer::uber_states::state<"randoStats", "bowKills">();
                case app::DamageType__Enum::SpiritSpear:
                    return randomizer::uber_states::state<"randoStats", "spearKills">();
                case app::DamageType__Enum::SpiritSentry:
                    return randomizer::uber_states::state<"randoStats", "sentryKills">();
                case app::DamageType__Enum::Blaze:
                    return randomizer::uber_states::state<"randoStats", "blazeKills">();
                case app::DamageType__Enum::Grenade:
                    return randomizer::uber_states::state<"randoStats", "grenadeKills">();
                case app::DamageType__Enum::Chakram:
                    return randomizer::uber_states::state<"randoStats", "shurikenKills">();
                case app::DamageType__Enum::ChargeJump:
                    return randomizer::uber_states::state<"randoStats", "launchKills">();
                case app::DamageType__Enum::Glow:
                    return randomizer::uber_states::state<"randoStats", "flashKills">();
                case app::DamageType__Enum::Projectile:
                    return randomizer::uber_states::state<"randoStats", "bashKills">();
                case app::DamageType__Enum::Water:
                    return randomizer::uber_states::state<"randoStats", "drownedEnemies">();
                default:
                    return std::nullopt;
            }
        }

        using kills_states_t = std::vector<UberState<UberStateType::SerializedIntUberState>>;
        using kills_states_fn_t = std::function<std::vector<UberState<UberStateType::SerializedIntUberState>>(app::EnemyEntity* entity)>;

        kills_states_t skeeto_check(app::EnemyEntity* entity) {
            const auto skeeto = reinterpret_cast<app::SkeetoEntity*>(entity);
            switch (skeeto->fields.m_type) {
                case app::SkeetoEntity_SkeetoType__Enum::Kamikaze: {
                    return {
                        randomizer::uber_states::state<"randoStats", "flierKills">(),
                        randomizer::uber_states::state<"randoStats", "exploderKills">(),
                    };
                }
                default: {
                    return {randomizer::uber_states::state<"randoStats", "flierKills">()};
                }
            }
        }

        kills_states_t worm_check(app::EnemyEntity* entity) {
            const auto worm = reinterpret_cast<app::SandWormEntity*>(entity);
            if (worm->fields.WormHabitat == app::SandWormEntity_Habitat__Enum::Sand) {
                return {};
            }

            return kills_states_t{randomizer::uber_states::state<"randoStats", "fishKills">()};
        }

        std::unordered_map<void*, std::variant<kills_states_t, kills_states_fn_t>>& enemy_type_map() {
            static std::unordered_map<void*, std::variant<kills_states_t, kills_states_fn_t>> inner_enemy_type_map = {
                {types::MinerEntity::get_class(), kills_states_t{randomizer::uber_states::state<"randoStats", "minerKills">()}},
                {types::SkeetoEntity::get_class(), skeeto_check},
                {types::TentacleEntity::get_class(), kills_states_t{randomizer::uber_states::state<"randoStats", "tentacleKills">()}},
                {types::SpikeSlugEntity::get_class(), kills_states_t{randomizer::uber_states::state<"randoStats", "slimeKills">()}},
                {types::DropSlugEntity::get_class(), kills_states_t{randomizer::uber_states::state<"randoStats", "slimeKills">(), randomizer::uber_states::state<"randoStats", "exploderKills">()}},
                {types::PiranhaEntity::get_class(), kills_states_t{randomizer::uber_states::state<"randoStats", "fishKills">()}},
                {types::SandWormEntity::get_class(), worm_check},
                {types::GasballEntity::get_class(), kills_states_t{randomizer::uber_states::state<"randoStats", "flierKills">(), randomizer::uber_states::state<"randoStats", "exploderKills">()}},
                {types::KamikazeLizardEntity::get_class(), kills_states_t{randomizer::uber_states::state<"randoStats", "exploderKills">()}},
                {types::BombSlugEntity::get_class(), kills_states_t{randomizer::uber_states::state<"randoStats", "slimeKills">(), randomizer::uber_states::state<"randoStats", "exploderKills">()}}
            };

            return inner_enemy_type_map;
        }

        auto& kills_state = randomizer::uber_states::state<"randoStats", "kills">();

        void handle_enemy_stats(Death death, EventTiming) {
            kills_state.set(kills_state.get() + 1);
            const auto enemy_entity = il2cpp::unity::get_component<app::EnemyEntity>(death.game_object, types::EnemyEntity::get_class());
            const auto enemy_state_entry = enemy_type_map()[enemy_entity->klass];
            kills_states_t states;

            enemy_state_entry | vx::match {
                [&](const kills_states_t& list) {
                    states = list;
                },
                [&](const kills_states_fn_t& function) {
                    states = function(enemy_entity);
                }
            };

            for (auto state: states) {
                state.set(state.get() + 1);
            }

            auto state = get_kills_uber_state_for_damage_type(death.damage->fields.m_damageType);

            // Count Blaze and Grenade burns as Blaze and Grenade deaths but
            // count Sentry burns as Sentry deaths, albeit they are technically
            // Grenade burns internally (see sentry_burn_damage_type_fix.cpp)
            if (death.damage->fields.m_damageType == app::DamageType__Enum::Heat) {
                if (death.damage->fields.m_abilityType == app::AbilityType__Enum::Grenade) {
                    state = get_kills_uber_state_for_damage_type(app::DamageType__Enum::Grenade);
                } else if (death.damage->fields.m_abilityType == app::AbilityType__Enum::Blaze) {
                    state = get_kills_uber_state_for_damage_type(app::DamageType__Enum::Blaze);
                } else if (death.damage->fields.m_abilityType == app::AbilityType__Enum::SpiritSentrySpell) {
                    state = get_kills_uber_state_for_damage_type(app::DamageType__Enum::SpiritSentry);
                }
            } else if (
                death.damage->fields.m_damageType == app::DamageType__Enum::Grenade &&
                death.damage->fields.m_abilityType == app::AbilityType__Enum::SpiritSentrySpell
            ) {
                state = get_kills_uber_state_for_damage_type(app::DamageType__Enum::SpiritSentry);
            }

            if (state.has_value()) {
                state->set(state->get() + 1);
            }
        }

        [[maybe_unused]]
        auto enemy_stats_handle = enemy_death_event_bus().register_handler(EventTiming::Before, handle_enemy_stats);
    } // namespace
} // namespace core::api::death_listener
