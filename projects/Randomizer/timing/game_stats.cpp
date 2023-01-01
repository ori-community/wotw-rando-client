#include <Randomizer/timing/game_stats.h>

namespace core::timing {
    const utils::MoodGuid& GameStats::get_guid() {
        return this->guid;
    }

    void SaveFileGameStats::report_time_spent(GameArea area, float time) {
        this->time_per_area[area] += time;
        this->total_time += time;
        this->time_since_last_pickup += time;
        this->time_since_last_save += time;
    }

    void SaveFileGameStats::report_death(GameArea area) {
        ++this->total_deaths;
        ++this->deaths_per_area[area];
    }

    nlohmann::json SaveFileGameStats::json_serialize() {
        nlohmann::json j = *this;
        return j;
    }

    void SaveFileGameStats::json_deserialize(nlohmann::json& j) {
        j.get_to(*this);
    }

    void CheckpointGameStats::report_time_spent(float time) {
        auto it = recent_pickups.begin();
        while (it != recent_pickups.end()) {
            *it -= time;
            if (*it <= 0.f) {
                it = recent_pickups.erase(it);
            }
        }
    }

    void CheckpointGameStats::report_pickup(GameArea area) {
        this->recent_pickups.push_back(RECENT_PICKUPS_TIMESPAN);
        ++this->pickups_per_area[area];
        ++this->total_pickups;
    }

    nlohmann::json CheckpointGameStats::json_serialize() {
        nlohmann::json j = *this;
        return j;
    }

    void CheckpointGameStats::json_deserialize(nlohmann::json& j) {
        j.get_to(*this);
    }
}
