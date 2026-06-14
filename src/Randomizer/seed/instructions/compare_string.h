#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/compare_equality.h>

INSTRUCTION_DERIVE(CompareString, CompareEquality, std::string)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<CompareString>(parse_enum<EqualityComparator>(j));
    }
};
