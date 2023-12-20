#include <Randomizer/randomizer.h>
#include <Randomizer/seed/seed.h>

#include <Core/api/game/game.h>
#include <Core/core.h>

#include <Randomizer/game/shops/shop.h>

#include <fstream>

namespace randomizer::seed {

    Seed::Seed(location_data::LocationCollection const& location_data) :
        m_location_data(location_data) {}

    void Seed::read(const std::filesystem::path& path, const seed_parser parser, const bool show_message) {
        m_last_parser = parser;
        m_last_path = path;
        reload(show_message);
    }

    std::string read_all(const std::filesystem::path& path) {
        const std::ifstream file(path.string());
        std::stringstream buffer;
        buffer << file.rdbuf();
        return buffer.str();
    }

    void Seed::reload(const bool show_message) {
        if (!m_last_parser) {
            return;
        }

        event_bus().trigger_event(RandomizerEvent::SeedLoaded, EventTiming::Before);
        const auto data = std::make_shared<SeedParseOutput>();
        data->areas = read_all(modloader::base_path() / "areas.wotw");
        data->locations = read_all(modloader::base_path() / "loc_data.csv");
        data->states = read_all(modloader::base_path() / "state_data.csv");
        if (!m_last_parser(m_last_path, m_location_data, data)) {
            auto error_message = std::format("Failed to load seed '{}'", m_last_path.string());
            if (!data->parser_error.empty()) {
                error_message = data->parser_error;
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
        // for (auto& inner_locations: m_data->locations | std::views::values) {
        //     for (const auto& location: inner_locations | std::views::keys) {
        //         auto area = m_location_data.area(location);
        //         ++m_data->meta.pickup_count_by_area[area];
        //         if (area != GameArea::Void) {
        //             ++m_data->meta.total_pickups;
        //         }
        //     }
        //  }

        for (auto& condition: m_data->data.conditions) {
            if (std::holds_alternative<int>(condition.condition)) {
                auto builder = core::reactivity::watch_effect().effect([&] {
                    handle_command(std::get<int>(condition.condition), true);
                });

                condition.previous_value = m_memory.booleans.get(0);
                builder.after([&] {
                    if (condition.previous_value != m_memory.booleans.get(0)) {
                        condition.previous_value = m_memory.booleans.get(0);
                        handle_command(condition.command);
                    }
                }).finalize_inplace(condition.reactive);
            } else {
                auto state = std::get<core::api::uber_states::UberState>(condition.condition);
                auto builder = core::reactivity::watch_effect().effect({state});
                modloader::ScopedSetter setter(m_handling_command, true);
                builder.after([&] { handle_command(condition.command); }).finalize_inplace(condition.reactive);
                m_command_stack.clear();
            }
        }

        m_data->meta.name = std::filesystem::path(m_last_path).filename().string();
        std::string flags;
        for (auto const& flag: m_data->meta.flags) {
            if (flags.empty()) {
                flags += "\nFlags: ";
            } else {
                flags += ", ";
            }

            flags += flag;
        }

        event_bus().trigger_event(RandomizerEvent::SeedLoaded, EventTiming::After);

        if (!show_message) {
            return;
        }

        core::message_controller().queue_central({
            .text = core::Property<std::string>::format("Loaded {}{}", m_data->meta.name, flags),
            .show_box = true,
            .prioritized = true,
        });
    }

    void Seed::handle_command(const int id, bool condition_check) {
        if (condition_check) {
            for (const auto& command: m_data->data.commands[id]) {
                command->execute(*this, m_memory);
            }
        } else {
            for (const auto& command: m_data->data.commands[id] | std::ranges::views::reverse) {
                m_command_stack.push_back(command.get());
            }

            if (!m_handling_command) {
                return;
            }

            m_handling_command = true;
            while (!m_command_stack.empty()) {
                const auto command = m_command_stack.back();
                m_command_stack.pop_back();
                command->execute(*this, m_memory);
            }
        }
    }

    void Seed::clear() {
        m_data = nullptr;
        m_memory.booleans.values.clear();
        m_memory.integers.values.clear();
        m_memory.floats.values.clear();
        m_memory.strings.values.clear();
        // destroy_all_seed_icons();
    }

    MapIcon Seed::icon(const std::string& location) { return MapIcon::QuestItem; }

    std::string Seed::text(const std::string& location) const { return ""; }

    void Seed::trigger(SeedEvent event) const { const auto& commands = m_data->data.events[event]; }

    bool Seed::should_grant() const {
        for (const auto& callback: m_prevent_grant_callbacks) {
            if (callback()) {
                return false;
            }
        }

        return true;
    }

    void Seed::on_state_changed(const core::api::uber_states::UberState& state) const {
        if (!core::api::game::in_game() || !should_grant()) {
            return;
        }

        if (location_collection().should_queue_reach_check(state)) {
            queue_reach_check();
        }
    }

    nlohmann::json SaveSlotSeedMetaData::json_serialize() { return {*this}; }

    void SaveSlotSeedMetaData::json_deserialize(nlohmann::json& j) { j.get_to(*this); }
} // namespace randomizer::seed
