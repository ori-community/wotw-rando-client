#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/copy.h>

INSTRUCTION_DERIVE(CopyFloat, Copy, float)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<CopyFloat>(j.at(0).get<std::size_t>(), j.at(1).get<std::size_t>());
    }
};

