#pragma once
#include <Randomizer/game/map/map.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(CreateWarpIcon)
    explicit CreateWarpIcon(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto icon = add_icon(
            game::map::FilterFlag::All | game::map::FilterFlag::Teleports | game::map::FilterFlag::InLogic | game::map::FilterFlag::Spoilers,
            true
        );

        icon->name().set("custom_warp_icon");
        icon->label().set("Warp");
        icon->icon().set(MapIcon::SavePedestal);
        icon->position().set(memory.floats.get(0), memory.floats.get(1));
        icon->can_teleport().set(true);
        environment.warp_icons[id] = icon;
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("CreateWarpIcon -> {}", id);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<CreateWarpIcon>(j.get<std::size_t>());
    }
};
