#pragma once

enum class GameEvent {
    Update,
    FixedUpdate,
    UnityUpdateLoop,

    /**
     * Called when TAS framestepping is enabled, TAS runs its update loop.
     */
    TASPausedUpdate,

    GainedFocus,
    LostFocus,
    Shutdown,

    NewGame,
    NewGameInitialized,
    CreateSave,
    CreateBackup,
    CreateCheckpoint,
    FinishedLoadingCheckpoint,
    FinishedLoadingSave,
    Respawn,
    UberStateValueStoreLoaded,

    OpenAreaMap,
    CloseAreaMap,

    Teleport,
    TrialStart,
    TrialEnd,

    RegisteringInputSimulators,

    MultiverseUpdated,
};
