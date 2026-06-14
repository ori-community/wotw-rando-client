#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(LogicOperation)
    explicit LogicOperation(const LogicOperator op) :
                op(op) {}

    LogicOperator op;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        switch (op) {
            case LogicOperator::And:
                memory.heap.set<bool>(0, memory.heap.get<bool>(0) && memory.heap.get<bool>(1));
            break;
            case LogicOperator::Or:
                memory.heap.set<bool>(0, memory.heap.get<bool>(0) || memory.heap.get<bool>(1));
            break;
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        nlohmann::json j;
        to_json(j, op);
        return std::format("LogicOperation -> {} {} {}", memory.heap.get<bool>(0), j.get<std::string>(), memory.heap.get<bool>(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<LogicOperation>(parse_enum<LogicOperator>(j));
    }
};
