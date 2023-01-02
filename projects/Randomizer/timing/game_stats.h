#pragma once

#include <Core/enums/game_areas.h>
#include <Core/save_meta/save_meta.h>
#include <Core/utils/mood_guid.h>
#include <nlohmann/json.hpp>
#include <unordered_map>

NLOHMANN_JSON_NAMESPACE_BEGIN
        template <typename T>
        struct adl_serializer<std::unordered_map<GameArea, T>> {
            static void to_json(nlohmann::json &j, const std::unordered_map<GameArea, T>& v) {
                j = nlohmann::json::object();

                for (const auto &item: v) {
                    j[std::to_string(static_cast<int>(item.first))] = item.second;
                }
            }

            static void from_json(const nlohmann::json &j, std::unordered_map<GameArea, T>& v) {
                for (const auto &[key, value]: j.items()) {
                    v[static_cast<GameArea>(std::stoi(key))] = value.get<T>();
                }
            }
        };

        template <typename T>
        struct adl_serializer<std::map<app::AbilityType__Enum, T>> {
            static void to_json(nlohmann::json &j, const std::map<app::AbilityType__Enum, T>& v) {
                j = nlohmann::json::object();

                for (const auto &item: v) {
                    j[std::to_string(static_cast<int>(item.first))] = item.second;
                }
            }

            static void from_json(const nlohmann::json &j, std::map<app::AbilityType__Enum, T>& v) {
                for (const auto &[key, value]: j.items()) {
                    v[static_cast<app::AbilityType__Enum>(std::stoi(key))] = value.get<T>();
                }
            }
        };
NLOHMANN_JSON_NAMESPACE_END

namespace core::timing {
    constexpr float PPM_TIMESPAN = 60.f * 10.f; // 10 Minutes

    class GameStats : public save_meta::JsonSaveMetaSerializable {
    };

    class CheckpointGameStats : public GameStats {
    public:
        // Tracking
        int total_pickups = 0;

        // Stats
        std::unordered_map<GameArea, int> pickups_per_area;

        // JSON
        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
                CheckpointGameStats,
                total_pickups,
                pickups_per_area
        );

        // Methods
        void report_pickup(GameArea area);

        nlohmann::json json_serialize() override;

        void json_deserialize(nlohmann::json &j) override;
    };

    class SaveFileGameStats : public GameStats {
    protected:
        float get_current_ppm_over_timespan();

        void recalculate_max_ppm_over_timespan();

    public:
        struct AreaStats {
            int deaths = 0;
            float time_spent = 0.f;

            NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
                    AreaStats,
                    deaths,
                    time_spent
            );
        };

        // Tracking
        float time_since_last_checkpoint = 0.f;
        float total_time = 0.f;

        /**
         * Countdowns for recent pickups. For each pickup collected, a value of PPM_TIMESPAN
         * is added to this vector. For each reported time spent, all values are decreased by the time spent
         * and all <=0 values are removed. This is used for PPM-over-timespan calculation
         */
        std::vector<float> recent_pickup_timers;

        /**
         * location_name -> collected_at
         */
        std::map<std::string, float> collected_pickups;

        /**
         * AbilityType -> collected_at
         */
        std::map<app::AbilityType__Enum, float> ability_timestamps;

        // Stats
        float max_ppm_over_timespan = 0.f;
        float max_ppm_over_timespan_at = 0.f;
        float time_lost_to_deaths = 0.f;
        int teleport_count = 0;
        int total_deaths = 0;
        std::unordered_map<GameArea, AreaStats> area_stats;

        // JSON
        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
                SaveFileGameStats,
                time_since_last_checkpoint,
                total_time,
                recent_pickup_timers,
                collected_pickups,
                ability_timestamps,
                max_ppm_over_timespan,
                max_ppm_over_timespan_at,
                time_lost_to_deaths,
                teleport_count,
                total_deaths,
                area_stats
        );

        // Methods
        void report_time_spent(GameArea area, float time);

        void report_pickup(GameArea area, const std::string &location_name);

        void report_ability_acquired(app::AbilityType__Enum ability);

        void report_death(GameArea area);

        void report_checkpoint_created();

        void report_respawn();

        void report_teleport();

        nlohmann::json json_serialize() override;

        void json_deserialize(nlohmann::json &j) override;
    };
} // namespace core::timing