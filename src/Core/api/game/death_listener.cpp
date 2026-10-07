#include <Core/api/game/death_listener.h>
#include <Modloader/app/methods/Moon/EnemyEntity.h>
#include <Modloader/app/methods/SeinDamageReciever.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <format>


namespace core::api::death_listener {
    using namespace app::classes;
    namespace {
        IL2CPP_INTERCEPT(void, Moon::EnemyEntity, OnDied, app::EnemyEntity * this_ptr, app::DamageResult result) {
            auto* go = il2cpp::unity::get_game_object(this_ptr);
            Death death{ go, result.Damage };
            death_event_bus().emit(events::BeforeEnemyDeath(death));
            next::Moon::EnemyEntity::OnDied(this_ptr, result);
            death_event_bus().emit(events::AfterEnemyDeath(death));
        }

        IL2CPP_INTERCEPT(void, SeinDamageReciever, OnKill, app::SeinDamageReciever * this_ptr, app::Damage* damage) {
            auto* go = damage->fields.m_sender;
            Death death{ go, damage };
            death_event_bus().emit(events::BeforePlayerDeath(death));
            next::SeinDamageReciever::OnKill(this_ptr, damage);
            death_event_bus().emit(events::AfterPlayerDeath(death));
        }
    } // namespace

    events::bus_t& death_event_bus() {
        static events::bus_t bus;
        return bus;
    }
} // namespace core::api::death_listener
