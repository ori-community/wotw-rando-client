#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetShopItemHidden)
    SetShopItemHidden(const int group, const int member) :
        group(group),
        member(member) {}

    int group;
    int member;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const core::api::uber_states::UberState state(group, member);
        const auto slot = game::shops::shop_slot_from_state(state);

        if (!slot.has_value()) {
            modloader::error("instructions", std::format("[SetShopItemHidden] Did not find shop slot for state {}", state));
            return;
        }

        if (slot.value() | vx::is<std::reference_wrapper<game::shops::ShopUIShopSlot>>) {
            const auto& ui_shop_slot = (slot.value() | vx::as<std::reference_wrapper<game::shops::ShopUIShopSlot>>).get();
            ui_shop_slot.is_hidden.set(memory.booleans.get(0));
            return;
        }

        modloader::error("instructions", std::format("[SetShopItemHidden] Incompatible shop slot for state {}", state));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetShopItemHidden -> {}|{} = {}", group, member, memory.booleans.get(0) ? "true" : "false");
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetShopItemHidden>(j.at("group").get<int>(), j.at("member").get<int>());
    }
};
