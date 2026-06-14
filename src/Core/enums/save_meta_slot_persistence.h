#pragma once

enum class SaveMetaSlotPersistence : int {
    None = 0,
    ThroughDeaths = 1,
    ThroughDeathsAndQTMs = 2,
    ThroughDeathsAndQTMsAndBackups = 3,
};