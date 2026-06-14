#pragma once

#include <Common/event_bus.h>
#include <Core/enums/game_event.h>
#include <Core/macros.h>

#include <Modloader/app/structs/GameController.h>
#include <Modloader/app/structs/GameStateMachine_State__Enum.h>

namespace core::api::game {
    enum class GameObjectContainer {
        Main,
        Miscellaneous,
        Animation,
        Messages,
        Multiplayer,  // TODO: Remove
    };

    struct CORE_DLLEXPORT SaveOptions {
        /** Refill Health and Energy on this checkpoint */
        bool refill = false;

        /** If [refill] is true, keep the refilled resources */
        bool refill_instantly = true;

        /** Store the checkpoint to disk */
        bool to_disk = true;

        /** Restore the checkpoint instantly after making it */
        bool restore_instantly = false;

        /** If set, instead of the current position, create the checkpoint at this position */
        std::optional<app::Vector2> override_position = std::nullopt;
    };

    struct CORE_DLLEXPORT StoredHealthAndEnergy {
        float health;
        float energy;

        StoredHealthAndEnergy(float health, float energy)
                : health(health), energy(energy) {}

        StoredHealthAndEnergy()
                : health(0.f), energy(0.f) {}
    };

    CORE_DLLEXPORT common::TimedMultiEventBus<GameEvent>& event_bus();

    CORE_DLLEXPORT float delta_time();
    CORE_DLLEXPORT float fixed_delta_time();
    CORE_DLLEXPORT app::GameStateMachine_State__Enum game_state();
    CORE_DLLEXPORT bool in_game();

    CORE_DLLEXPORT app::GameObject* container(GameObjectContainer c);
    CORE_DLLEXPORT void add_to_container(GameObjectContainer c, app::GameObject* go);
    CORE_DLLEXPORT app::GameController* game_controller();
    CORE_DLLEXPORT app::SaveGameController* save_controller();
    CORE_DLLEXPORT bool is_paused();

    CORE_DLLEXPORT bool can_save();
    CORE_DLLEXPORT void temporary_save(bool refill = false, bool refill_instantly = true, bool restore_instantly = false, std::optional<app::Vector2> override_position = std::nullopt);
    CORE_DLLEXPORT bool save(bool queue = false, const SaveOptions& options = SaveOptions(false, false, true, false));

    CORE_DLLEXPORT void load(bool immediate = false);

    /**
     * Performs a QTM and load
     */
    CORE_DLLEXPORT void reload_everything();
} // namespace core::api::game
