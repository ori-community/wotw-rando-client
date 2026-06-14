#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/fetch.h>

INSTRUCTION_DERIVE(FetchInteger, Fetch, int)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<FetchInteger>(j.at(0).get<int>(), j.at(1).get<int>());
    }
};
