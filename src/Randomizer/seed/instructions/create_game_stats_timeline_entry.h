#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>
#include <Randomizer/tracking/game_tracker.h>
#include <Randomizer/map/map_icons.h>

INSTRUCTION(CreateGameStatsTimelineEntry)
    explicit CreateGameStatsTimelineEntry(const map::icons::MapIcon::Type icon) :
        icon_type(icon) {}

    map::icons::MapIcon::Type icon_type;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        timing::get_save_file_game_stats_events().add_timeline_entry(
            memory.heap.get<std::string>(0),
            icon_type,
            timing::SaveFileGameStatsEvents::TimelineEntryEvent::Type::Custom
        );
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format(
            "CreateGameStatsTimelineEntry -> {}, {}",
            memory.heap.get<std::string>(0),
            magic_enum::enum_name(icon_type)
        );
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<CreateGameStatsTimelineEntry>(parse_enum<map::icons::MapIcon::Type>(j));
    }
};
