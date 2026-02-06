#pragma once

#include <Core/enums/game_areas.h>
#include <Core/enums/async_loading_state.h>
#include <Core/enums/world_events.h>
#include <Core/save_meta/save_meta.h>
#include <nlohmann/json.hpp>
#include <unordered_map>
#include <utility>
#include <variant>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Vector2.h>

NLOHMANN_JSON_NAMESPACE_BEGIN
template <typename T>
struct adl_serializer<std::unordered_map<GameArea, T>> {
    static void to_json(nlohmann::json& j, const std::unordered_map<GameArea, T>& v) {
        j = nlohmann::json::object();

        for (const auto& item : v) {
            j[std::to_string(static_cast<int>(item.first))] = item.second;
        }
    }

    static void from_json(const nlohmann::json& j, std::unordered_map<GameArea, T>& v) {
        for (const auto& [key, value] : j.items()) {
            v[static_cast<GameArea>(std::stoi(key))] = value.get<T>();
        }
    }
};

template <typename T>
struct adl_serializer<std::map<app::AbilityType__Enum, T>> {
    static void to_json(nlohmann::json& j, const std::map<app::AbilityType__Enum, T>& v) {
        j = nlohmann::json::object();

        for (const auto& item : v) {
            j[std::to_string(static_cast<int>(item.first))] = item.second;
        }
    }

    static void from_json(const nlohmann::json& j, std::map<app::AbilityType__Enum, T>& v) {
        for (const auto& [key, value] : j.items()) {
            v[static_cast<app::AbilityType__Enum>(std::stoi(key))] = value.get<T>();
        }
    }
};

template <typename T>
struct adl_serializer<std::map<WorldEvent, T>> {
    static void to_json(nlohmann::json& j, const std::map<WorldEvent, T>& v) {
        j = nlohmann::json::object();

        for (const auto& item : v) {
            j[std::to_string(static_cast<int>(item.first))] = item.second;
        }
    }

    static void from_json(const nlohmann::json& j, std::map<WorldEvent, T>& v) {
        for (const auto& [key, value] : j.items()) {
            v[static_cast<WorldEvent>(std::stoi(key))] = value.get<T>();
        }
    }
};
NLOHMANN_JSON_NAMESPACE_END

namespace randomizer::timing {
    class GameStats : public core::save_meta::JsonSaveMetaSerializable {
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

        void json_deserialize(nlohmann::json& j) override;
    };

    class SaveFileGameStats : public GameStats {
    public:
        struct AreaStats {
            float in_game_time_spent = 0.f;

            NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
                AreaStats,
                in_game_time_spent
            );
        };

        // Tracking
        float time_since_last_checkpoint = 0.f;
        float in_game_time = 0.f;
        std::unordered_map<AsyncLoadingState, float> async_loading_times;

        // Area Stats
        std::unordered_map<GameArea, AreaStats> area_stats;

        // JSON
        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
            SaveFileGameStats,
            time_since_last_checkpoint,
            in_game_time,
            async_loading_times,
            area_stats
        );

        // Methods
        void report_in_game_time_spent(GameArea area, float time);

        void report_async_loading_time_spent(float time, AsyncLoadingState reason);

        void report_checkpoint_created();

        void report_respawn();

        float get_total_async_loading_time() const;

        nlohmann::json json_serialize() override;

        void json_deserialize(nlohmann::json& j) override;
    };

    class SaveFileGameStatsEvents : public core::save_meta::SaveMetaSerializable {
    public:
        struct Event {
            float in_game_time;

            explicit Event(const float in_game_time) :
                in_game_time(in_game_time) {}
        };

        struct PositionEvent : Event {
            float x = 0.f;
            float y = 0.f;

            PositionEvent(const float in_game_time, const float x, const float y) :
                Event(in_game_time),
                x(x),
                y(y) {}
        };

        enum class DisplacementReason : uint32_t {
            Unknown,
            Teleporter,
            Death,
            Door,
            Portal,
        };

        struct DisplacementEvent : Event {
            DisplacementReason reason = DisplacementReason::Unknown;
            float from_x = 0.f;
            float from_y = 0.f;
            float to_x = 0.f;
            float to_y = 0.f;
            /** Time lost to this displacement, mainly used for deaths */
            float time_lost = 0.f;

            DisplacementEvent(
                const float in_game_time,
                const DisplacementReason reason,
                const float from_x,
                const float from_y,
                const float to_x,
                const float to_y,
                const float time_lost
            ) :
                Event(in_game_time),
                reason(reason),
                from_x(from_x),
                from_y(from_y),
                to_x(to_x),
                to_y(to_y),
                time_lost(time_lost) {}
        };

        struct TimelineEntryEvent : Event {
            std::string label;
            std::string icon;

            TimelineEntryEvent(const float in_game_time, std::string label, std::string icon) :
                Event(in_game_time),
                label(std::move(label)),
                icon(std::move(icon)) {}
        };

        struct MapEntryEvent : Event {
            std::string label;
            std::string icon;
            float x = 0.f;
            float y = 0.f;

            MapEntryEvent(const float in_game_time, std::string label, std::string icon, const float x, const float y) :
                Event(in_game_time),
                label(std::move(label)),
                icon(std::move(icon)),
                x(x),
                y(y) {}
        };

        using event_t = std::variant<PositionEvent, DisplacementEvent, TimelineEntryEvent, MapEntryEvent>;

        void report_position(const app::Vector2& position);
        void report_displacement(const app::Vector2& from, const app::Vector2& to, DisplacementReason reason, float time_lost = 0.f);
        void add_timeline_entry(const std::string& label, const std::string& icon);
        void add_map_entry(const std::string& label, const std::string& icon, float x, float y);

        std::vector<std::byte> serialize() override;
        void deserialize(core::utils::ByteStream& data) override;

        explicit SaveFileGameStatsEvents(const std::shared_ptr<SaveFileGameStats>& m_stats) :
            m_stats(m_stats) {}
    private:
        std::vector<event_t> m_event_stream;
        std::shared_ptr<SaveFileGameStats> m_stats;
    };
} // namespace randomizer::timing
