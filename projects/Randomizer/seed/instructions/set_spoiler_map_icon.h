#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetSpoilerMapIcon)
    explicit SetSpoilerMapIcon(std::string location, const MapIcon icon) :
        location(std::move(location)),
        icon(icon) {}

    std::string location;
    MapIcon icon;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        seed.environment().map_spoiler_data[location] = {icon, memory.strings.get(0)};
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetSpoilerMapIcon -> {} = {}", location, static_cast<int>(icon));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetSpoilerMapIcon>(j.at(0).get<std::string>(), parse_enum<MapIcon>(j.at(1)));
    }
};
