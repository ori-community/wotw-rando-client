#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/arithmetic.h>

INSTRUCTION_DERIVE(ArithmeticInteger, Arithmetic, int)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<ArithmeticInteger>(parse_enum<ArithmeticOperator>(j));
    }
};
