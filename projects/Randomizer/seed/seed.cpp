#include <Core/api/game/game.h>
#include <Core/core.h>
#include <Randomizer/dev/seed_debugger.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/seed.h>
#include <fstream>
#include <magic_enum.hpp>

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

        // clang-format off
        for (auto& condition: m_data->data.conditions) {
            if (std::holds_alternative<int>(condition.condition)) {
                auto builder = core::reactivity::watch_effect()
                    .before([condition] { dev::seed_debugger::condition_start(std::get<int>(condition.condition)); })
                    .effect([&] { handle_command(std::get<int>(condition.condition)); });

                condition.previous_value = m_memory.booleans.get(0);
                condition.reactive = builder.after([&] {
                    if (!should_grant() || condition.previous_value == m_memory.booleans.get(0)) {
                        dev::seed_debugger::condition_end(std::get<int>(condition.condition));
                        return;
                    }

                    condition.previous_value = m_memory.booleans.get(0);
                    if (m_memory.booleans.get(0)) {
                        dev::seed_debugger::condition_triggered(std::get<int>(condition.condition));
                        handle_command(condition.command);
                    }

                    dev::seed_debugger::condition_end(std::get<int>(condition.condition));
                }).finalize();
            } else {
                auto state = std::get<core::api::uber_states::UberState>(condition.condition);
                auto builder = core::reactivity::watch_effect()
                    .before([state]{ dev::seed_debugger::binding_start(state); })
                    .effect({state});

                modloader::ScopedSetter setter(m_should_handle_command, false);
                condition.reactive = builder.after([&, state] {
                    if (!should_grant()) {
                        dev::seed_debugger::binding_end(state);
                        return;
                    }

                    handle_command(condition.command);
                    dev::seed_debugger::binding_end(state);
                }).finalize();
                m_command_stack.clear();
            }
        }
        // clang-format on

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

    void Seed::handle_command(const std::size_t id) {
        dev::seed_debugger::command_start(id);
        for (const auto& command: m_data->data.commands[id]) {
            dev::seed_debugger::instruction(command.get());
            command->execute(*this, m_memory);
        }

        dev::seed_debugger::command_end(id);
    }

    void Seed::clear() {
        m_data = nullptr;
        destroy_volatile_seed_data();
    }

    void Seed::trigger(const SeedEvent event) {
        dev::seed_debugger::seed_event_start(event);
        if (!should_grant()) {
            dev::seed_debugger::seed_event_end(event);
            return;
        }

        for (const auto& command: m_data->data.events[event]) {
            handle_command(command);
        }

        dev::seed_debugger::seed_event_end(event);
    }

    bool Seed::should_grant() const {
        return core::api::game::in_game() && m_should_handle_command &&
            std::ranges::all_of(m_prevent_grant_callbacks, [](const auto& callback) { return !callback(); });
    }

    nlohmann::json SaveSlotSeedMetaData::json_serialize() { return *this; }

    void SaveSlotSeedMetaData::json_deserialize(nlohmann::json& j) { j.get_to(*this); }
} // namespace randomizer::seed
