#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(PositionTriggerDestroy)
    explicit PositionTriggerDestroy(std::size_t id) :
                id(id) {}

    std::size_t id;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.destroy_position_trigger(id);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("PositionTriggerDestroy -> id = {}", id);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<PositionTriggerDestroy>(
            j.get<std::size_t>()
        );
    }
};
