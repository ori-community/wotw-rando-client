#include <Randomizer/stats/game_stats.h>
#include <Common/vx.h>

#include "Randomizer/map/map_icons.h"

namespace randomizer::timing {
    void SaveFileGameStats::report_in_game_time_spent(GameArea area, float time) {
        this->area_stats[area].in_game_time_spent += time;
        this->in_game_time += time;
        this->time_since_last_checkpoint += time;
    }

    void SaveFileGameStats::report_async_loading_time_spent(float time, AsyncLoadingState reason) {
        this->async_loading_times[reason] += time;
    }

    void SaveFileGameStats::report_checkpoint_created() {
        this->time_since_last_checkpoint = 0.f;
    }

    void SaveFileGameStats::report_respawn() {
        this->time_since_last_checkpoint = 0.f;
    }

    void SaveFileGameStats::set_discovered_item(const std::size_t id, DiscoveredItem item) {
        discovered_items[id] = std::move(item);
    }

    float SaveFileGameStats::get_total_async_loading_time() const {
        float total = 0.f;
        for (const auto& item : this->async_loading_times) {
            total += item.second;
        }
        return total;
    }

    std::vector<std::byte> SaveFileGameStats::serialize() {
        auto str = nlohmann::json(*this).dump();
        core::utils::ByteStream stream;
        stream.write_string_with_length(str);
        serialize_event_stream(stream);
        return stream.buffer;
    }

    void SaveFileGameStats::deserialize(core::utils::ByteStream& stream) {
        auto str = stream.read_string_with_length();
        auto j = nlohmann::json::parse(str);
        j.get_to(*this);
        deserialize_event_stream(stream);
    }

    void SaveFileGameStats::report_position(const app::Vector2& position) {
        m_event_stream.emplace_back(PositionEvent(
            in_game_time,
            position.x,
            position.y
        ));
    }

    void SaveFileGameStats::report_displacement(const app::Vector2& from, const app::Vector2& to, DisplacementReason reason, float time_lost) {
        m_event_stream.emplace_back(DisplacementEvent(
            in_game_time,
            reason,
            from.x,
            from.y,
            to.x,
            to.y,
            time_lost
        ));
    }

    void SaveFileGameStats::report_stat(GameStat stat, float value) {
        m_event_stream.emplace_back(StatEvent(
            in_game_time,
            stat,
            value
        ));
    }

    void SaveFileGameStats::add_timeline_entry(const std::string& label, map::icons::MapIcon::Type icon, TimelineEntryEvent::Type type) {
        m_event_stream.emplace_back(TimelineEntryEvent(
            in_game_time,
            label,
            icon,
            type
        ));
    }

    void SaveFileGameStats::serialize_event_stream(core::utils::ByteStream& stream) {
        for (const auto& e: m_event_stream) {
            stream.write(static_cast<std::uint32_t>(e.index()));

            std::visit([&](auto&& event) {
                stream.write(event.in_game_time);
            }, e);

            e | vx::match {
                [&](const PositionEvent& event) {
                    stream.write(event.x);
                    stream.write(event.y);
                },
                [&](const DisplacementEvent& event) {
                    stream.write(event.reason);
                    stream.write(event.from_x);
                    stream.write(event.from_y);
                    stream.write(event.to_x);
                    stream.write(event.to_y);
                    stream.write(event.time_lost);
                },
                [&](const TimelineEntryEvent& event) {
                    stream.write_string_with_length(event.label);
                    stream.write(event.icon);
                    stream.write(event.type);
                },
                [&](const StatEvent& event) {
                    stream.write(event.stat);
                    stream.write(event.value);
                },
            };
        }
    }

    void SaveFileGameStats::deserialize_event_stream(core::utils::ByteStream& stream) {
        m_event_stream.clear();

        while (stream.available()) {
            const auto type_index = stream.read<std::uint32_t>();
            const auto time = stream.read<float>();

            switch (type_index) {
                case 0: {  // PositionEvent
                    const auto x = stream.read<float>();
                    const auto y = stream.read<float>();

                    m_event_stream.emplace_back(PositionEvent(time, x, y));
                } break;
                case 1: {  // DisplacementEvent
                    const auto reason = stream.read<DisplacementReason>();
                    const auto from_x = stream.read<float>();
                    const auto from_y = stream.read<float>();
                    const auto to_x = stream.read<float>();
                    const auto to_y = stream.read<float>();
                    const auto time_lost = stream.read<float>();

                    m_event_stream.emplace_back(DisplacementEvent(
                        time,
                        reason,
                        from_x,
                        from_y,
                        to_x,
                        to_y,
                        time_lost
                    ));
                } break;
                case 2: {  // TimelineEntryEvent
                    const auto label = stream.read_string_with_length();
                    const auto icon = stream.read<map::icons::MapIcon::Type>();
                    const auto type = stream.read<TimelineEntryEvent::Type>();

                    m_event_stream.emplace_back(TimelineEntryEvent(
                        time,
                        label,
                        icon,
                        type
                    ));
                } break;
                case 3: {  // StatEvent
                    const auto stat = stream.read<GameStat>();
                    const auto value = stream.read<float>();

                    m_event_stream.emplace_back(StatEvent(
                        time,
                        stat,
                        value
                    ));
                } break;
                default:
                    throw std::runtime_error(std::format("Unknown event type: {}", type_index));
            }
        }
    }
} // namespace randomizer::timing
