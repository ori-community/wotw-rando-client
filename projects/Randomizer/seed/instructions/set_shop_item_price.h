#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetShopItemPrice)
    SetShopItemPrice(const int group, const int member) :
        group(group),
        member(member) {}

    int group;
    int member;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const core::api::uber_states::UberState state(group, member);
        const auto slot = game::shops::shop_slot_from_state(state);

        if (slot == nullptr) {
            modloader::error("instructions", std::format("[SetShopItemPrice] Did not find shop slot for state {}", state));
            return;
        }

        slot->cost.set(memory.integers.get(0));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetShopItemPrice -> {}|{} = {}", group, member, memory.integers.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetShopItemPrice>(j.at("group").get<int>(), j.at("member").get<int>());
    }
};
