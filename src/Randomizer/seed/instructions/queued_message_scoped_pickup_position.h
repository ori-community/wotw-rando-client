#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(QueuedMessageScopedPickupPosition)
    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.set_queued_message_pickup_position_in_current_scope({
            memory.heap.get<float>(0),
            memory.heap.get<float>(1),
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("QueuedMessageScopedPickupPosition -> {}, {}", memory.heap.get<float>(0), memory.heap.get<float>(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<QueuedMessageScopedPickupPosition>();
    }
};
