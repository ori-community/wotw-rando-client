#include <Core/api/game/game.h>
#include <Core/core.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/seed.h>
#include <Profiler/tracy.h>

#include "Common/vx.h"

namespace randomizer::seed {

    Seed::Seed() {
        register_slot(SaveMetaSlot::SeedEnvironment, SaveMetaSlotPersistence::None, m_environment);
        register_slot(SaveMetaSlot::SeedPersistentMemory, SaveMetaSlotPersistence::None, m_persistent_memory);
    }

    void Seed::read(const std::shared_ptr<SeedArchive>& seed_archive, const seed_parser parser, const bool show_message) {
        m_seed_archive = seed_archive;

        event_bus().trigger_event(RandomizerEvent::SeedLoaded, EventTiming::Before);
        const auto data = std::make_shared<SeedParseOutput>();

        if (!parser(m_seed_archive, data)) {
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
                            const auto new_value = m_memory.booleans.get(0);
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
                        m_command_stack.clear();
                    },
                };
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
        if (m_parse_output->data.commands.size() <= id) {
            throw std::exception(std::format("Command ID {} out of bounds", id).c_str());
        }

        for (const auto& command: m_parse_output->data.commands.at(id)) {
            try {
                ZoneScopedN("Instruction");

#ifdef ENABLE_PROFILER
                const auto command_text = command->to_string(*this, m_memory);
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
    }

    void Seed::trigger(const SeedClientEvent event, bool force_outside_game) {
        if (m_parse_output->data.events[event].empty()) {
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

    void SeedArchiveSaveMetaData::load(core::utils::ByteStream& stream) { seed_archive = std::make_shared<SeedArchive>(stream.buffer); }
} // namespace randomizer::seed
