#pragma once

#include <unordered_map>
#include <Core/enums/game_areas.h>

namespace core::timing {
    constexpr float RECENT_PICKUPS_TIMESPAN = 60.f * 5.f; // 5 Minutes

    class GameStats {
    protected:
        // Tracking
        float time_since_last_pickup = 0.f;
        float time_since_last_save = 0.f;
        float total_time = 0.f;
        int total_pickups = 0;

        /**
         * Countdowns for recent pickups. For each pickup collected, a value of RECENT_PICKUPS_TIMESPAN
         * is added to this vector. For each reported time spent, all values are decreased by the time spent
         * and all <=0 values are removed. This is used for PPM-over-timespan calculation
         */
        std::vector<float> recent_pickups;

        // Stats
        float time_lost_to_deaths = 0.f;
        int warps_used = 0;
        int total_deaths = 0;
        float max_ppm_over_timespan = 0.f;
        float max_ppm_over_timespan_at = 0.f;
        std::unordered_map<GameArea, float> time_per_area;
        std::unordered_map<GameArea, int> pickups_per_area;
        std::unordered_map<GameArea, int> deaths_per_area;

    public:
        void report_time_spent(GameArea area, float time);

        void report_pickup(GameArea area);

        void report_death(GameArea area);
    };
}