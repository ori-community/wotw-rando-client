#pragma once

enum class GameEvent
{
    Update,
    FixedUpdate,
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

    AreaMap,

    Teleport,
    TrialStart,
    TrialEnd
};
