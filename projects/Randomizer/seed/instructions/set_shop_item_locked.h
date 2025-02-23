#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetShopItemLocked)
    SetShopItemLocked(const int group, const int member) :
        group(group),
        member(member) {}

    int group;
    int member;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const core::api::uber_states::UberState state(group, member);
        const auto slot = game::shops::shop_slot_from_state(state);

        if (slot == nullptr) {
            modloader::error("instructions", std::format("[SetShopItemLocked] Did not find shop slot for state {}", state));
            return;
        }

        slot->is_locked = memory.booleans.get(0);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetShopItemLocked -> {}|{} = {}", group, member, memory.booleans.get(0) ? "true" : "false");
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetShopItemLocked>(j.at("group").get<int>(), j.at("member").get<int>());
    }
};
