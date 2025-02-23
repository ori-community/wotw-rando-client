#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/fetch.h>

INSTRUCTION_DERIVE(FetchBoolean, Fetch, bool)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<FetchBoolean>(j.at("group").get<int>(), j.at("member").get<int>());
    }
};
