#pragma once

#include <Core/enums/game_areas.h>
#include <Core/save_meta/save_meta.h>
#include <Core/utils/mood_guid.h>
#include <nlohmann/json.hpp>
#include <unordered_map>

namespace core::timing {
    constexpr float RECENT_PICKUPS_TIMESPAN = 60.f * 5.f; // 5 Minutes

    class GameStats : public save_meta::JsonSaveMetaSerializable {
    protected:
        // ID for this stats collection
        utils::MoodGuid guid;

    public:
        const utils::MoodGuid& get_guid();
    };

    class CheckpointGameStats : public GameStats {
    public:
        // Tracking
        int total_pickups = 0;

        /**
         * Countdowns for recent pickups. For each pickup collected, a value of RECENT_PICKUPS_TIMESPAN
         * is added to this vector. For each reported time spent, all values are decreased by the time spent
         * and all <=0 values are removed. This is used for PPM-over-timespan calculation
         */
        std::vector<float> recent_pickups;

        // Stats
        float max_ppm_over_timespan = 0.f;
        float max_ppm_over_timespan_at = 0.f;
        std::unordered_map<GameArea, int> pickups_per_area;

        // JSON
        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
                CheckpointGameStats,
                guid,
                total_pickups,
                recent_pickups,
                max_ppm_over_timespan,
                max_ppm_over_timespan_at,
                pickups_per_area
        );

        // Methods
        void report_time_spent(float time);

        void report_pickup(GameArea area);

        nlohmann::json json_serialize() override;

        void json_deserialize(nlohmann::json& j) override;
    };

    class SaveFileGameStats : public GameStats {
    public:
        // Tracking
        float time_since_last_pickup = 0.f;
        float time_since_last_save = 0.f;
        float total_time = 0.f;

        // Stats
        float time_lost_to_deaths = 0.f;
        int warps_used = 0;
        int total_deaths = 0;
        std::unordered_map<GameArea, float> time_per_area;
        std::unordered_map<GameArea, int> deaths_per_area;

        // JSON
        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
                SaveFileGameStats,
                guid,
                time_since_last_pickup,
                time_since_last_save,
                total_time,
                time_lost_to_deaths,
                warps_used,
                total_deaths,
                time_per_area,
                deaths_per_area
        );

        // Methods
        void report_time_spent(GameArea area, float time);

        void report_death(GameArea area);

        nlohmann::json json_serialize() override;

        void json_deserialize(nlohmann::json& j) override;
    };
} // namespace core::timing