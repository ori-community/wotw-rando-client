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

    struct SaveOptions {
        bool refill = false;
        bool refill_instantly = true;
        bool to_disk = true;
        bool restore_instantly = false;

        SaveOptions(bool refill, bool refill_instantly, bool to_disk, bool restore_instantly) :
                refill(refill), refill_instantly(refill_instantly), to_disk(to_disk),
             restore_instantly(restore_instantly) {}

        SaveOptions() {};
    };

    struct StoredHealthAndEnergy {
        float health;
        float energy;

        StoredHealthAndEnergy(float health, float energy) :
                health(health), energy(energy) {}

        StoredHealthAndEnergy() :
                health(0.f), energy(0.f) {}
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
    void checkpoint(bool refill = false, bool refill_instantly = true, bool restore_instantly = false);
    void save(bool queue = false, const SaveOptions& options = SaveOptions(false, false, true, false));
} // namespace game
