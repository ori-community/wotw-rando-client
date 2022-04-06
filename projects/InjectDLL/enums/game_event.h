#pragma once

enum class GameEvent
{
    Update,
    FixedUpdate,
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
