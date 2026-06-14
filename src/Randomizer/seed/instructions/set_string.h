#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/set.h>

INSTRUCTION_DERIVE(SetString, Set, std::string)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetString>(j.get<std::string>());
    }
};
