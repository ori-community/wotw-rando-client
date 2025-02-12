#pragma once
#include <string>
#include <array>

namespace randomizer::doors {
    using DoorId = std::string;

    struct DoorLoadingZone {
        std::string scene_name;
        app::Rect rect;
    };

    struct DoorInfo {
        /** Scenes that need to be loaded for this door to be functional. The first one needs to contain the actual LegacyDoor component */
        std::vector<std::string> scene_names;

        /** The name of the target door, nullopt if the door is disabled */
        std::optional<DoorId> target_door_id;

        std::vector<DoorLoadingZone> target_loading_zones_cache;

        void clear_target_loading_zones();
        bool has_target_loading_zones() const;
    };

    std::vector<DoorId> get_door_ids();
    const DoorInfo& get_door_info(const DoorId& id);
    const DoorInfo& get_default_door_info(const DoorId& id);
    int get_state_id_from_door_id(const DoorId& id);
    const DoorId& get_door_id_from_state_id(int state_id);
    bool has_door_id(const DoorId& id);
    bool has_door_state_id(int state_id);
    std::unordered_map<DoorId, int> get_door_id_to_state_id_map();
}
