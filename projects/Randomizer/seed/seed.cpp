#include <Core/api/game/game.h>
#include <Core/core.h>
#include <Randomizer/dev/seed_debugger.h>
#include <Randomizer/game/map/map.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/seed.h>
#include <magic_enum/magic_enum.hpp>

namespace randomizer::seed {

    Seed::Seed(location_data::LocationCollection const& location_data)
        : m_location_data(location_data) {
        register_slot(SaveMetaSlot::SeedEnvironment, SaveMetaSlotPersistence::None, m_environment);
        register_slot(SaveMetaSlot::SeedPersistentMemory, SaveMetaSlotPersistence::None, m_persistent_memory);
    }

    void Seed::read(const std::shared_ptr<SeedArchive>& seed_archive, const seed_parser parser, const bool show_message) {
        m_seed_archive = seed_archive;

        event_bus().trigger_event(RandomizerEvent::SeedLoaded, EventTiming::Before);
        const auto data = std::make_shared<SeedParseOutput>();
        data->areas = read_text_file(modloader::base_path() / "areas.wotw");
        data->locations = read_text_file(modloader::base_path() / "loc_data.csv");
        data->states = read_text_file(modloader::base_path() / "state_data.csv");

        if (!parser(m_seed_archive, m_location_data, data)) {
            std::string error_message = "Failed to load seed";
            if (!data->parser_error.empty()) {
                error_message += ":\n" + data->parser_error;
            }

            modloader::error("seed", error_message);
            core::message_controller().queue_central({
                .text = core::Property<std::string>(error_message),
                .show_box = true,
                .prioritized = true,
            });
            return;
        }

        m_parse_output = data;
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
        for (auto& condition: m_parse_output->data.conditions) {
            if (std::holds_alternative<int>(condition.condition)) {
                auto builder = core::reactivity::watch_effect()
                    .before([condition] { dev::seed_debugger::condition_start(std::get<int>(condition.condition)); })
                    .effect([&] {
                        execute_command(std::get<int>(condition.condition));
                    });

                condition.previous_value = m_memory.booleans.get(0);
                condition.reactive_effect = builder.after([&] {
                    if (!should_grant() || condition.previous_value == m_memory.booleans.get(0)) {
                        dev::seed_debugger::condition_end(std::get<int>(condition.condition));
                        return;
                    }

                    condition.previous_value = m_memory.booleans.get(0);
                    if (m_memory.booleans.get(0)) {
                        dev::seed_debugger::condition_triggered(std::get<int>(condition.condition));
                        execute_command(condition.command_id);
                    }

                    dev::seed_debugger::condition_end(std::get<int>(condition.condition));
                })
                .finalize();
            } else {
                auto state = std::get<core::api::uber_states::UberState>(condition.condition);
                auto builder = core::reactivity::watch_effect()
                    .before([state]{ dev::seed_debugger::binding_start(state); })
                    .effect({state});

                modloader::ScopedSetter setter(m_is_reading_seed, false);
                condition.reactive_effect = builder.after([&, state] {
                    if (!should_grant()) {
                        dev::seed_debugger::binding_end(state);
                        return;
                    }

                    execute_command(condition.command_id);
                    dev::seed_debugger::binding_end(state);
                }).finalize();
                m_command_stack.clear();
            }
        }
        // clang-format on

        event_bus().trigger_event(RandomizerEvent::SeedLoaded, EventTiming::After);

        if (!show_message) {
            return;
        }

        show_tags_message();
    }

    void Seed::show_tags_message() const {
        std::string tags;

        for (auto const& flag: m_parse_output->meta.tags) {
            if (tags.empty()) {
                tags += "\nTags: ";
            } else {
                tags += ", ";
            }

            tags += flag;
        }

        std::string slug_string;

        if (m_parse_output->meta.slug.has_value()) {
            slug_string = std::format(" <hex_9ee2f7ff>{}</>", *m_parse_output->meta.slug);
        }

        core::message_controller().queue_central({
            .text = core::Property<std::string>::format("Loaded Seed{}{}", slug_string, tags),
            .duration = 5.f,
            .show_box = true,
            .prioritized = true,
        });
    }

    void Seed::execute_command(const std::size_t id) {
        dev::seed_debugger::command_start(id);

        if (m_parse_output->data.commands.size() <= id) {
            throw std::exception(std::format("Command ID {} out of bounds", id).c_str());
        }

        for (const auto& command: m_parse_output->data.commands.at(id)) {
            dev::seed_debugger::instruction(command.get());

            try {
                command->execute(*this, m_memory, *m_environment);
            } catch (InstructionError& e) {
                modloader::error(
                    "instructions",
                    std::format(
                        "Stopped instruction execution due to error in instruction {}: {}",
                        command->get_name(),
                        e.what()
                    )
                );
                break;
            }
        }

        dev::seed_debugger::command_end(id);
    }

    void Seed::trigger(const SeedClientEvent event, bool force) {
        if (m_parse_output->data.events[event].empty()) {
            // Lessen spam on seed debugger.
            return;
        }

        dev::seed_debugger::seed_event_start(event);

        std::unique_ptr<modloader::ScopedSetter<bool>> force_grant_scoped_setter;

        if (force) {
            force_grant_scoped_setter = std::make_unique<modloader::ScopedSetter<bool>>(m_forcing_grant, force);
        }

        if (!should_grant()) {
            dev::seed_debugger::seed_event_end(event);
            return;
        }

        for (const auto& command: m_parse_output->data.events[event]) {
            execute_command(command);
        }

        if (force) {
            force_grant_scoped_setter.reset();
        }

        dev::seed_debugger::seed_event_end(event);
    }

    bool Seed::should_grant() const {
        if (m_forcing_grant) {
            return true;
        }

        return core::api::game::in_game() && !m_is_reading_seed &&
            std::ranges::all_of(m_prevent_grant_callbacks, [](const auto& callback) { return !callback(); });
    }

    void Seed::process_timers(float delta_time) const {
        for (const auto & timer : m_timers) {
            if (timer.toggle.get<bool>()) {
                timer.value.set(timer.value.get() + delta_time);
            }
        }
    }

    nlohmann::json SaveSlotSeedMetaData::json_serialize() { return *this; }

    void SaveSlotSeedMetaData::json_deserialize(nlohmann::json& j) { j.get_to(*this); }

    std::shared_ptr<SeedSource> SaveSlotSeedMetaData::get_source() const {
        return seed::parse_source_string(seed_source_string);
    }

    std::vector<std::byte> SeedArchiveSaveMetaData::save() {
        return seed_archive != nullptr
        ? seed_archive->get_archive_data()
        : std::vector<std::byte>{};
    }

    void SeedArchiveSaveMetaData::load(utils::ByteStream& stream) {
        seed_archive = std::make_shared<SeedArchive>(stream.buffer);
    }
} // namespace randomizer::seed
