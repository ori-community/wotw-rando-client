#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/compare_equality.h>

INSTRUCTION_DERIVE(CompareBoolean, CompareEquality, bool)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<CompareBoolean>(parse_enum<EqualityComparator>(j));
    }
};
