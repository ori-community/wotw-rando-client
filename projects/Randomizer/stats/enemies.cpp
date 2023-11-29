#include <Modloader/app/types/BombSlugEntity.h>
#include <Modloader/app/types/DropSlugEntity.h>
#include <Modloader/app/types/EnemyEntity.h>
#include <Modloader/app/types/GasballEntity.h>
#include <Modloader/app/types/KamikazeLizardEntity.h>
#include <Modloader/app/types/MinerNPCEntity.h>
#include <Modloader/app/types/PiranhaEntity.h>
#include <Modloader/app/types/SkeetoEntity.h>
#include <Modloader/app/types/SpikeSlugEntity.h>
#include <Modloader/app/types/TentacleEntity.h>
#include <Modloader/app/types/WaterInteraction.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>

#include <Common/event_bus.h>
#include <Core/api/game/death_listener.h>
#include <Core/api/uber_states/uber_state.h>

namespace core::api::death_listener {
    using namespace app::classes;

    namespace {

        std::unordered_map<app::DamageType__Enum, uber_states::UberState> damage_type_map{
            {app::DamageType__Enum::Sword, uber_states::UberState(10, 11)},
            {app::DamageType__Enum::Hammer, uber_states::UberState(10, 12)},
            {app::DamageType__Enum::Bow, uber_states::UberState(10, 13)},
            {app::DamageType__Enum::SpiritSpear, uber_states::UberState(10, 14)},
            {app::DamageType__Enum::SpiritSentry, uber_states::UberState(10, 15)},
            {app::DamageType__Enum::Blaze, uber_states::UberState(10, 16)},
            {app::DamageType__Enum::Grenade, uber_states::UberState(10, 17)},
            {app::DamageType__Enum::Heat, uber_states::UberState(10, 18)},
            {app::DamageType__Enum::Chakram, uber_states::UberState(10, 19)},
            {app::DamageType__Enum::ChargeJump, uber_states::UberState(10, 20)},
            {app::DamageType__Enum::Glow, uber_states::UberState(10, 21)},
            {app::DamageType__Enum::Projectile, uber_states::UberState(10, 22)},
            {app::DamageType__Enum::Water, uber_states::UberState(10, 23)},
        };

        std::unordered_map<app::Type*, std::vector<uber_states::UberState>>& enemy_type_map() {
            static std::unordered_map<app::Type*, std::vector<uber_states::UberState>> inner_enemy_type_map = {
                {il2cpp::get_runtime_type(types::MinerNPCEntity::get_class()), {uber_states::UberState(10, 40)}},
                {il2cpp::get_runtime_type(types::SkeetoEntity::get_class()), {uber_states::UberState(10, 41)}},
                {il2cpp::get_runtime_type(types::TentacleEntity::get_class()), {uber_states::UberState(10, 42)}},
                {il2cpp::get_runtime_type(types::SpikeSlugEntity::get_class()), {uber_states::UberState(10, 43)}},
                {il2cpp::get_runtime_type(types::DropSlugEntity::get_class()), {uber_states::UberState(10, 43)}},
                {il2cpp::get_runtime_type(types::PiranhaEntity::get_class()), {uber_states::UberState(10, 44)}},
                // We use WaterInteraction instead to find water worms.
                //{ il2cpp::get_runtime_type(types::SandWormEntity::get_class()), { uber_states::UberState(10, 44) } },
                {il2cpp::get_runtime_type(types::GasballEntity::get_class()), {uber_states::UberState(10, 45)}},
                {il2cpp::get_runtime_type(types::KamikazeLizardEntity::get_class()), {uber_states::UberState(10, 45)}},
                //{ il2cpp::get_runtime_type(types::ScourgeEntity::get_class()), { uber_states::UberState(10, 41), uber_states::UberState(10, 45) } },
                {il2cpp::get_runtime_type(types::BombSlugEntity::get_class()), {uber_states::UberState(10, 43), uber_states::UberState(10, 45)}}
            };

            return inner_enemy_type_map;
        }

        uber_states::UberState enemy_state(10, 10);

        void handle_enemy_stats(Death death, EventTiming timing) {
            enemy_state.set(enemy_state.get() + 1);
            auto enemy_entity = il2cpp::unity::get_component<app::EnemyEntity>(death.game_object, types::EnemyEntity::get_class());
            auto type = enemy_entity->fields.m_enemyType;
            auto states = enemy_type_map()[type];
            for (auto state: states) {
                state.set(state.get() + 1);
            }

            if (il2cpp::unity::get_component(death.game_object, app::classes::types::WaterInteraction::get_class()) != nullptr) {
                uber_states::UberState water(10, 44);
                water.set(water.get() + 1);
            }

            auto it = damage_type_map.find(death.damage->fields.m_damageType);
            if (it != damage_type_map.end()) {
                it->second.set(it->second.get() + 1);
            }


        }

        auto enemy_stats_handle = enemy_death_event_bus().register_handler(EventTiming::Before, handle_enemy_stats);
    } // namespace
} // namespace core::api::death_listener
