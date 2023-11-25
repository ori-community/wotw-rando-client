#include <randomizer.h>
#include <seed/seed.h>

#include <Core/api/game/game.h>
#include <Core/core.h>

#include <Randomizer/game/shops/shop.h>
#include <Randomizer/seed/items/icon.h>

#include <fstream>
#include <map>

namespace randomizer::seed {

    Seed::Seed(location_data::LocationCollection const &location_data) :
        m_location_data(location_data) {
    }

    void Seed::read(const std::string_view path, const seed_parser parser, const bool show_message) {
        m_last_parser = parser;
        m_last_path = std::string(path);
        reload(show_message);
    }

    std::string read_all(const std::filesystem::path &path) {
        const std::ifstream file(path.string());
        std::stringstream buffer;
        buffer << file.rdbuf();
        return buffer.str();
    }

    void set_shop_slot_titles(Seed const &seed, std::vector<game::shops::ShopSlot *> const &slots) {
        for (auto &slot: slots) {
            const auto slot_text = seed.text(core::api::uber_states::UberStateCondition{slot->state, BooleanOperator::Greater, 0});
            slot->normal.name.set(!slot_text.empty() ? slot_text : "Empty");
        }
    }

    void Seed::reload(const bool show_message) {
        if (!m_last_parser) {
            return;
        }

        event_bus().trigger_event(RandomizerEvent::SeedLoaded, EventTiming::Before);
        clear();
        m_data.info.areas = read_all(modloader::base_path() / "areas.wotw");
        m_data.info.locations = read_all(modloader::base_path() / "loc_data.csv");
        m_data.info.states = read_all(modloader::base_path() / "state_data.csv");
        if (!m_last_parser(m_last_path, m_location_data, m_data)) {
            core::message_controller().queue_central(
                {
                    .text = std::format("Failed to load seed '{}'", m_last_path),
                    .show_box = true,
                    .prioritized = true,
                }
            );
            return;
        }

        for (auto &inner_locations: m_data.locations | std::views::values) {
            for (const auto &location: inner_locations | std::views::keys) {
                auto area = m_location_data.area(location);
                ++m_data.info.pickup_count_by_area[area];
                if (area != GameArea::Void) {
                    ++m_data.info.total_pickups;
                }
            }
        }

        m_data.info.name = std::filesystem::path(m_last_path).filename().string();

        std::string flags;
        for (auto const &flag: info().flags) {
            if (flags.empty()) {
                flags += "\nFlags: ";
            }
            else {
                flags += ", ";
            }

            flags += flag;
        }

        // TODO: Hack, remove when we have new header language and we set these directly.
        set_shop_slot_titles(*this, game::shops::opher_shop().slots());
        set_shop_slot_titles(*this, game::shops::twillen_shop().slots());
        set_shop_slot_titles(*this, game::shops::lupo_shop().slots());
        set_shop_slot_titles(*this, game::shops::grom_shop().slots());
        set_shop_slot_titles(*this, game::shops::tuley_shop().slots());
        // End of hack

        event_bus().trigger_event(RandomizerEvent::SeedLoaded, EventTiming::After);

        if (!show_message) {
            return;
        }

        core::message_controller().queue_central(
            {
                .text = std::format("Loaded {}{}", info().name, flags),
                .show_box = true,
                .prioritized = true,
            }
        );
    }

    void Seed::clear() {
        m_data.info = {};
        m_data.relics.clear();
        m_data.locations.clear();
        m_data.procedures.clear();
        items::destroy_all_seed_icons();
    }

    app::WorldMapIconType__Enum Seed::icon(inner_location_entry location) {
        std::string output;
        const auto [always_granted_items, items, names, icons] = m_data.locations[location.state][location];
        // Since we can only show one icon, if we have multiple show a preset one.
        if (icons.size() > 1) {
            return app::WorldMapIconType__Enum::QuestItem;
        }

        return icons.empty() ? app::WorldMapIconType__Enum::Invisible : icons.front().get();
    }

    std::string Seed::text(const inner_location_entry &location) const {
        std::string output;
        const auto &locations_by_state = m_data.locations.find(location.state);
        if (locations_by_state == m_data.locations.end()) {
            return "";
        }

        const auto location_data = locations_by_state->second.find(location);
        if (location_data == locations_by_state->second.end()) {
            return "";
        }

        for (auto const &name: location_data->second.names) {
            if (!output.empty()) {
                output += '\n';
            }

            output += name.get();
        }

        return output;
    }

    constexpr bool SHOULD_SHOW_VERBOSE_SEED_GRANT = false;

    void Seed::grant(const location_entry location, const double previous_value) {
        if (!core::api::game::in_game()) {
            return;
        }

        for (const auto &callback: m_prevent_grant_callbacks) {
            if (callback()) {
                return;
            }
        }

        auto &inner_locations = m_data.locations[location];
        std::map<int, std::tuple<std::shared_ptr<items::BaseItem>, core::api::uber_states::UberStateCondition>> to_grant;
        auto value = location.get<double>();
        for (auto &[condition, data]: inner_locations) {
            const auto already_granted = condition.resolve(previous_value);
            if (const auto should_grant = condition.resolve(); !should_grant) {
                continue;
            }

            if ((!already_granted || !data.always_granted_items.empty()) && m_location_data.area(condition) != GameArea::Void) {
                auto pickups_collected = core::api::uber_states::UberState(6, 2);
                pickups_collected.set<int>(pickups_collected.get<int>() + 1);
            }

            if (!already_granted) {
                for (auto &[order, item]: data.items) {
                    to_grant[order] = {item, condition};
                }
            }

            for (auto &[order, item]: data.always_granted_items) {
                to_grant[order] = {item, condition};
            }
        }

        auto skip = 0u;
        if (SHOULD_SHOW_VERBOSE_SEED_GRANT) {
            modloader::info("verbose_grants", std::format("------ starting grant for ({}|{}) = {}", location.group_int(), location.state(), location.get()));
        }

        for (const auto &[item, condition]: to_grant | std::views::values) {
            if (skip != 0) {
                --skip;
                continue;
            }

            if (SHOULD_SHOW_VERBOSE_SEED_GRANT) {
                modloader::info("verbose_grants", std::format("granting: {}", item->to_string()));
                modloader::info("verbose_grants", std::format("         '{}'", item->line));
            }

            item->grant();
            skip += item->skip.get();
            if (item->stop.get()) {
                if (SHOULD_SHOW_VERBOSE_SEED_GRANT) {
                    modloader::info("verbose_grants", std::format("#### stopping ({}|{}) early", location.group_int(), location.state()));
                }

                break;
            }
        }

        if (SHOULD_SHOW_VERBOSE_SEED_GRANT) {
            modloader::info("verbose_grants", "------ stopping grant");
        }

        if (!to_grant.empty()) {
            queue_reach_check();
        }
    }

    void Seed::call_procedure(const int id) {
        auto it = m_data.procedures.find(id);
        if (it == m_data.procedures.end()) {
            return;
        }

        for (const auto &item: it->second.items | std::views::values) {
            item->grant();
        }
    }
} // namespace randomizer::seed
