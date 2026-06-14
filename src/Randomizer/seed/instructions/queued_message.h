#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(QueuedMessage)
    QueuedMessage(const std::optional<std::size_t> id, const bool prioritized) :
                id(id),
                prioritized(prioritized) {}

    std::optional<std::size_t> id;
    bool prioritized;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto text = memory.heap.get<std::string>(0);

        const auto queued_message = message_queue().enqueue(
            {
                .text = core::Property<std::string>(text),
                .time_left = memory.heap.get<float>(0),
            },
            prioritized,
            environment.get_queued_message_pickup_position_in_current_scope()
        );

        if (!prioritized) {
            recent_messages_view().push_message(text);
        }

        if (id.has_value()) {
            environment.add_queued_message_box(id.value(), queued_message);
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format(
            "QueuedMessage{} ->{} '{}' with timeout {}",
            prioritized ? " (Prioritized)" : "",
            id.has_value() ? std::format(" id {}", id.value()) : "",
            memory.heap.get<std::string>(0),
            memory.heap.get<float>(0)
        );
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        const auto id = j.at(0).is_null() ? std::nullopt : std::make_optional(j.at(0).get<int>());
        const auto prioritized = j.at(1).get<bool>();
        return std::make_unique<QueuedMessage>(id, prioritized);
    }
};
