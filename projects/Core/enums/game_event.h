#pragma once

enum class GameEvent {
    Update,
    FixedUpdate,
    UnityUpdateLoop,
    GUI,

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
    RestoreCheckpoint, // Triggered when any uberstate store is loaded
    FinishedLoadingSave, // Only triggered when loading from main menu (after main menu fade)
    Respawn, // Triggered after dying
    UberStateValueStoreLoaded,

    TitleScreenStartup,
    FaderBFadeInFinished,
    FaderBFadeOutFinished,

    OpenAreaMap,
    CloseAreaMap,
    DestroyAreaMap,

    Teleport,
    TrialStart,
    TrialEnd,

    RegisteringInputSimulators,
};
