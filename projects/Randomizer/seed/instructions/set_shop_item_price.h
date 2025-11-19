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

        if (!slot.has_value()) {
            modloader::error("instructions", std::format("[SetShopItemPrice] Did not find shop slot for state {}", state));
            return;
        }

        if (*slot | vx::is<std::reference_wrapper<game::shops::ShopUIShopSlot>>) {
            const auto& shop_slot = (slot.value() | vx::as<std::reference_wrapper<game::shops::ShopUIShopSlot>>).get();
            shop_slot.cost.set(memory.integers.get(0));
            return;
        }

        if (*slot | vx::is<std::reference_wrapper<game::shops::CostOnlyShopSlot>>) {
            const auto& shop_slot = (slot.value() | vx::as<std::reference_wrapper<game::shops::CostOnlyShopSlot>>).get();
            shop_slot.cost.set(memory.integers.get(0));
            return;
        }

        modloader::error("instructions", std::format("[SetShopItemPrice] Incompatible shop slot for state {}", state));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetShopItemPrice -> {}|{} = {}", group, member, memory.integers.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetShopItemPrice>(j.at(0).get<int>(), j.at(1).get<int>());
    }
};
