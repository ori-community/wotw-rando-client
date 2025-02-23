#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/compare_numeric.h>

INSTRUCTION_DERIVE(CompareFloat, CompareNumeric, float)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<CompareFloat>(parse_enum<Comparator>(j));
    }
};
