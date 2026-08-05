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
    Shops = 5,
    GameTrackerPersistentMetaData = 6,
    GameTrackerVolatileMetaData = 7,
};
