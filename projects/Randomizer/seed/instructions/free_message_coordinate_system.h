#pragma once
#include <Core/api/messages/message_box.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(FreeMessageCoordinateSystem)
    FreeMessageCoordinateSystem(const std::size_t id, const core::api::messages::CoordinateSystem coordinate_system) :
        id(id),
        coordinate_system(coordinate_system) {}

    std::size_t id;
    core::api::messages::CoordinateSystem coordinate_system;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        if (environment.free_message_boxes.contains(id)) {
            environment.free_message_boxes[id].message->coordinate_system().set(coordinate_system);
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("FreeMessageCoordinateSystem {} -> {}", id, static_cast<int>(coordinate_system));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<FreeMessageCoordinateSystem>(j.at(0).get<std::size_t>(), parse_enum<core::api::messages::CoordinateSystem>(j.at(1)));
    }
};
