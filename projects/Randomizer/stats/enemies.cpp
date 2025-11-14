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
#include <Core/api/game/death_listener.h>
#include <Core/api/uber_states/uber_state.h>

namespace core::api::death_listener {
    using namespace app::classes;
    using namespace core::api::uber_states;

    namespace {
        std::unordered_map<app::DamageType__Enum, UberState> damage_type_map{
            {app::DamageType__Enum::Sword, UberState(UberStateGroup::BingoState, 11)},
            {app::DamageType__Enum::Hammer, UberState(UberStateGroup::BingoState, 12)},
            {app::DamageType__Enum::Bow, UberState(UberStateGroup::BingoState, 13)},
            {app::DamageType__Enum::SpiritSpear, UberState(UberStateGroup::BingoState, 14)},
            {app::DamageType__Enum::SpiritSentry, UberState(UberStateGroup::BingoState, 15)},
            {app::DamageType__Enum::Blaze, UberState(UberStateGroup::BingoState, 16)},
            {app::DamageType__Enum::Grenade, UberState(UberStateGroup::BingoState, 17)},
            {app::DamageType__Enum::Chakram, UberState(UberStateGroup::BingoState, 19)},
            {app::DamageType__Enum::ChargeJump, UberState(UberStateGroup::BingoState, 20)},
            {app::DamageType__Enum::Glow, UberState(UberStateGroup::BingoState, 21)},
            {app::DamageType__Enum::Projectile, UberState(UberStateGroup::BingoState, 22)},
            {app::DamageType__Enum::Water, UberState(UberStateGroup::BingoState, 23)},
        };

        using enemy_list = std::vector<UberState>;
        using enemy_function = std::function<std::vector<UberState>(app::EnemyEntity* entity)>;

        std::vector<UberState> skeeto_check(app::EnemyEntity* entity) {
            const auto skeeto = reinterpret_cast<app::SkeetoEntity*>(entity);
            switch (skeeto->fields.m_type) {
                case app::SkeetoEntity_SkeetoType__Enum::Kamikaze: {
                    return {UberState(UberStateGroup::BingoState, 41), UberState(UberStateGroup::BingoState, 45)};
                }
                default: {
                    return {UberState(UberStateGroup::BingoState, 41)};
                }
            }
        }

        std::vector<UberState> worm_check(app::EnemyEntity* entity) {
            const auto worm = reinterpret_cast<app::SandWormEntity*>(entity);
            if (worm->fields.WormHabitat == app::SandWormEntity_Habitat__Enum::Sand) {
                return enemy_list{};
            } else {
                return enemy_list{UberState(UberStateGroup::BingoState, 44)};
            }
        }

        std::unordered_map<void*, std::variant<enemy_list, enemy_function>>& enemy_type_map() {
            static std::unordered_map<void*, std::variant<enemy_list, enemy_function>> inner_enemy_type_map = {
                {types::MinerEntity::get_class(), enemy_list{UberState(UberStateGroup::BingoState, 40)}},
                {types::SkeetoEntity::get_class(), skeeto_check},
                {types::TentacleEntity::get_class(), enemy_list{UberState(UberStateGroup::BingoState, 42)}},
                {types::SpikeSlugEntity::get_class(), enemy_list{UberState(UberStateGroup::BingoState, 43)}},
                {types::DropSlugEntity::get_class(), enemy_list{UberState(UberStateGroup::BingoState, 43), UberState(UberStateGroup::BingoState, 45)}},
                {types::PiranhaEntity::get_class(), enemy_list{UberState(UberStateGroup::BingoState, 44)}},
                {types::SandWormEntity::get_class(), worm_check},
                {types::GasballEntity::get_class(), enemy_list{UberState(UberStateGroup::BingoState, 41), UberState(UberStateGroup::BingoState, 45)}},
                {types::KamikazeLizardEntity::get_class(), enemy_list{UberState(UberStateGroup::BingoState, 45)}},
                {types::BombSlugEntity::get_class(), enemy_list{UberState(UberStateGroup::BingoState, 43), UberState(UberStateGroup::BingoState, 45)}}
            };

            return inner_enemy_type_map;
        }

        UberState enemy_state(UberStateGroup::BingoState, 10);

        void handle_enemy_stats(Death death, EventTiming timing) {
            enemy_state.set(enemy_state.get() + 1);
            const auto enemy_entity = il2cpp::unity::get_component<app::EnemyEntity>(death.game_object, types::EnemyEntity::get_class());
            const auto enemy_state_entry = enemy_type_map()[enemy_entity->klass];
            enemy_list states;
            if (enemy_state_entry.index() == 0) {
                states = std::get<0>(enemy_state_entry);
            } else {
                states = std::get<1>(enemy_state_entry)(enemy_entity);
            }

            for (auto state: states) {
                state.set(state.get() + 1);
            }

            auto it = damage_type_map.find(death.damage->fields.m_damageType);

            // Count Blaze and Grenade burns as Blaze and Grenade deaths but
            // count Sentry burns as Sentry deaths, albeit they are technically
            // Grenade burns internally (see sentry_burn_damage_type_fix.cpp)
            if (death.damage->fields.m_damageType == app::DamageType__Enum::Heat) {
                if (death.damage->fields.m_abilityType == app::AbilityType__Enum::Grenade) {
                    it = damage_type_map.find(app::DamageType__Enum::Grenade);
                } else if (death.damage->fields.m_abilityType == app::AbilityType__Enum::Blaze) {
                    it = damage_type_map.find(app::DamageType__Enum::Blaze);
                } else if (death.damage->fields.m_abilityType == app::AbilityType__Enum::SpiritSentrySpell) {
                    it = damage_type_map.find(app::DamageType__Enum::SpiritSentry);
                }
            } else if (
                death.damage->fields.m_damageType == app::DamageType__Enum::Grenade &&
                death.damage->fields.m_abilityType == app::AbilityType__Enum::SpiritSentrySpell
            ) {
                it = damage_type_map.find(app::DamageType__Enum::SpiritSentry);
            }

            if (it != damage_type_map.end()) {
                it->second.set(it->second.get() + 1);
            }
        }

        [[maybe_unused]]
        auto enemy_stats_handle = enemy_death_event_bus().register_handler(EventTiming::Before, handle_enemy_stats);
    } // namespace
} // namespace core::api::death_listener
