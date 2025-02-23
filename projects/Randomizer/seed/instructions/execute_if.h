#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(ExecuteIf)
    explicit ExecuteIf(const int index) :
        index(index) {}

    int index;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        if (!memory.booleans.get(0)) {
            return;
        }

        seed.execute_command(index);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("ExecuteIf ({}) {}", memory.booleans.get(0), index);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<ExecuteIf>(j.get<int>());
    }
};
