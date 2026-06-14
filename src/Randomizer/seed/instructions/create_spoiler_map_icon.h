#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>
#include <Randomizer/map/map_icons.h>

INSTRUCTION(CreateSpoilerMapIcon)
    explicit CreateSpoilerMapIcon(const map::icons::MapIcon::Type icon) :
        icon_type(icon) {}

    map::icons::MapIcon::Type icon_type;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        static map::icons::MapIcon::visibility_effect_fn_t spoiler_icon_visibility_effect_fn = [] (const map::filter::MapFilter& filter) {
            return filter == map::filter::MapFilter::Spoiler
                ? map::icons::MapIcon::Visibilities::visible
                : map::icons::MapIcon::Visibilities::invisible;
        };

        static std::size_t next_id = 0;

        environment.set_spoiler_map_icon(
            ++next_id,
            std::make_shared<map::icons::MapIcon>(
                icon_type,
                memory.heap.get<std::string>(0),
                app::Vector2{memory.heap.get<float>(0), memory.heap.get<float>(1)},
                spoiler_icon_visibility_effect_fn
            )
        );
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("CreateSpoilerMapIcon -> {} at {}, {}", magic_enum::enum_name(icon_type), memory.heap.get<float>(0), memory.heap.get<float>(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<CreateSpoilerMapIcon>(parse_enum<map::icons::MapIcon::Type>(j));
    }
};
