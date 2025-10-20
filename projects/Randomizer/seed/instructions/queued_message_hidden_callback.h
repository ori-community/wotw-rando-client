#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(QueuedMessageHiddenCallback)
    explicit QueuedMessageHiddenCallback(const std::size_t id, const std::size_t command) :
        id(id),
        command(command) {}

    std::size_t id;
    std::size_t command;
    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.set_queued_message_box_hidden_callback(id, command);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("QueuedMessageHiddenCallback {} -> {}", id, command);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        const auto id = j.at(0).get<int>();
        const auto command = j.at(1).get<int>();
        return std::make_unique<QueuedMessageHiddenCallback>(id, command);
    }
};
