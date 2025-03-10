#pragma once
#include <Randomizer/features/wheel.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(DestroyWheelItem)
    DestroyWheelItem(const int wheel, const features::wheel::WheelItemPosition position) :
        wheel(wheel),
        position(position) {}

    int wheel;
    features::wheel::WheelItemPosition position;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        clear_wheel_item(wheel, position);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("DestroyWheelItem -> Wheel {}, Position {}", wheel, static_cast<int>(position));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<DestroyWheelItem>(j.at(0).get<int>(), parse_enum<features::wheel::WheelItemPosition>(j.at(1)));
    }
};
