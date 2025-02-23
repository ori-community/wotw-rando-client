#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/arithmetic.h>

INSTRUCTION_DERIVE(ArithmeticFloat, Arithmetic, float)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<ArithmeticFloat>(parse_enum<ArithmeticOperator>(j));
    }
};
