#pragma once

#include <Randomizer/stats/game_stats.h>

namespace randomizer::timing {
    [[nodiscard]]
    common::Droppable::ptr_t scoped_disable_position_recording();
    [[nodiscard]]
    common::Droppable::ptr_t scoped_disable_ability_tracking();

    class GameTrackerPersistentMetaData final : public core::save_meta::CborSaveMetaSerializable {
    public:
        /** States that currently have an active timeline entry */
        std::unordered_set<core::api::uber_states::UntypedUberId> active_tracked_states;

        /** IDs of custom timeline entries that are currently active */
        std::unordered_set<uint64_t> active_custom_timeline_entries;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
            GameTrackerPersistentMetaData,
            active_tracked_states,
            active_custom_timeline_entries
        );

        nlohmann::json json_serialize() override;
        void json_deserialize(nlohmann::json& j) override;
    };

    class GameTrackerVolatileMetaData final : public core::save_meta::CborSaveMetaSerializable {
    public:
        /** IDs of custom timeline entries that are currently active */
        std::unordered_set<uint64_t> active_custom_timeline_entries;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
            GameTrackerVolatileMetaData,
            active_custom_timeline_entries
        );

        nlohmann::json json_serialize() override;
        void json_deserialize(nlohmann::json& j) override;
    };

    void override_in_game_time(float in_game_time);
    float get_in_game_time();
    void force_set_game_finished(bool value);
    SaveFileGameStats& get_save_file_game_stats();
    void track_custom_timeline_entry(uint64_t id);
    void untrack_custom_timeline_entry(uint64_t id);
}

NLOHMANN_JSON_NAMESPACE_BEGIN
template<>
struct adl_serializer<std::unordered_set<core::api::uber_states::UntypedUberId>> {
    static void to_json(nlohmann::json& j, const std::unordered_set<core::api::uber_states::UntypedUberId>& v) {
        j = nlohmann::json::array();

        for (const auto& item : v) {
            j.push_back(item);
        }
    }

    static void from_json(const nlohmann::json& j, std::unordered_set<core::api::uber_states::UntypedUberId>& v) {
        for (const auto& [key, value] : j.items()) {
            v.insert(value.get<core::api::uber_states::UntypedUberId>());
        }
    }
};
NLOHMANN_JSON_NAMESPACE_END
