#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(CompareEquality, typename T)
    explicit CompareEquality(const EqualityComparator op) :
                op(op) {}

    EqualityComparator op;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        switch (op) {
            case EqualityComparator::Equal:
                memory.booleans.set(0, memory.get<T>(0) == memory.get<T>(1));
            return;
            case EqualityComparator::NotEqual:
                memory.booleans.set(0, memory.get<T>(0) != memory.get<T>(1));
            return;
        }

        throw RandoException("Invalid operator in CompareEquality instruction");
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        nlohmann::json j;
        to_json(j, op);
        return std::format("CompareEquality ({}) -> 0:{} {} 1:{}", TypeStr<T>::VALUE, memory.get<T>(0), j.get<std::string>(), memory.get<T>(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<CompareEquality>(parse_enum<EqualityComparator>(j));
    }
};
