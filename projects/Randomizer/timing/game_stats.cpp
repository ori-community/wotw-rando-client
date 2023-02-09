#include <Randomizer/timing/game_stats.h>

namespace randomizer::timing {
    void SaveFileGameStats::report_time_spent(GameArea area, float time) {
        this->area_stats[area].time_spent += time;
        this->total_time += time;
        this->time_since_last_checkpoint += time;

        auto it = recent_pickup_timers.begin();
        while (it != recent_pickup_timers.end()) {
            *it -= time;

            if (*it <= 0.f) {
                it = recent_pickup_timers.erase(it);
                continue;
            }

            ++it;
        }

        if (this->max_ppm_over_timespan_at == 0 && this->total_time >= PPM_TIMESPAN) {
            this->recalculate_max_ppm_over_timespan();
        }
    }

    void SaveFileGameStats::report_loading_time(float time, LoadingState reason) {
        this->loading_times[reason] += time;
    }

    void SaveFileGameStats::report_death(GameArea area) {
        ++this->total_deaths;
        ++this->area_stats[area].deaths;
    }

    nlohmann::json SaveFileGameStats::json_serialize() {
        nlohmann::json j = *this;
        return j;
    }

    void SaveFileGameStats::json_deserialize(nlohmann::json& j) {
        j.get_to(*this);
    }

    void SaveFileGameStats::report_checkpoint_created() {
        this->time_since_last_checkpoint = 0.f;
    }

    void SaveFileGameStats::report_respawn() {
        this->time_lost_to_deaths += this->time_since_last_checkpoint;
        this->time_since_last_checkpoint = 0.f;
    }

    void SaveFileGameStats::report_teleport() {
        ++this->teleport_count;
    }

    void SaveFileGameStats::report_pickup(GameArea area, const std::string& location_name) {
        if (!this->collected_pickups.contains(location_name)) {
            this->recent_pickup_timers.push_back(PPM_TIMESPAN);
            this->collected_pickups[location_name] = this->total_time;

            this->recalculate_max_ppm_over_timespan();
        }
    }

    void SaveFileGameStats::report_ability_acquired(app::AbilityType__Enum ability) {
        if (!this->ability_timestamps.contains(ability)) {
            this->ability_timestamps[ability] = this->total_time;
        }
    }

    void SaveFileGameStats::report_world_event(WorldEvent event) {
        if (!this->world_event_timestamps.contains(event)) {
            this->world_event_timestamps[event] = this->total_time;
        }
    }

    float SaveFileGameStats::get_current_ppm_over_timespan() {
        auto recent_pickup_count = this->recent_pickup_timers.size();
        return static_cast<float>(recent_pickup_count) / PPM_TIMESPAN * 60.f;
    }

    void SaveFileGameStats::recalculate_max_ppm_over_timespan() {
        auto current_ppm_over_timespan = this->get_current_ppm_over_timespan();
        if (current_ppm_over_timespan > this->max_ppm_over_timespan && this->total_time >= PPM_TIMESPAN) {
            this->max_ppm_over_timespan = current_ppm_over_timespan;
            this->max_ppm_over_timespan_at = this->total_time;
        }
    }

    float SaveFileGameStats::get_total_loading_time() {
        float total = 0.f;
        for (const auto& item : this->loading_times) {
            total += item.second;
        }
        return total;
    }

    void CheckpointGameStats::report_pickup(GameArea area) {
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
