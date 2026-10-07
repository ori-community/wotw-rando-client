#pragma once

#include <Common/event_bus.h>
#include <Core/macros.h>
#include <Modloader/app/structs/GameController.h>
#include <Modloader/app/structs/GameStateMachine_State__Enum.h>
#include <optional>


namespace core::api::game {
    namespace events {
        struct Update {};
        struct FixedUpdate {};
        struct BeforeUnityUpdateLoop {};
        struct AfterUnityUpdateLoop {};
        struct GUI {};
        struct TASPausedUpdate {};
        struct GainedFocus {};
        struct LostFocus {};
        struct Shutdown {};
        struct BeforeNewGame {};
        struct AfterNewGame {};
        struct BeforeNewGameInitialized {};
        struct AfterNewGameInitialized {};
        struct CreatedSave {};
        struct CreatedBackup {};
        struct BeforeCreateCheckpoint {};
        struct CreatedCheckpoint {};
        struct RestoreCheckpointPrepareSeedExecutionEnvironment {};
        struct BeforeRestoreCheckpoint {};
        struct RestoredCheckpoint {};
        struct BeforeFinishLoadingSave {};
        struct FinishedLoadingSave {};
        struct BeforeRespawn {};
        struct Respawned {};
        struct UberStateValueStoreLoaded {};
        struct OpenedAreaMap {};
        struct ClosedAreaMap {};
        struct RefreshedInputControls {};
        struct RenderDebugVisuals {};

        using bus_t = common::EventBus<
            Update,
            FixedUpdate,
            BeforeUnityUpdateLoop,
            AfterUnityUpdateLoop,
            GUI,
            TASPausedUpdate,
            GainedFocus,
            LostFocus,
            Shutdown,
            BeforeNewGame,
            AfterNewGame,
            BeforeNewGameInitialized,
            AfterNewGameInitialized,
            CreatedSave,
            CreatedBackup,
            BeforeCreateCheckpoint,
            CreatedCheckpoint,
            RestoreCheckpointPrepareSeedExecutionEnvironment,
            BeforeRestoreCheckpoint,
            RestoredCheckpoint,
            BeforeFinishLoadingSave,
            FinishedLoadingSave,
            BeforeRespawn,
            Respawned,
            UberStateValueStoreLoaded,
            OpenedAreaMap,
            ClosedAreaMap,
            RefreshedInputControls,
            RenderDebugVisuals
        >;
    }

    enum class GameObjectContainer {
        Main,
        Miscellaneous,
        Animation,
        Messages,
        Prefabs,
        Ghosts,
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

    CORE_DLLEXPORT events::bus_t& event_bus();

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
