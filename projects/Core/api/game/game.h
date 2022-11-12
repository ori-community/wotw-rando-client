#pragma once

#include <Core/enums/game_event.h>
#include <Core/utils/event_bus.h>
#include <Core/macros.h>

namespace game {
    enum class RandoContainer {
        Animation,
        GameObjects,
        Messages,
        Multiplayer,
        Randomizer,
    };

    struct CORE_DLLEXPORT SaveOptions {
        bool refill = false;
        bool refill_instantly = true;
        bool to_disk = true;
        bool restore_instantly = false;

        SaveOptions(bool refill, bool refill_instantly, bool to_disk, bool restore_instantly) :
                refill(refill), refill_instantly(refill_instantly), to_disk(to_disk), restore_instantly(restore_instantly) {}

        SaveOptions(){};
    };

    struct CORE_DLLEXPORT StoredHealthAndEnergy {
        float health;
        float energy;

        StoredHealthAndEnergy(float health, float energy) :
                health(health), energy(energy) {}

        StoredHealthAndEnergy() :
                health(0.f), energy(0.f) {}
    };

    CORE_DLLEXPORT MultiEventBus<GameEvent>& event_bus();

    CORE_DLLEXPORT float delta_time();
    CORE_DLLEXPORT float fixed_delta_time();

    CORE_DLLEXPORT app::GameObject* container(RandoContainer c);
    CORE_DLLEXPORT void add_to_container(RandoContainer c, app::GameObject* go);
    CORE_DLLEXPORT app::GameController* controller();
    CORE_DLLEXPORT app::SaveGameController* save_controller();
    CORE_DLLEXPORT bool is_paused();

    CORE_DLLEXPORT bool can_save();
    CORE_DLLEXPORT void checkpoint(bool refill = false, bool refill_instantly = true, bool restore_instantly = false);
    CORE_DLLEXPORT void save(bool queue = false, const SaveOptions& options = SaveOptions(false, false, true, false));

    CORE_DLLEXPORT void load(bool immediate = false);

    /**
     * Performs a QTM and load
     */
    CORE_DLLEXPORT void reload_everything();
} // namespace game
