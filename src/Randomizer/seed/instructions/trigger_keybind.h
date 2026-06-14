#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(TriggerKeybind)
     explicit TriggerKeybind(const Action action) :
        action(action) {}

    Action action;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        input::trigger_action(action);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("TriggerKeybind -> {}", static_cast<int>(action));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<TriggerKeybind>(j.get<Action>());
    }
};
