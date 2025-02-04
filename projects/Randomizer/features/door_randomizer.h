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
        /** The name of the scene this door is in */
        std::string scene_name;

        /** The name of the target door, nullopt if the door is disabled */
        std::optional<DoorId> target_door_id;

        std::optional<DoorLoadingZone> target_loading_zone_cache = std::nullopt;

        void clear_target_loading_zone();
        bool has_target_loading_zone() const;
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
