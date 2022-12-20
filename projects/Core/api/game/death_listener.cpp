#include <Modloader/app/methods/Moon/EnemyEntity.h>
#include <Modloader/app/methods/SeinDamageReciever.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <Randomizer/interop/csharp_bridge.h>
#include <Core/utils/event_bus.h>
#include <Core/api/game/death_listener.h>

namespace core::api::death_listener {
    TimedEventBus<EnemyDeath> _enemy_death_event_bus;
    TimedEventBus<PlayerDeath> _player_death_event_bus;

    namespace {
        IL2CPP_INTERCEPT(Moon::EnemyEntity, void, OnDied, (app::EnemyEntity * this_ptr, app::DamageResult result)) {
            auto* go = il2cpp::unity::get_game_object(this_ptr);
            const auto name = il2cpp::unity::get_object_name(go);

            EnemyDeath death {name, result.Damage->fields.m_damageType };
            _enemy_death_event_bus.trigger_event(death, EventTiming::Before);
            next::Moon::EnemyEntity::OnDied(this_ptr, result);
            _enemy_death_event_bus.trigger_event(death, EventTiming::After);
        }

        IL2CPP_INTERCEPT(SeinDamageReciever, void, OnKill, (app::SeinDamageReciever * this_ptr, app::Damage* damage)) {
            auto* go = damage->fields.m_sender;
            const auto name = il2cpp::unity::get_object_name(go);

            PlayerDeath death {name, damage->fields.m_damageType };
            _player_death_event_bus.trigger_event(death, EventTiming::Before);
            next::SeinDamageReciever::OnKill(this_ptr, damage);
            _player_death_event_bus.trigger_event(death, EventTiming::After);
        }
    } // namespace

    TimedEventBus<EnemyDeath>& enemy_death_event_bus() {
        return _enemy_death_event_bus;
    }

    TimedEventBus<PlayerDeath>& player_death_event_bus() {
        return _player_death_event_bus;
    }
}
