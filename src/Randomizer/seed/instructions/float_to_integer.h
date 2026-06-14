#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/cast.h>

INSTRUCTION_DERIVE(FloatToInteger, Cast, float, int)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<FloatToInteger>();
    }
};
