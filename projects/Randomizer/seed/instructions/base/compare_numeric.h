#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(CompareNumeric, typename T)
    explicit CompareNumeric(const Comparator op) :
                op(op) {}

    Comparator op;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        switch (op) {
            case Comparator::Equal:
                memory.booleans.set(0, memory.get<T>(0) == memory.get<T>(1));
            break;
            case Comparator::NotEqual:
                memory.booleans.set(0, memory.get<T>(0) != memory.get<T>(1));
            break;
            case Comparator::Less:
                memory.booleans.set(0, memory.get<T>(0) < memory.get<T>(1));
            break;
            case Comparator::LessOrEqual:
                memory.booleans.set(0, memory.get<T>(0) <= memory.get<T>(1));
            break;
            case Comparator::Greater:
                memory.booleans.set(0, memory.get<T>(0) > memory.get<T>(1));
            break;
            case Comparator::GreaterOrEqual:
                memory.booleans.set(0, memory.get<T>(0) >= memory.get<T>(1));
            break;
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        nlohmann::json j;
        to_json(j, op);
        return std::format("CompareNumeric ({}) -> 0:{} {} 1:{}", TypeStr<T>::VALUE, memory.get<T>(0), j.get<std::string>(), memory.get<T>(1));
    }
};
