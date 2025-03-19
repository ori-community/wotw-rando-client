#pragma once

#include <Randomizer/dev/seed_debugger.h>
#include <Randomizer/seed/instruction_utils.h>

INSTRUCTION(SetDebuggerTrace)

    explicit SetDebuggerTrace(const bool value) :
        value(value) {}

    bool value;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        if (value) {
            debugger_break(dev::seed_debugger::DebuggerType::File);
        } else {
            debugger_continue(dev::seed_debugger::DebuggerType::File);
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetDebuggerTrace -> {}", value);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetDebuggerTrace>(j.at(0).get<bool>());
    }
};
