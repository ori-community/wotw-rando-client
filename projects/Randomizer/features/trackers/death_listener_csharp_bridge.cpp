#include <Core/api/game/death_listener.h>
#include <Modloader/common.h>
#include <Randomizer/interop/csharp_bridge.h>

using namespace core::api::death_listener;

namespace {
    void on_enemy_death(EnemyDeath death, EventTiming timing) {
        if (csharp_bridge::on_enemy_death != nullptr)
            csharp_bridge::on_enemy_death(death.game_object_name.c_str(), death.damage_type);
    }

    void initialize() {
        enemy_death_event_bus().register_handler(&on_enemy_death);
    }

    CALL_ON_INIT(initialize);
}
