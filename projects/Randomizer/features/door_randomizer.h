#pragma once
#include <string>
#include <array>

namespace randomizer::doors {
    using DoorName = std::string;

    struct DoorLoadingZone {
        std::string scene_name;
        app::Rect rect;
    };

    struct DoorInfo {
        /** Display Name used in the uber state menu */
        std::string display_name;

        /** Scenes that need to be loaded for this door to be functional. The first one needs to contain the actual LegacyDoor component */
        std::vector<std::string> scene_names;

        /** The name of the target door, nullopt if the door is disabled */
        std::optional<DoorName> target_door_name;

        std::vector<DoorLoadingZone> target_loading_zones_cache;

        void clear_target_loading_zones();
        bool has_target_loading_zones() const;
    };

    std::vector<DoorName> get_door_names();
    const DoorInfo& get_door_info(const DoorName& name);
    const DoorInfo& get_default_door_info(const DoorName& name);
    int get_door_id_from_door_name(const DoorName& name);
    const DoorName& get_door_name_from_door_id(int door_id);
    bool has_door_name(const DoorName& name);
    bool hast_door_id(int door_id);
    std::unordered_map<DoorName, int> get_door_name_to_door_id_map();
}
