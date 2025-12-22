#pragma once
#include "Randomizer/map/map_icons.h"
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>


INSTRUCTION(CreateWarpIcon)
    explicit CreateWarpIcon(const std::size_t id) :
        id(id) {}

    std::size_t id;

    static map::icons::MapIcon::ptr_t create_warp_icon(const app::Vector2& world_position, const std::string& label = "Warp") {
        static map::icons::MapIcon::visibility_effect_fn_t custom_warp_visibility_effect = [](const map::filter::MapFilter&) {
            return map::icons::MapIcon::Visibilities::visible;
        };

        const auto map_icon = std::make_shared<map::icons::MapIcon>(
            map::icons::MapIcon::Type::SavePedestal,
            label,
            world_position,
            custom_warp_visibility_effect
        );
        map_icon->can_be_teleported_to.set(true);
        return map_icon;
    }

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.set_warp_icon(id, create_warp_icon(app::Vector2{memory.floats.get(0), memory.floats.get(1)}));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("CreateWarpIcon -> {}", id);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<CreateWarpIcon>(j.get<std::size_t>());
    }
};
