#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(Arithmetic, typename T)
    explicit Arithmetic(const ArithmeticOperator op) :
                op(op) {}

    ArithmeticOperator op;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        switch (op) {
            case ArithmeticOperator::Add:
                memory.set(0, memory.get<T>(0) + memory.get<T>(1));
                break;
            case ArithmeticOperator::Subtract:
                memory.set(0, memory.get<T>(0) - memory.get<T>(1));
                break;
            case ArithmeticOperator::Multiply:
                memory.set(0, memory.get<T>(0) * memory.get<T>(1));
                break;
            case ArithmeticOperator::Divide:
                memory.set(0, memory.get<T>(0) / memory.get<T>(1));
                break;
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        nlohmann::json j;
        to_json(j, op);
        return std::format("Arithmetic ({}) -> 0:{} {} 1:{}", TypeStr<T>::VALUE, memory.get<T>(0), j.get<std::string>(), memory.get<T>(1));
    }
};
