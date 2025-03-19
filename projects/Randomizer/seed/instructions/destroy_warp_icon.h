#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(DestroyWarpIcon)
    explicit DestroyWarpIcon(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto icon = environment.warp_icons.find(id);
        if (icon != environment.warp_icons.end()) {
            environment.warp_icons.erase(icon);
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("DestroyWarpIcon -> {}", id);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<DestroyWarpIcon>(j.get<std::size_t>());
    }
};
