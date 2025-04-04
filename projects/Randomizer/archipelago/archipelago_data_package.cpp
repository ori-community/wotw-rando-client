#include <Core/utils/json_serializers.h>
#include <Modloader/modloader.h>
#include <Randomizer/archipelago/archipelago_data_package.h>

namespace randomizer::archipelago {
    const std::filesystem::path DATA_PACKAGE_PATH = "archipelago_data_package_cache.json";

    ArchipelagoDataPackage::ArchipelagoDataPackage() { load_data_from_disk(); }

    void ArchipelagoDataPackage::add_game_data(const std::unordered_map<std::string, messages::GameData>& new_data) {
        m_game_name_to_game_data.insert_range(new_data);
        save_data_to_disk();
        rebuild_caches();
    }

    std::optional<std::string> ArchipelagoDataPackage::get_item_name(const ids::archipelago_id_t item_id, const std::string& game) const {
        if (m_item_id_to_name_cache.contains(game)) {
            const auto cache_it = m_item_id_to_name_cache.at(game).find(item_id);
            if (cache_it != m_item_id_to_name_cache.at(game).end()) {
                return cache_it->second;
            }
            return std::nullopt;
        }
        return std::nullopt;
    }

    std::optional<std::string> ArchipelagoDataPackage::get_location_name(const ids::archipelago_id_t item_id, const std::string& game) const {
        if (m_location_id_to_name_cache.contains(game)) {
            const auto cache_it = m_location_id_to_name_cache.at(game).find(item_id);
            if (cache_it != m_location_id_to_name_cache.at(game).end()) {
                return cache_it->second;
            }
            return std::nullopt;
        }
        return std::nullopt;
    }

    std::vector<std::string> ArchipelagoDataPackage::get_outdated_game_data_packages(const std::unordered_map<std::string, std::string>& checksums) const {
        std::vector<std::string> outdated_games;

        for (const auto& [game, checksum]: checksums) {
            const auto it = m_game_name_to_game_data.find(game);
            if (it == m_game_name_to_game_data.end() || it->second.checksum != checksum) {
                outdated_games.push_back(game);
            }
        }

        return outdated_games;
    }

    void ArchipelagoDataPackage::rebuild_caches() {
        m_item_id_to_name_cache.clear();
        m_location_id_to_name_cache.clear();

        for (const auto& [game, data]: m_game_name_to_game_data) {
            for (const auto& [item_name, id]: data.item_name_to_id) {
                m_item_id_to_name_cache[game][id] = item_name;
            }

            for (const auto& [location_name, id]: data.location_name_to_id) {
                m_location_id_to_name_cache[game][id] = location_name;
            }
        }
    }

    void ArchipelagoDataPackage::save_data_to_disk() {
        std::ofstream cache_ofstream(modloader::base_path() / DATA_PACKAGE_PATH);
        cache_ofstream << std::setw(4) << nlohmann::json(m_game_name_to_game_data) << std::endl;
        cache_ofstream.close();
    }

    void ArchipelagoDataPackage::load_data_from_disk() {
        nlohmann::json j;
        if (!load_json_file(DATA_PACKAGE_PATH.string(), j)) {
            modloader::error("archipelago", "Unable to read data package cache file");
            return;
        }

        m_game_name_to_game_data.clear();
        nlohmann::from_json(j, m_game_name_to_game_data);

        rebuild_caches();
    }
} // namespace randomizer::archipelago
