#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(QueuedMessageScopedPickupPosition)
    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.set_queued_message_pickup_position_in_current_scope({
            memory.floats.get(0),
            memory.floats.get(1),
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("QueuedMessageScopedPickupPosition -> {}, {}", memory.floats.get(0), memory.floats.get(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<QueuedMessageScopedPickupPosition>();
    }
};
