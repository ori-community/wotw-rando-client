#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(QueuedMessageVisibleCallback)
    explicit QueuedMessageVisibleCallback(const std::size_t id, const std::size_t command) :
        id(id),
        command(command) {}

    std::size_t id;
    std::size_t command;
    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto it = environment.queued_message_boxes.find(id);
        if (it != environment.queued_message_boxes.end()) {
            it->second.visible_callback = command;
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("QueuedMessageVisibleCallback {} -> {}", id, command);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        const auto id = j.at(0).get<int>();
        const auto command = j.at(1).get<int>();
        return std::make_unique<QueuedMessageVisibleCallback>(id, command);
    }
};
