#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/instructions/base/store.h>

INSTRUCTION_DERIVE(StoreBoolean, Store, bool)
    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<StoreBoolean>(j.at(0).at("group").get<int>(), j.at(0).at("member").get<int>(), j.at(1).get<bool>());
    }
};
