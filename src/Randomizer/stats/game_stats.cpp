#include <Randomizer/stats/game_stats.h>

#include <Common/vx.h>
#include <Modloader/app/methods/GameTimer.h>
#include <Modloader/app/methods/GameWorld.h>
#include <Modloader/app/methods/SaveSlotInfo.h>
#include <Modloader/app/methods/SaveGameController.h>
#include <Modloader/app/methods/SaveSlotsManager.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/map/map_icons.h>
#include <Randomizer/tracking/game_tracker.h>
#include <random>

#include "Core/api/system/save_files.h"
#include "Modloader/fs.h"
#include "Modloader/modloader.h"
#include "packets.pb.h"


namespace randomizer::timing {
    using namespace app::classes;

    constexpr std::string_view EVENT_STREAMS_DIRECTORY = "event_streams";

    namespace {
        std::filesystem::path get_events_stream_files_directory() {
            return modloader::fs::get_randomizer_user_data_path(EVENT_STREAMS_DIRECTORY);
        }

        std::filesystem::path get_events_stream_file_path_for_guid(const core::MoodGuid& guid) {
            return get_events_stream_files_directory() /
                std::format(
                    "{:X}-{:X}-{:X}-{:X}.evs",
                    guid.A,
                    guid.B,
                    guid.C,
                    guid.D
                );
        }
    }

    void SaveFileGameStats::report_in_game_time_spent(GameArea area, float time) {
        this->in_game_time += time;
        this->time_since_last_checkpoint += time;
    }

    void SaveFileGameStats::report_async_loading_time_spent(float time, AsyncLoadingState reason) {
        this->async_loading_times[reason] += time;
    }

    void SaveFileGameStats::report_respawn() {
        this->time_since_last_checkpoint = 0.f;
    }

    void SaveFileGameStats::report_checkpoint_created() {
        this->time_since_last_checkpoint = 0.f;
    }

    void SaveFileGameStats::set_discovered_item(const std::size_t id, DiscoveredItem item) {
        discovered_items[id] = std::move(item);
    }

    float SaveFileGameStats::get_total_async_loading_time() const {
        float total = 0.f;
        for (const auto& val: this->async_loading_times | std::views::values) {
            total += val;
        }
        return total;
    }

    nlohmann::json SaveFileGameStats::json_serialize() {
        const auto save_guid = core::save_meta::get_current_save_guid();
        const auto path = get_events_stream_file_path_for_guid(save_guid);
        auto is_new_file = false;

        if (!m_current_events_stream_file.has_value()) {
            const auto directory_path = get_events_stream_files_directory();

            if (!std::filesystem::is_directory(directory_path)) {
                std::filesystem::create_directory(directory_path);
            }

            if (std::filesystem::exists(path)) {
                std::filesystem::remove(path);
            }

            is_new_file = true;
            m_current_events_stream_file = EventsStreamFile(
                save_guid,
                0
            );
        }

        core::utils::ByteStream stream;

        if (is_new_file) {
            stream.write(m_events_stream_file_id);
        }

        serialize_partial_event_stream(m_current_events_stream_file->events_written, stream);
        modloader::debug("game_stats", std::format("Serialized {} bytes of event stream data", stream.buffer.size()));
        std::ofstream file_stream(path, std::ios::binary | std::ios::out | std::ios::app);
        file_stream.write(reinterpret_cast<const char*>(stream.buffer.data()), stream.buffer.size());
        file_stream.close();
        m_current_events_stream_file->events_written = m_event_stream.size();

        return *this;
    }

    void SaveFileGameStats::json_deserialize(nlohmann::json& j) {
        time_since_last_checkpoint = 0.f;
        j.get_to(*this);

        const auto save_guid = core::save_meta::get_current_save_guid();

        const auto save_guid_has_changed = save_guid != m_current_events_stream_file.transform([](auto& file) { return file.guid; });
        if (save_guid_has_changed) {
            m_current_events_stream_file = std::nullopt;

            const auto path = get_events_stream_file_path_for_guid(save_guid);

            if (!std::filesystem::exists(path)) {
                return;
            }

            std::basic_ifstream<std::byte> file(path, std::ios::binary);
            file.unsetf(std::ios::skipws);

            if (file.is_open()) {
                const std::vector bytes(std::istreambuf_iterator{file}, {});
                core::utils::ConstByteStream stream(bytes);

                if (stream.read<uint64_t>() != m_events_stream_file_id) {
                    file.close();
                    std::filesystem::resize_file(path, 0);
                    return;
                }

                deserialize_event_stream(stream);
                m_current_events_stream_file = EventsStreamFile(save_guid, m_event_stream.size());
            }
        }
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

    void SaveFileGameStats::add_timeline_entry(const uint64_t id, const std::string& label, map::icons::MapIcon::Type icon, TimelineEntryEvent::Type type) {
        m_event_stream.emplace_back(TimelineEntryEvent(
            in_game_time,
            id,
            label,
            icon,
            type
        ));
    }

    void SaveFileGameStats::add_timeline_end_entry(const uint64_t id, TimelineEntryEvent::Type type) {
        m_event_stream.emplace_back(TimelineEntryEndEvent(
            in_game_time,
            id,
            type
        ));

        if (type == TimelineEntryEvent::Type::Custom) {
            untrack_custom_timeline_entry(id);
        }
    }

    SaveFileGameStats::SaveFileGameStats() {
        std::random_device rng;
        std::mt19937_64 generator(rng());
        std::uniform_int_distribution<uint64_t> distribution;
        m_events_stream_file_id = distribution(generator);
    }

    void SaveFileGameStats::serialize_event_stream(core::utils::ByteStream& stream) {
        serialize_partial_event_stream(0, stream);
    }

    void SaveFileGameStats::serialize_partial_event_stream(std::size_t offset, core::utils::ByteStream& stream) {
        if (offset > m_event_stream.size()) {
            throw std::out_of_range(
                std::format(
                    "Failed to serialize event stream: Offset {} is out of range {}",
                    offset,
                    m_event_stream.size()
                )
            );
        }

        auto it = m_event_stream.begin();
        it += offset;

        while (it != m_event_stream.end()) {
            const auto& e = *it;

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
                    stream.write(event.id);
                    stream.write_string_with_length(event.label);
                    stream.write(event.icon);
                    stream.write(event.type);
                },
                [&](const TimelineEntryEndEvent& event) {
                    stream.write(event.id);
                    stream.write(event.type);
                },
                [&](const StatEvent& event) {
                    stream.write(event.stat);
                    stream.write(event.value);
                },
            };

            ++it;
        }
    }

    void SaveFileGameStats::deserialize_event_stream(core::utils::ConstByteStream& stream) {
        m_event_stream.clear();

        float time = 0.f;
        while (stream.available()) {
            const auto type_index = stream.read<std::uint32_t>();
            time = stream.read<float>();

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
                    const auto id = stream.read<uint64_t>();
                    const auto label = stream.read_string_with_length();
                    const auto icon = stream.read<map::icons::MapIcon::Type>();
                    const auto type = stream.read<TimelineEntryEvent::Type>();

                    m_event_stream.emplace_back(TimelineEntryEvent(
                        time,
                        id,
                        std::string(label),
                        icon,
                        type
                    ));
                } break;
                case 3: {  // TimelineEntryEndEvent
                    const auto id = stream.read<uint64_t>();
                    const auto type = stream.read<TimelineEntryEvent::Type>();

                    m_event_stream.emplace_back(TimelineEntryEndEvent(
                        time,
                        id,
                        type
                    ));
                } break;
                case 4: {  // StatEvent
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

        in_game_time = time;
    }

    namespace {
        IL2CPP_INTERCEPT(void, GameTimer, Update, app::GameTimer* this_ptr) {
            this_ptr->fields.CurrentTime = get_save_file_game_stats().in_game_time;
        }

        IL2CPP_INTERCEPT(float, GameWorld, get_CompletionAmount, app::GameWorld* this_ptr) {
            static core::api::uber_states::UberState COLLECTED_PICKUPS_STATE(UberStateGroup::RandoStats, 0);
            static core::api::uber_states::UberState TOTAL_PICKUPS_STATE(UberStateGroup::RandoStats, 1);

            const auto total_pickups = TOTAL_PICKUPS_STATE.get<int>();

            if (total_pickups == 0) {
                return 0.0;
            }

            return static_cast<float>(COLLECTED_PICKUPS_STATE.get<int>()) / static_cast<float>(total_pickups);
        }

        void purge_event_stream_files() {
            if (!std::filesystem::is_directory(get_events_stream_files_directory())) {
                return;
            }

            std::unordered_set<std::filesystem::path> referenced_event_stream_files;

            for (int i = 0; i < SaveSlotsManager::get_SaveSlotCount(); ++i) {
                const auto slot_info = SaveSlotsManager::SlotByIndex(i);
                if (slot_info != nullptr && !slot_info->fields.ErrorWhileLoading) {
                    const auto save_data = core::api::save_files::get_byte_array(i);
                    const auto guid = core::save_meta::read_guid_from_save(save_data);

                    if (guid.has_value()) {
                        referenced_event_stream_files.insert(get_events_stream_file_path_for_guid(*guid));
                    }
                }
            }

            for (const auto& entry: std::filesystem::directory_iterator(get_events_stream_files_directory())) {
                if (entry.is_regular_file() && entry.path().extension() == ".evs" && !referenced_event_stream_files.contains(entry.path())) {
                    std::filesystem::remove(entry.path());
                }
            }
        }

        IL2CPP_INTERCEPT(void, SaveSlotsManager, DeleteSlot, int32_t index) {
            next::SaveSlotsManager::DeleteSlot(index);
            purge_event_stream_files();
        }
    }
} // namespace randomizer::timing
