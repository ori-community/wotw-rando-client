#pragma once
#include <Randomizer/features/wheel.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetWheelItemColor)
    SetWheelItemColor(const int wheel, const features::wheel::WheelItemPosition position) :
        wheel(wheel),
        position(position) {}

    int wheel;
    features::wheel::WheelItemPosition position;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        set_wheel_item_color(wheel, position, memory.integers.get(0), memory.integers.get(1), memory.integers.get(2), memory.integers.get(3));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format(
            "SetWheelItemColor -> Wheel {}, Position {} = {},{},{},{}",
            wheel,
            static_cast<int>(position),
            memory.integers.get(0),
            memory.integers.get(1),
            memory.integers.get(2),
            memory.integers.get(3)
        );
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetWheelItemColor>(j.at(0).get<int>(), parse_enum<features::wheel::WheelItemPosition>(j.at(1)));
    }
};
