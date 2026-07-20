#pragma once

#include <Randomizer/stats/game_stats.h>

namespace randomizer::timing {
    struct UberStateIdentifier {
        UberStateGroup group;
        int state;

        friend bool operator==(const UberStateIdentifier& lhs, const UberStateIdentifier& rhs) { return lhs.group == rhs.group && lhs.state == rhs.state; }
        [[nodiscard]] core::api::uber_states::UberState get_uber_state() const;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE(
            UberStateIdentifier,
            group,
            state
        );
    };

    struct UberStateIdentifierHash {
        constexpr std::size_t operator()(const UberStateIdentifier& value, std::size_t seed) const {
            return frozen::elsa<std::size_t>()(static_cast<std::size_t>(value.group) * 1000000 + value.state, seed);
        }
    };
}

template <>
struct std::hash<randomizer::timing::UberStateIdentifier> {
    std::size_t operator()(const randomizer::timing::UberStateIdentifier& i) const noexcept {
        return randomizer::timing::UberStateIdentifierHash()(i, 0);
    }
};

namespace randomizer::timing {
    extern bool disable_ability_tracking;

    class GameTrackerMetaData final : public core::save_meta::JsonSaveMetaSerializable {
    public:
        /** States that currently have an active timeline entry */
        std::unordered_set<UberStateIdentifier> active_tracked_states;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
            GameTrackerMetaData,
            active_tracked_states
        );

        nlohmann::json json_serialize() override;
        void json_deserialize(nlohmann::json& j) override;
    };

    void override_in_game_time(float in_game_time);
    float get_in_game_time();
    void force_set_game_finished(bool value);
    SaveFileGameStats& get_save_file_game_stats();
}

NLOHMANN_JSON_NAMESPACE_BEGIN
template<>
struct adl_serializer<std::unordered_set<randomizer::timing::UberStateIdentifier>> {
    static void to_json(nlohmann::json& j, const std::unordered_set<randomizer::timing::UberStateIdentifier>& v) {
        j = nlohmann::json::array();

        for (const auto& item : v) {
            j.push_back(item);
        }
    }

    static void from_json(const nlohmann::json& j, std::unordered_set<randomizer::timing::UberStateIdentifier>& v) {
        for (const auto& [key, value] : j.items()) {
            v.insert(value.get<randomizer::timing::UberStateIdentifier>());
        }
    }
};
NLOHMANN_JSON_NAMESPACE_END
