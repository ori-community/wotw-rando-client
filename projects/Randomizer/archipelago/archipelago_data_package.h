#pragma once

#include <unordered_map>
#include <string>
#include <Randomizer/archipelago/archipelago_protocol.h>

namespace randomizer::archipelago {
    class ArchipelagoDataPackage {
    public:
        ArchipelagoDataPackage();

        /** Adds a batch of game data packages to the store */
        void add_game_data(const std::unordered_map<std::string, messages::GameData>& new_data);

        /** Returns the name of an item, or std::nullopt if the item cannot be found */
        std::optional<std::string> get_item_name(ids::archipelago_id_t item_id, const std::string& game) const;

        /** Returns the name of a location, or std::nullopt if the location cannot be found */
        std::optional<std::string> get_location_name(ids::archipelago_id_t item_id, const std::string& game) const;

        /** Returns a list of games that have a different checksum in cache than given in the game -> checksum map */
        std::vector<std::string> get_outdated_game_data_packages(const std::unordered_map<std::string, std::string>& checksums) const;

    private:
        void rebuild_caches();
        void save_data_to_disk();
        void load_data_from_disk();

        std::unordered_map<std::string, messages::GameData> m_game_name_to_game_data;
    };
}
