#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/set.h>

INSTRUCTION_DERIVE(SetFloat, Set, float)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetFloat>(j.get<float>());
    }
};
