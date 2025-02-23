#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(MessageTimeout)
    explicit MessageTimeout(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto queued_it = environment.queued_message_boxes.find(id);
        if (queued_it != environment.queued_message_boxes.end() && !queued_it->second.handle->message.expired()) {
            queued_it->second.handle->time_left = memory.floats.get(0);
        }

        const auto free_it = environment.free_message_boxes.find(id);
        if (free_it != environment.free_message_boxes.end()) {
            free_it->second.timeout = memory.floats.get(0);
            environment.message_boxes_with_timeouts.emplace(free_it->first);
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("MessageTimeout {} -> {:.3}", id, memory.floats.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<MessageTimeout>(j.get<std::size_t>());
    }
};
