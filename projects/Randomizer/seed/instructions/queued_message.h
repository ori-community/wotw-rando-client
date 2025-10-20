#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(QueuedMessage)
    QueuedMessage(const std::optional<std::size_t> id, const bool prioritized) :
                id(id),
                prioritized(prioritized) {}

    std::optional<std::size_t> id;
    bool prioritized;
    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto handle = core::message_controller().queue_central(
            {
                .text = core::Property<std::string>(memory.strings.get(0)),
                .duration = memory.floats.get(0),
                .prioritized = prioritized,
            },
            true
        );

        if (id.has_value()) {
            environment.add_queued_message_box(id.value(), handle);
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format(
            "QueuedMessage{} ->{} '{}' with timeout {}",
            prioritized ? " (Prioritized)" : "",
            id.has_value() ? std::format(" id {}", id.value()) : "",
            memory.strings.get(0),
            memory.floats.get(0)
        );
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        const auto id = j.at(0).is_null() ? std::nullopt : std::make_optional(j.at(0).get<int>());
        const auto prioritized = j.at(1).get<bool>();
        return std::make_unique<QueuedMessage>(id, prioritized);
    }
};
