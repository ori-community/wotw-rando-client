#include <Randomizer/randomizer.h>
#include <Randomizer/seed/seed.h>

#include <Core/api/game/game.h>
#include <Core/core.h>

#include <Randomizer/dev/seed_debugger.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/seed/items/icon.h>
#include <Randomizer/tracking/game_tracker.h>

#include <fstream>
#include <map>

#include "seed_source.h"

namespace randomizer::seed {

    Seed::Seed(location_data::LocationCollection const& location_data) :
        m_location_data(location_data) {}

    void Seed::read(const std::string& seed_content, const seed_parser parser, const bool show_message) {
        m_last_parser = parser;
        m_seed_content = seed_content;
        reload(show_message);
    }

    void set_shop_slot_titles(Seed const& seed, std::vector<game::shops::ShopSlot*> const& slots) {
        for (auto& slot: slots) {
            const auto slot_text = seed.text(core::api::uber_states::UberStateCondition{slot->state, BooleanOperator::Greater, 0});
            slot->normal.name.set(!slot_text.empty() ? slot_text : "Empty");
        }
    }

    void Seed::show_flags_message() const {
        std::string flags;
        for (auto const& flag: info().meta.flags) {
            if (flags.empty()) {
                flags += "\nFlags: ";
            } else {
                flags += ", ";
            }

            flags += flag;
        }

        core::message_controller().queue_central({
            .text = core::Property<std::string>::format("Loaded <hex_9ee2f7ff>{}</>{}", info().meta.slug, flags),
            .duration = 5.f,
            .show_box = true,
            .prioritized = true,
        });
    }
    void Seed::reload(const bool show_message) {
        if (!m_last_parser) {
            return;
        }

        event_bus().trigger_event(RandomizerEvent::SeedLoaded, EventTiming::Before);
        auto data = std::make_shared<Data>();
        data->info.areas = read_text_file(modloader::base_path() / "areas.wotw");
        data->info.locations = read_text_file(modloader::base_path() / "loc_data.csv");
        data->info.states = read_text_file(modloader::base_path() / "state_data.csv");
        if (!m_last_parser(m_seed_content, m_location_data, data)) {
            auto error_message = std::format("Failed to load seed");
            if (!data->info.parser_error.empty()) {
                error_message = data->info.parser_error;
            }

            core::message_controller().queue_central({
                .text = core::Property<std::string>(error_message),
                .show_box = true,
                .prioritized = true,
            });
            return;
        }

        clear();
        m_data = data;
        for (auto& inner_locations: m_data->locations | std::views::values) {
            for (const auto& location: inner_locations | std::views::keys) {
                auto area = m_location_data.area(location);
                ++m_data->info.pickup_count_by_area[area];
                if (area != GameArea::Void) {
                    ++m_data->info.total_pickups;
                }
            }
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

        show_flags_message();
    }

    void Seed::clear() const {
        m_data->info = {};
        m_data->relics.clear();
        m_data->locations.clear();
        m_data->procedures.clear();
        m_data->timers.clear();
        items::destroy_all_seed_icons();
    }

    MapIcon Seed::icon(const inner_location_entry& location) const {
        std::string output;

        const auto& seed_locations = m_data->locations;

        auto locations_it = seed_locations.find(location.state);
        if (locations_it == seed_locations.end()) {
            return MapIcon::Invisible;
        }

        const auto& item_locations = locations_it->second;

        auto location_data_it = item_locations.find(location);
        if (location_data_it == item_locations.end()) {
            return MapIcon::Invisible;
        }

        const auto& location_data = location_data_it->second;

        // Since we can only show one icon, if we have multiple show a preset one.
        if (location_data.icon_override.has_value()) {
            return location_data.icon_override->get();
        }

        if (location_data.icons.size() > 1) {
            return MapIcon::QuestItem;
        }

        if (!location_data.icons.empty()) {
            return location_data.icons.front().get();
        }

        return !location_data.names.empty() ? MapIcon::QuestItem : MapIcon::Invisible;
    }

    std::string Seed::text(const inner_location_entry& location) const {
        std::string output;
        const auto& locations_by_state = m_data->locations.find(location.state);
        if (locations_by_state == m_data->locations.end()) {
            return "";
        }

        const auto location_data = locations_by_state->second.find(location);
        if (location_data == locations_by_state->second.end()) {
            return "";
        }

        for (auto const& name: location_data->second.names) {
            if (!output.empty()) {
                output += '\n';
            }

            output += trim_copy(name.get());
        }

        return output;
    }

    void Seed::grant(const location_entry location, const double previous_value) {
        if (!core::api::game::in_game()) {
            return;
        }

        for (const auto& callback: m_prevent_grant_callbacks) {
            if (callback()) {
                return;
            }
        }

        auto queue_reach_check_after_grant = false;
        const auto& inner_locations = m_data->locations[location];
        std::map<int, std::tuple<std::shared_ptr<items::BaseItem>, core::api::uber_states::UberStateCondition, bool>> to_grant;
        for (auto& [condition, data]: inner_locations) {
            const auto already_granted = condition.resolve(previous_value);
            if (const auto should_grant = condition.resolve(); !should_grant) {
                continue;
            }

            if (!already_granted) {
                const auto location_data = location_collection().location(condition);
                if (location_data.has_value()) {
                    timing::notify_pickup_collected(location_data->area, location_data->name);
                }

                if (location_data.has_value() || seedgen_interop::is_state(condition)) {
                    queue_reach_check_after_grant = true;
                }
            }

            if ((!already_granted || !data.always_granted_items.empty()) && m_location_data.area(condition) != GameArea::Void) {
                auto pickups_collected = core::api::uber_states::UberState(UberStateGroup::RandoStats, 2);
                pickups_collected.set<int>(pickups_collected.get<int>() + 1);
            }

            if (!already_granted) {
                for (auto& [order, item]: data.items) {
                    to_grant[order] = {item, condition, false};
                }
            }

            for (auto& [order, item]: data.always_granted_items) {
                to_grant[order] = {item, condition, true};
            }
        }

        if (to_grant.empty()) {
            return;
        }

        const auto current_value = location.get<double>();
        dev::seed_debugger::begin_grant(location, previous_value);

        auto skip = 0u;
        for (const auto& [item, condition, ignore_already_granted]: to_grant | std::views::values) {
            if (skip != 0) {
                --skip;
                continue;
            }

            dev::seed_debugger::next_item(condition, ignore_already_granted, *item);
            item->grant();
            skip += item->skip.get();
            dev::seed_debugger::skip(condition, ignore_already_granted, *item, skip);
            if (item->stop.get()) {
                dev::seed_debugger::stop(condition, ignore_already_granted, *item);
                break;
            }
        }

        dev::seed_debugger::end_grant(location, current_value, previous_value);

        if (queue_reach_check_after_grant) {
            queue_reach_check();
        }
    }

    void Seed::procedure_call(const int id) {
        auto it = m_data->procedures.find(id);
        if (it == m_data->procedures.end()) {
            return;
        }

        auto skip = 0u;
        const auto empty = core::api::uber_states::UberStateCondition();
        dev::seed_debugger::procedure(id);
        for (const auto& item: it->second.items | std::views::values) {
            dev::seed_debugger::next_item(empty, false, *item);
            item->grant();
            skip += item->skip.get();
            dev::seed_debugger::skip(empty, false, *item, skip);
            if (item->stop.get()) {
                dev::seed_debugger::stop(empty, false, *item);
                break;
            }
        }
    }

    std::optional<ItemData> Seed::procedure_data(const int id) {
        const auto it = m_data->procedures.find(id);
        if (it == m_data->procedures.end()) {
            return std::nullopt;
        }

        return it->second;
    }

    bool Seed::finished_goals() const {
        auto const& flags = info().meta.flags;
        const auto is_relics = std::ranges::find(flags, "Relics") != flags.end();
        const auto is_trees = std::ranges::find(flags, "All Trees") != flags.end();
        const auto is_wisps = std::ranges::find(flags, "All Wisps") != flags.end();
        const auto is_quests = std::ranges::find(flags, "All Quests") != flags.end();
        if (is_trees && core::api::uber_states::UberState(UberStateGroup::Goals, 502).get<int>() != 14) {
            return false;
        }

        if (is_wisps && core::api::uber_states::UberState(UberStateGroup::Goals, 503).get<int>() != 5) {
            return false;
        }

        if (is_quests && core::api::uber_states::UberState(UberStateGroup::Goals, 504).get<int>() != 17) {
            return false;
        }

        if (is_relics && relics().found_relics() != relics().relic_count()) {
            return false;
        }

        return true;
    }

    void Seed::process_timers(float delta_time) const {
        for (const auto & timer : m_data->timers) {
            if (timer.toggle.get<bool>()) {
                timer.value.set(timer.value.get() + delta_time);
            }
        }
    }

    nlohmann::json SaveSlotSeedMetaData::json_serialize() {
        nlohmann::json j = *this;
        return j;
    }

    void SaveSlotSeedMetaData::json_deserialize(nlohmann::json& j) { j.get_to(*this); }
    std::shared_ptr<SeedSource> SaveSlotSeedMetaData::get_source() const {
        return seed::parse_source_string(seed_source_string);
    }
} // namespace randomizer::seed
