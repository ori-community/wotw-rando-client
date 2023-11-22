#include <randomizer.h>
#include <seed/seed.h>

#include <Core/api/game/game.h>
#include <Core/core.h>

#include <map>
#include <fstream>

namespace randomizer::seed {

    Seed::Seed(location_data::LocationCollection const& location_data)
            : m_location_data(location_data) {}

    void Seed::read(std::string_view path, seed_parser parser, bool show_message) {
        m_last_parser = parser;
        m_last_path = std::string(path);
        reload(show_message);
    }

    std::string read_all(const std::filesystem::path& path) {
        std::ifstream file(path.string());
        std::stringstream buffer;
        buffer << file.rdbuf();
        return buffer.str();
    }

    void Seed::reload(bool show_message) {
        if (!m_last_parser) {
            return;
        }

        event_bus().trigger_event(RandomizerEvent::SeedLoaded, EventTiming::Before);
        clear();
        m_data.info.areas = read_all(modloader::base_path() / "areas.wotw");
        m_data.info.locations = read_all(modloader::base_path() / "loc_data.csv");
        m_data.info.states = read_all(modloader::base_path() / "state_data.csv");
        m_last_parser(m_last_path, m_location_data, m_data);

        for (auto& [state, inner_locations] : m_data.locations) {
            for (auto& [location, data] : inner_locations) {
                auto area = m_location_data.area(location);
                ++m_data.info.pickup_count_by_area[area];
                if (area != GameArea::Void) {
                    ++m_data.info.total_pickups;
                }
            }
        }

        m_data.info.name = std::filesystem::path(m_last_path).filename().string();
        event_bus().trigger_event(RandomizerEvent::SeedLoaded, EventTiming::After);

        if (!show_message) {
            return;
        }

        std::string flags;
        for (auto const& flag : info().flags) {
            if (flags.empty()) {
                flags += "\nFlags: ";
            } else {
                flags += ", ";
            }

            flags += flag;
        }

        core::message_controller().queue_central({
            .text = fmt::format("Loaded {}{}", info().name, flags),
            .show_box = true,
            .prioritized = true,
        });
    }

    void Seed::clear() {
        m_data.info = {};
        m_data.locations.clear();
    }

    app::WorldMapIconType__Enum Seed::icon(inner_location_entry location) {
        std::string output;
        const auto location_data = m_data.locations[location.state][location];
        const auto& icons = location_data.icons;
        // Since we can only show one icon, if we have multiple show a preset one.
        if (icons.size() > 1) {
            return app::WorldMapIconType__Enum::QuestItem;
        }

        return icons.empty() ? app::WorldMapIconType__Enum::Invisible : icons.front().get();
    }

    std::string Seed::text(inner_location_entry location) {
        std::string output;
        const auto location_data = m_data.locations[location.state][location];
        const auto& names = location_data.names;

        for (auto const& name : names) {
            if (!output.empty()) {
                output += '\n';
            }

            output += name.get();
        }

        return output;
    }

    void Seed::grant(location_entry location, double previous_value) {
        if (m_should_prevent_grants || !core::api::game::in_game()) {
            return;
        }

        if (m_skip.contains(location)) {
            m_skip.erase(location);
            return;
        }

        auto& inner_locations = m_data.locations[location];
        std::map<int, std::shared_ptr<items::BaseItem>> to_grant;
        for (auto& [condition, data] : inner_locations) {
            auto already_granted = condition.resolve(previous_value);
            auto should_grant = condition.resolve();
            if (!should_grant) {
                continue;
            }

            if ((!already_granted || !data.always_granted_items.empty()) && m_location_data.area(condition) != GameArea::Void) {
                auto pickups_collected = core::api::uber_states::UberState(6, 2);
                pickups_collected.set<int>(pickups_collected.get<int>() + 1);
            }

            if (!already_granted) {
                for (auto& [order, item] : data.items) {
                    to_grant[order] = item;
                }
            }

            for (auto& [order, item] : data.always_granted_items) {
                to_grant[order] = item;
            }
        }

        auto skip = 0u;
        for (auto& [order, item] : to_grant) {
            if (skip != 0) {
                --skip;
                continue;
            }

            item->grant();
            skip += item->skip.get();
            if (item->stop.get()) {
                break;
            }
        }

        if (!to_grant.empty()) {
            queue_reach_check();
        }
    }

    void Seed::call_procedure(int id) {
        auto it = m_data.procedures.find(id);
        if (it == m_data.procedures.end()) {
            return;
        }

        auto& item_data = it->second;
        for (auto& [order, item] : item_data.items) {
            item->grant();
        }
    }
} // namespace randomizer::seed
