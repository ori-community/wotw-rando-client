#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetShopItemIcon)
    SetShopItemIcon(const int group, const int member, std::string icon) :
        group(group),
        member(member),
        icon(std::move(icon)) {}

    int group;
    int member;
    std::string icon;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const core::api::uber_states::UberState state(group, member);
        const auto slot = game::shops::shop_slot_from_state(state);
        const auto texture = core::api::graphics::textures::get_texture(icon);

        if (slot == nullptr) {
            modloader::error("instructions", std::format("[SetShopItemIcon] Did not find shop slot for state {}", state));
            return;
        }

        slot->normal.icon = texture;
        slot->locked.icon = texture;
        slot->hidden.icon = texture;
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetShopItemIcon -> {}|{} = {}", group, member, icon);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetShopItemIcon>(j.at(0).at("group").get<int>(), j.at(0).at("member").get<int>(), parse_texture(j.at(1)));
    }
};
