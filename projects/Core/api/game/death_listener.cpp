#include <Modloader/app/methods/Moon/EnemyEntity.h>
#include <Modloader/app/methods/SeinDamageReciever.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <Core/api/game/death_listener.h>

#include <format>

namespace core::api::death_listener {
    using namespace app::classes;
    namespace {
        common::TimedEventBus<Death> _enemy_death_event_bus;
        common::TimedEventBus<Death> _player_death_event_bus;

        IL2CPP_INTERCEPT(Moon::EnemyEntity, void, OnDied, (app::EnemyEntity * this_ptr, app::DamageResult result)) {
            auto* go = il2cpp::unity::get_game_object(this_ptr);
            Death death{ go, result.Damage };
            _enemy_death_event_bus.trigger_event(EventTiming::Before, death);
            next::Moon::EnemyEntity::OnDied(this_ptr, result);
            _enemy_death_event_bus.trigger_event(EventTiming::After, death);
        }

        IL2CPP_INTERCEPT(SeinDamageReciever, void, OnKill, (app::SeinDamageReciever * this_ptr, app::Damage* damage)) {
            auto* go = damage->fields.m_sender;
            Death death{ go, damage };
            _player_death_event_bus.trigger_event(EventTiming::Before, death);
            next::SeinDamageReciever::OnKill(this_ptr, damage);
            _player_death_event_bus.trigger_event(EventTiming::After, death);
        }
    } // namespace

    common::TimedEventBus<Death>& enemy_death_event_bus() {
        return _enemy_death_event_bus;
    }

    common::TimedEventBus<Death>& player_death_event_bus() {
        return _player_death_event_bus;
    }
} // namespace core::api::death_listener
