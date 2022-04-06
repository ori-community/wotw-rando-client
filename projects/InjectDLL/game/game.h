#pragma once

#include <enums/game_event.h>
#include <randomizer/event_bus.h>

namespace game
{
    EventBus<GameEvent>& event_bus();

    float delta_time();
    float fixed_delta_time();

    app::GameController* controller();
    bool is_paused();
}
