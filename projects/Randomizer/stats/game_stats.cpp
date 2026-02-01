#include <Randomizer/stats/game_stats.h>

#include <Common/vx.h>

namespace randomizer::timing {
    void SaveFileGameStats::report_in_game_time_spent(GameArea area, float time) {
        this->area_stats[area].in_game_time_spent += time;
        this->in_game_time += time;
        this->time_since_last_checkpoint += time;
    }

    void SaveFileGameStats::report_async_loading_time_spent(float time, AsyncLoadingState reason) {
        this->async_loading_times[reason] += time;
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
        this->time_since_last_checkpoint = 0.f;
    }

    float SaveFileGameStats::get_total_async_loading_time() const {
        float total = 0.f;
        for (const auto& item : this->async_loading_times) {
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

    void SaveFileGameStatsEvents::report_position(const app::Vector2& position) {
        m_event_stream.emplace_back(PositionEvent(
            m_stats->in_game_time,
            position.x,
            position.y
        ));
    }

    void SaveFileGameStatsEvents::report_displacement(const app::Vector2& from, const app::Vector2& to, DisplacementReason reason, float time_lost) {
        m_event_stream.emplace_back(DisplacementEvent(
            m_stats->in_game_time,
            reason,
            from.x,
            from.y,
            to.x,
            to.y,
            time_lost
        ));
    }

    void SaveFileGameStatsEvents::add_timeline_entry(const std::string& label, const std::string& icon) {
        m_event_stream.emplace_back(TimelineEntryEvent(
            m_stats->in_game_time,
            label,
            icon
        ));
    }

    void SaveFileGameStatsEvents::add_map_entry(const std::string& label, const std::string& icon, float x, float y) {
        m_event_stream.emplace_back(MapEntryEvent(
            m_stats->in_game_time,
            label,
            icon,
            x,
            y
        ));
    }

    std::vector<std::byte> SaveFileGameStatsEvents::serialize() {
        core::utils::ByteStream data;

        for (const auto& e: m_event_stream) {
            data.write(e.index());

            std::visit([&](auto&& event) {
                data.write(event.in_game_time);
            }, e);

            e | vx::match {
                [&](const PositionEvent& event) {
                    data.write(event.x);
                    data.write(event.y);
                },
                [&](const DisplacementEvent& event) {
                    data.write(event.reason);
                    data.write(event.from_x);
                    data.write(event.from_y);
                    data.write(event.to_x);
                    data.write(event.to_y);
                    data.write(event.time_lost);
                },
                [&](const TimelineEntryEvent& event) {
                    data.write_string_with_length(event.icon);
                    data.write_string_with_length(event.label);
                },
                [&](const MapEntryEvent& event) {
                    data.write_string_with_length(event.icon);
                    data.write_string_with_length(event.label);
                },
            };
        }

        return data.buffer;
    }

    void SaveFileGameStatsEvents::deserialize(core::utils::ByteStream& stream) {
        m_event_stream.clear();

        while (stream.available()) {
            const auto type_index = stream.read<std::size_t>();

            switch (type_index) {
                case 0:  // PositionEvent
                    m_event_stream.emplace_back(PositionEvent(
                        stream.read<float>(),
                        stream.read<float>(),
                        stream.read<float>()
                    ));
                    break;
                case 1:  // DisplacementEvent
                    m_event_stream.emplace_back(DisplacementEvent(
                        stream.read<float>(),
                        stream.read<DisplacementReason>(),
                        stream.read<float>(),
                        stream.read<float>(),
                        stream.read<float>(),
                        stream.read<float>(),
                        stream.read<float>()
                    ));
                    break;
                case 2:  // TimelineEntryEvent
                    m_event_stream.emplace_back(TimelineEntryEvent(
                        stream.read<float>(),
                        stream.read_string_with_length(),
                        stream.read_string_with_length()
                    ));
                    break;
                case 3:  // MapEntryEvent
                    m_event_stream.emplace_back(MapEntryEvent(
                        stream.read<float>(),
                        stream.read_string_with_length(),
                        stream.read_string_with_length(),
                        stream.read<float>(),
                        stream.read<float>()
                    ));
                    break;
                default:
                    throw std::runtime_error(std::format("Unknown event type: {}", type_index));
            }
        }
    }
} // namespace randomizer::timing
