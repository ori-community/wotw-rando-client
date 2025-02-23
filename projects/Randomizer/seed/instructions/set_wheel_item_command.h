#pragma once
#include <Randomizer/features/wheel.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetWheelItemCommand)
    SetWheelItemCommand(
        const int wheel,
        const features::wheel::WheelItemPosition position,
        const features::wheel::WheelBind bind,
        const std::size_t command
    ) :
        wheel(wheel),
        position(position),
        bind(bind),
        command(command) {}

    int wheel;
    features::wheel::WheelItemPosition position;
    features::wheel::WheelBind bind;
    std::size_t command;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto command_copy = command;
        set_wheel_item_callback(wheel, position, bind, [=](auto, auto, auto) {
            game_seed().execute_command(command_copy);
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format(
            "SetWheelItemCommand -> Wheel {}, Position {}, Bind {}, Command {}",
            wheel,
            static_cast<int>(position),
            static_cast<int>(bind),
            command
        );
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetWheelItemCommand>(
            j.at(0).get<int>(),
            parse_enum<features::wheel::WheelItemPosition>(j.at(1)),
            parse_enum<features::wheel::WheelBind>(j.at(2)),
            j.at(3).get<std::size_t>()
        );
    }
};
