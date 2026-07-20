#pragma once

#include <Core/enums/game_areas.h>
#include <Core/enums/async_loading_state.h>
#include <Core/save_meta/save_meta.h>
#include <nlohmann/json.hpp>
#include <unordered_map>
#include <utility>
#include <variant>
#include <Modloader/app/structs/Vector2.h>
#include <Randomizer/map/map_icons.h>


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
struct adl_serializer<std::unordered_map<std::size_t, T>> {
    static void to_json(nlohmann::json& j, const std::unordered_map<std::size_t, T>& v) {
        j = nlohmann::json::object();

        for (const auto& item : v) {
            j[std::to_string(item.first)] = item.second;
        }
    }

    static void from_json(const nlohmann::json& j, std::unordered_map<std::size_t, T>& v) {
        for (const auto& [key, value] : j.items()) {
            v[static_cast<std::size_t>(std::stoi(key))] = value.get<T>();
        }
    }
};
NLOHMANN_JSON_NAMESPACE_END

namespace randomizer::timing {
    enum class GameStat: uint8_t {
        PickupsCollected,
        PickupsTotal,
        Keystones,
        KeystonesCollected,
        SpiritLight,
        SpiritLightCollected,
        SpiritLightSpent,
        GorlekOre,
        GorlekOreCollected,
        GorlekOreSpent,
        ShardSlots,
        Health,
        MaxHealth,
        Energy,
        MaxEnergy,
        PickupsCollectedMarsh,
        PickupsTotalMarsh,
        PickupsCollectedHollow,
        PickupsTotalHollow,
        PickupsCollectedGlades,
        PickupsTotalGlades,
        PickupsCollectedWellspring,
        PickupsTotalWellspring,
        PickupsCollectedWoods,
        PickupsTotalWoods,
        PickupsCollectedReach,
        PickupsTotalReach,
        PickupsCollectedDepths,
        PickupsTotalDepths,
        PickupsCollectedPools,
        PickupsTotalPools,
        PickupsCollectedWastes,
        PickupsTotalWastes,
        PickupsCollectedRuins,
        PickupsTotalRuins,
        PickupsCollectedWillow,
        PickupsTotalWillow,
        PickupsCollectedBurrows,
        PickupsTotalBurrows,
        PickupsCollectedShop,
        PickupsTotalShop,
        CurrentArea,
    };

    class SaveFileGameStats : public core::save_meta::SaveMetaSerializable {
    public:
        struct AreaStats {
            float in_game_time_spent = 0.f;

            NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
                AreaStats,
                in_game_time_spent
            );
        };

        struct DiscoveredItem {
            float x;
            float y;
            map::icons::MapIcon::Type type;
            std::string label;
            std::optional<float> collected_at;

            template<typename BasicJsonType, nlohmann::detail::enable_if_t<nlohmann::detail::is_basic_json<BasicJsonType>::value, int> = 0>
            friend void to_json(BasicJsonType& j, const DiscoveredItem& self) {
                j["x"] = self.x;
                j["y"] = self.y;
                j["type"] = static_cast<uint8_t>(self.type);
                j["label"] = self.label;

                if (self.collected_at.has_value()) {
                    j["collected_at"] = *self.collected_at;
                } else {
                    j["collected_at"] = nullptr;
                }
            }

            template<typename BasicJsonType, nlohmann::detail::enable_if_t<nlohmann::detail::is_basic_json<BasicJsonType>::value, int> = 0>
            friend void from_json(const BasicJsonType& j, DiscoveredItem& self) {
                j.at("x").get_to(self.x);
                j.at("y").get_to(self.y);
                j.at("type").get_to(self.type);
                j.at("label").get_to(self.label);

                const nlohmann::json& j_collected_at = j.at("collected_at");
                if (j_collected_at.is_null()) {
                    self.collected_at = std::nullopt;
                } else {
                    self.collected_at = j_collected_at.get<float>();
                }
            }
        };

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

        /**
         * Timeline Entry events represent events at a single point in time.
         * They can also represent a timespan if ended using a TimelineEntryEndEvent with the same ID and type.
         * IDs can be reused as long as the previous event has been ended before.
         */
        struct TimelineEntryEvent : Event {
            enum class Type : uint8_t {
                Ability,
                Custom,
            };

            uint64_t id;
            std::string label;
            map::icons::MapIcon::Type icon;
            Type type;

            TimelineEntryEvent(const float in_game_time, const uint64_t id, std::string label, const map::icons::MapIcon::Type icon, const Type type) :
                Event(in_game_time),
                id(id),
                label(std::move(label)),
                icon(icon),
                type(type) {}
        };

        struct TimelineEntryEndEvent : Event {
            uint64_t id;
            TimelineEntryEvent::Type type;

            TimelineEntryEndEvent(const float in_game_time, const uint64_t id, const TimelineEntryEvent::Type type) :
                Event(in_game_time),
                id(id),
                type(type) {}
        };

        struct StatEvent : Event {
            GameStat stat;
            float value;

            StatEvent(const float in_game_time, const GameStat stat, const float value) :
                Event(in_game_time),
                stat(stat),
                value(value) {}
        };

        using event_t = std::variant<PositionEvent, DisplacementEvent, TimelineEntryEvent, TimelineEntryEndEvent, StatEvent>;

        void report_position(const app::Vector2& position);
        void report_displacement(const app::Vector2& from, const app::Vector2& to, DisplacementReason reason, float time_lost = 0.f);
        void report_stat(GameStat stat, float value);
        void add_timeline_entry(std::size_t id, const std::string& label, map::icons::MapIcon::Type icon, TimelineEntryEvent::Type type);
        void add_timeline_end_entry(std::size_t id, TimelineEntryEvent::Type type);

        // Tracking
        float time_since_last_checkpoint = 0.f;
        float in_game_time = 0.f;
        std::unordered_map<AsyncLoadingState, float> async_loading_times;

        // Area Stats
        std::unordered_map<GameArea, AreaStats> area_stats;

        // Discovered items (spoiler map icon ID -> DiscoveredItem)
        std::unordered_map<std::size_t, DiscoveredItem> discovered_items;

        // JSON
        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
            SaveFileGameStats,
            time_since_last_checkpoint,
            in_game_time,
            async_loading_times,
            area_stats,
            discovered_items
        );

        // Methods
        void report_in_game_time_spent(GameArea area, float time);

        void report_async_loading_time_spent(float time, AsyncLoadingState reason);

        void report_checkpoint_created();

        void report_respawn();

        void set_discovered_item(std::size_t id, DiscoveredItem item);

        float get_total_async_loading_time() const;

        std::vector<std::byte> serialize() override;

        void deserialize(core::utils::ByteStream& stream) override;

    private:
        void serialize_event_stream(core::utils::ByteStream& stream);
        void deserialize_event_stream(core::utils::ByteStream& stream);

        std::vector<event_t> m_event_stream;
    };
} // namespace randomizer::timing
