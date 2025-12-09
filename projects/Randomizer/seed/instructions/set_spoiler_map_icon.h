#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>
#include <Randomizer/map/map_icons.h>

INSTRUCTION(SetSpoilerMapIcon)
    explicit SetSpoilerMapIcon(std::string location, const map::icons::MapIcon::Type icon) :
        location_name(std::move(location)),
        icon_type(icon) {}

    std::string location_name;
    map::icons::MapIcon::Type icon_type;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        static map::icons::MapIcon::visibility_effect_fn_t spoiler_icon_visibility_effect_fn = [] (const map::filter::MapFilter& filter) {
            return filter == map::filter::MapFilter::Spoiler
                ? map::icons::MapIcon::Visibilities::visible
                : map::icons::MapIcon::Visibilities::invisible;
        };

        const auto location = location_collection().location(location_name);

        if (!location.has_value()) {
            modloader::warn("instructions", std::format("SetSpoilerMapIcon: Unknown location name: {}", location_name));
            return;
        }

        if (!location->map_position.has_value()) {
            modloader::warn("instructions", std::format("SetSpoilerMapIcon: Location {} does not have a map position set", location_name));
            return;
        }

        environment.set_spoiler_map_icon(
            location_name,
            std::make_shared<map::icons::MapIcon>(
                icon_type,
                memory.strings.get(0),
                *location->map_position,
                spoiler_icon_visibility_effect_fn
            )
        );
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetSpoilerMapIcon -> {} = {}", location_name, 0/*static_cast<int>(icon)*/);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetSpoilerMapIcon>(j.at(0).get<std::string>(), parse_enum<map::icons::MapIcon::Type>(j.at(1)));
    }
};
