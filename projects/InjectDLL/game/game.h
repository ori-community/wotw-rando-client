#pragma once

#include <enums/game_event.h>
#include <randomizer/event_bus.h>

namespace game {
    enum class RandoContainer {
        Animation,
        GameObjects,
        Messages,
        Multiplayer,
        Randomizer,
    };

    MultiEventBus<GameEvent>& event_bus();

    float delta_time();
    float fixed_delta_time();

    app::GameObject* container(RandoContainer c);
    void add_to_container(RandoContainer c, app::GameObject* go);
    app::GameController* controller();
    app::SaveGameController* save_controller();
    bool is_paused();

    bool can_save();
    void save(bool queue = true);
    void checkpoint(bool queue = true);
} // namespace game
