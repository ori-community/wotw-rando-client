#pragma once

/**
 * Any class extending `core::save_meta::SaveSerializable` can be stored
 * into game save files under a certain SaveMetaSlot.
 * Each slot can only be used once.
 */
enum class SaveMetaSlot: uint8_t {
    SaveFileGameStats = 1,
    SeedMetaData = 2,
    SeedArchiveData = 3,
    SeedEnvironment = 4,
    StaticText = 5,
    SaveFileGameStatsEvents = 6,
    Shops = 7,
};
