#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/cast.h>

INSTRUCTION_DERIVE(IntegerToFloat, Cast, int, float)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<IntegerToFloat>();
    }
};
