#pragma once

enum class GameEvent {
    Update,
    FixedUpdate,

    /**
     * Called when TAS framestepping is enabled, TAS runs its update loop.
     */
    TASPausedUpdate,

    GainedFocus,
    LostFocus,
    Shutdown,

    NewGame,
    CreateSave,
    CreateBackup,
    CreateCheckpoint,
    LoadCheckpoint,
    FinishedLoadingCheckpoint,
    FinishedLoadingSave,
    Respawn,

    OpenAreaMap,
    CloseAreaMap,

    Teleport,
    TrialStart,
    TrialEnd,

    RegisteringInputSimulators,
};
