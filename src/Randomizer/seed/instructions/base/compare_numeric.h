#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(CompareNumeric, typename T)
    explicit CompareNumeric(const Comparator op) :
                op(op) {}

    Comparator op;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        switch (op) {
            case Comparator::Equal:
                memory.heap.set<bool>(0, memory.heap.get<T>(0) == memory.heap.get<T>(1));
            break;
            case Comparator::NotEqual:
                memory.heap.set<bool>(0, memory.heap.get<T>(0) != memory.heap.get<T>(1));
            break;
            case Comparator::Less:
                memory.heap.set<bool>(0, memory.heap.get<T>(0) < memory.heap.get<T>(1));
            break;
            case Comparator::LessOrEqual:
                memory.heap.set<bool>(0, memory.heap.get<T>(0) <= memory.heap.get<T>(1));
            break;
            case Comparator::Greater:
                memory.heap.set<bool>(0, memory.heap.get<T>(0) > memory.heap.get<T>(1));
            break;
            case Comparator::GreaterOrEqual:
                memory.heap.set<bool>(0, memory.heap.get<T>(0) >= memory.heap.get<T>(1));
            break;
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        nlohmann::json j;
        to_json(j, op);
        return std::format("CompareNumeric {} [0]:{} {} [1]:{}", TypeStr<T>::VALUE, memory.heap.get<T>(0), j.get<std::string>(), memory.heap.get<T>(1));
    }
};
