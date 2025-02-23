#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(MessageDestroy)
    explicit MessageDestroy(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.free_message_boxes.erase(id);
        environment.message_boxes_with_timeouts.erase(id);
        if (environment.queued_message_boxes.contains(id)) {
            environment.queued_message_boxes.at(id).handle->time_left = 0;
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("MessageDestroy {}", id);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<MessageDestroy>(j.get<std::size_t>());
    }
};
