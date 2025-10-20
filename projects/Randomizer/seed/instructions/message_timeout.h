#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(MessageTimeout)
    explicit MessageTimeout(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.set_queued_message_box_timeout(id, memory.floats.get(0));
        environment.set_free_message_box_timeout(id, memory.floats.get(0));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("MessageTimeout {} -> {:.3}", id, memory.floats.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<MessageTimeout>(j.get<std::size_t>());
    }
};
