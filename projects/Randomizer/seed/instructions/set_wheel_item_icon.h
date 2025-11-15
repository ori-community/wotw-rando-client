#pragma once
#include <Randomizer/features/wheel.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetWheelItemIcon)
    SetWheelItemIcon(const int wheel, const features::wheel::WheelItemPosition position, std::string icon) :
        wheel(wheel),
        position(position),
        icon(std::move(icon)) {}

    int wheel;
    features::wheel::WheelItemPosition position;
    std::string icon;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        set_wheel_item_texture(wheel, position, icon);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetWheelItemIcon -> Wheel {}, Position {} = {}", wheel, static_cast<int>(position), memory.strings.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetWheelItemIcon>(j.at(0).get<int>(), parse_enum<features::wheel::WheelItemPosition>(j.at(1)), get_texture_identifier_from_json(j.at(2)));
    }
};
