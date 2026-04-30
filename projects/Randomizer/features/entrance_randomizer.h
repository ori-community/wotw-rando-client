#pragma once
#include <string>

namespace randomizer::entrances {
    using EntranceName = std::string;

    struct EntranceLoadingZone {
        std::string scene_name;
        app::Rect rect;
    };

    struct EntranceInfo {
        /** Display Name used in the uber state menu */
        std::string display_name;

        /** Scenes that need to be loaded for this entrance to be functional. The first one needs to contain the actual LegacyDoor component */
        std::vector<std::string> scene_names;

        /** The name of the target entrance, nullopt if the door is disabled */
        std::optional<EntranceName> target_entrance_name;

        std::vector<EntranceLoadingZone> target_loading_zones_cache;

        void clear_target_loading_zones();
        bool has_target_loading_zones() const;
    };

    std::vector<EntranceName> get_entrance_names();
    const EntranceInfo& get_entrance_info(const EntranceName& name);
    const EntranceInfo& get_default_entrance_info(const EntranceName& name);
    int get_entrance_id_from_entrance_name(const EntranceName& name);
    const EntranceName& get_entrance_name_from_entrance_id(int door_id);
    bool has_entrance_name(const EntranceName& name);
    bool has_entrance_id(int door_id);
    std::unordered_map<EntranceName, int> get_entrance_name_to_entrance_id_map();
}
