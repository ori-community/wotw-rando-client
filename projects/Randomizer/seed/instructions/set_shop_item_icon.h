#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetShopItemIcon)
    SetShopItemIcon(const int group, const int member, std::string icon) :
        group(group),
        member(member),
        icon_identifier(std::move(icon)) {}

    int group;
    int member;
    std::string icon_identifier;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const core::api::uber_states::UberState state(group, member);
        const auto slot = game::shops::shop_slot_from_state(state);

        if (!slot.has_value()) {
            modloader::error("instructions", std::format("[SetShopItemIcon] Did not find shop slot for state {}", state));
            return;
        }

        if (slot.value() | vx::is<std::reference_wrapper<game::shops::ShopUIShopSlot>>) {
            auto& ui_shop_slot = (slot.value() | vx::as<std::reference_wrapper<game::shops::ShopUIShopSlot>>).get();
            ui_shop_slot.icon_texture_identifier.set(icon_identifier);
            return;
        }

        modloader::error("instructions", std::format("[SetShopItemIcon] Incompatible shop slot for state {}", state));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetShopItemIcon -> {}|{} = {}", group, member, icon_identifier);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetShopItemIcon>(j.at(0).at(0).get<int>(), j.at(0).at(1).get<int>(), get_texture_identifier_from_json(j.at(1)));
    }
};
