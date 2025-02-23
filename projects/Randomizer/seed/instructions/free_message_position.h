#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(FreeMessagePosition)
    explicit FreeMessagePosition(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        if (environment.free_message_boxes.contains(id)) {
            environment.free_message_boxes[id].message->position().set(memory.floats.get(0), memory.floats.get(1), 0.f);
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("FreeMessagePosition {} -> {:.3}, {:.3}", id, memory.floats.get(0), memory.floats.get(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<FreeMessagePosition>(j.get<std::size_t>());
    }
};
