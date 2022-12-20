#include <Randomizer/timing/game_stats.h>

namespace core::timing {
    void GameStats::report_time_spent(GameArea area, float time) {
        this->time_per_area[area] += time;
        this->total_time += time;
        this->time_since_last_pickup += time;
        this->time_since_last_save += time;
    }

    void GameStats::report_pickup(GameArea area) {
        ++this->pickups_per_area[area];
        ++this->total_pickups;
    }

    void GameStats::report_death(GameArea area) {
        ++this->total_deaths;
        ++this->deaths_per_area[area];
    }
}
