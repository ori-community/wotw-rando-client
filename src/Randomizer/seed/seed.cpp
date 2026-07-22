#include <Core/api/game/game.h>
#include <Core/core.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/seed.h>
#include <Profiler/tracy.h>

#include <Common/vx.h>
#include <Randomizer/seed/parser.h>

namespace randomizer::seed {
    Seed::Seed() {
        register_slot(SaveMetaSlot::SeedEnvironment, SaveMetaSlotPersistence::None, m_environment);
    }

    void Seed::read(const std::shared_ptr<SeedArchive>& seed_archive, const seed_parser parser, const bool show_message) {
        m_seed_archive = seed_archive;
        m_memory.clear();

        event_bus().trigger_event(RandomizerEvent::SeedLoaded, EventTiming::Before);
        m_environment->reset_volatile_values();
        const auto data = std::make_shared<SeedParseOutput>();

        if (!parser(m_seed_archive, data)) {
            std::string error_message = "Failed to load seed";
            if (!data->parser_error.empty()) {
                error_message += ":\n" + data->parser_error;
            }

            modloader::error("seed", error_message);
            message_queue().enqueue({
                .text = core::Property<std::string>(error_message),
                .time_left = 6.f,
            }, true);
            return;
        }

        m_parse_output = data;

        // clang-format off
        {
            modloader::ScopedSetter _(m_is_reading_seed, true);

            for (auto& condition: m_parse_output->data.conditions) {
                condition.condition | vx::match {
                    [&](const int& condition_command_id) {
                        auto builder = core::reactivity::watch_effect()
                            .effect([&] {
                                execute_command(condition_command_id);
                            });

                        condition.reactive_effect = builder.after([&] {
                            const auto new_value = m_memory.heap.get<bool>(0);
                            const auto condition_changed = condition.previous_value != new_value;

                            if (condition_changed) {
                                condition.previous_value = new_value;
                            }

                            // When the condition did not change, or we should not grant, don't execute.
                            // On load, we only want to update condition.previous_value so don't execute either.
                            if (!should_grant() || !condition_changed || core::reactivity::is_effect_running_because_of_trigger_on_load()) {
                                return;
                            }

                            if (new_value) {
                                core::reactivity::run_after_effects([&] {
                                    execute_command(condition.command_id);
                                });
                            }
                        })
                        .trigger_on_load()  // This is to reset condition.previous_value
                        .finalize();
                    },
                    [&](const core::api::uber_states::UberState& uber_state) {
                        auto builder = core::reactivity::watch_effect()
                            .effect({uber_state});

                        condition.reactive_effect = builder.after([&] {
                            if (!should_grant()) {
                                return;
                            }

                            execute_command(condition.command_id);
                        }).finalize();
                    },
                };
            }
        }
        // clang-format on

        event_bus().trigger_event(RandomizerEvent::SeedLoaded, EventTiming::After);

        if (!show_message) {
            return;
        }

        show_tags_message("Reloaded seed.");
    }

    void Seed::show_tags_message(const std::string& prepend) const {
        if (m_parse_output == nullptr) {
            message_queue().enqueue({
                .text = core::Property<std::string>("No seed loaded"),
                .time_left = 3.f,
            }, true);
            return;
        }

        std::string tags_string = "Tags: ";
        tags_string += m_parse_output->meta.tags | std::views::join_with(std::string_view(", ")) | std::ranges::to<std::string>();

        std::string slug_string;
        if (m_parse_output->meta.slug.has_value()) {
            slug_string = std::format("Slug: <hex_9ee2f7ff>{}</>", *m_parse_output->meta.slug);
        }

        std::string message = prepend;
        if (!message.empty()) {
            message += "\n";
        }
        message += slug_string;
        if (!message.empty()) {
            message += "\n";
        }
        message += "<s_0.75>" + tags_string + "</>";

        message_queue().enqueue({
            .text = core::Property<std::string>(message),
            .time_left = 5.f,
        }, true);
    }

    void Seed::execute_command(const std::size_t id) {
        if (m_parse_output->data.commands.size() <= id) {
            throw std::exception(std::format("Command ID {} out of bounds", id).c_str());
        }

        if (m_command_stack_size > MAX_COMMAND_STACK_SIZE) {
            const auto error_message = std::format(
                "Exceeded maximum command stack size of {} while trying\nto execute command ID {}. Use profiler to debug.",
                MAX_COMMAND_STACK_SIZE,
                id
            );

            message_queue().enqueue({
                .text = core::Property<std::string>(error_message),
                .time_left = 5.f,
            }, true);

            modloader::error("instructions", error_message);
            return;
        }

        ++m_command_stack_size;
        const auto _queued_message_pickup_position_scope = m_environment->scope_queued_message_pickup_position();

        for (const auto& command: m_parse_output->data.commands.at(id)) {
            try {
                ZoneScopedN("Instruction");

#ifdef ENABLE_PROFILER
                const auto command_text = command->to_string(*this, m_memory, m_stack);
                ZoneText(command_text.c_str(), command_text.size());
#endif

                command->execute(*this, m_memory, *m_environment);
            } catch (InstructionError& e) {
                modloader::error(
                    "instructions", std::format("Stopped instruction execution due to error in instruction {}: {}", command->get_name(), e.what())
                );
                break;
            }
        }

        --m_command_stack_size;
    }

    void Seed::trigger(const SeedClientEvent event, bool force_outside_game) {
        if (m_parse_output == nullptr || m_parse_output->data.events[event].empty()) {
            // Lessen spam on seed debugger.
            return;
        }

        modloader::ScopedSetter _(m_force_grant_outside_game, force_outside_game, modloader::ScopedSetter<bool>::OP_OR);

        if (!should_grant()) {
            return;
        }

        for (const auto& command: m_parse_output->data.events[event]) {
            execute_command(command);
        }
    }

    bool Seed::should_grant() const {
        ZoneScopedN("should_grant");
        return (m_force_grant_outside_game || core::api::game::in_game()) && !m_is_reading_seed &&
            std::ranges::all_of(m_prevent_grant_callbacks, [](const auto& callback) { return !callback(); });
    }

    void Seed::process_timers(float delta_time) const {
        for (const auto& timer: m_timers) {
            if (timer.toggle.get<bool>()) {
                timer.value.set(timer.value.get() + delta_time);
            }
        }
    }

    nlohmann::json SaveSlotSeedMetaData::json_serialize() { return *this; }

    void SaveSlotSeedMetaData::json_deserialize(nlohmann::json& j) { j.get_to(*this); }

    std::shared_ptr<SeedSource> SaveSlotSeedMetaData::get_source() const { return seed::parse_source_string(seed_source_string); }

    std::vector<std::byte> SeedArchiveSaveMetaData::save() { return seed_archive != nullptr ? seed_archive->get_archive_data() : std::vector<std::byte>{}; }

    void SeedArchiveSaveMetaData::load(core::utils::ByteStream& stream) {
        seed_archive = std::make_shared<SeedArchive>(stream.buffer);

        if (m_load_seed_when_slot_loaded) {
            game_seed().read(seed_archive, seed::parse, false);
        }
    }
} // namespace randomizer::seed
