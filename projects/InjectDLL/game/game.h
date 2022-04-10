#pragma once

#include <enums/game_event.h>
#include <randomizer/event_bus.h>

namespace game
{
    enum class RandoContainer
    {
        Animation,
        GameObjects,
        Messages,
        Multiplayer,
        Randomizer,
    };

    EventBus<GameEvent>& event_bus();

    float delta_time();
    float fixed_delta_time();

    app::GameObject* container(RandoContainer c);
    void add_to_container(RandoContainer c, app::GameObject* go);
    app::GameController* controller();
    bool is_paused();
}
