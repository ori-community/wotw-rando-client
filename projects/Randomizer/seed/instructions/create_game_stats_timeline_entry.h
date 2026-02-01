#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>
#include <Randomizer/tracking/game_tracker.h>
#include <Randomizer/map/map_icons.h>

INSTRUCTION(CreateGameStatsTimelineEntry)
    explicit CreateGameStatsTimelineEntry(const std::string& label, const std::string& icon_name) :
        label(label),
        icon_name(icon_name) {}

    std::string label;
    // String because it's a launcher icon
    std::string icon_name;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        timing::get_save_file_game_stats_events().add_timeline_entry(label, icon_name);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("CreateGameStatsTimelineEntry -> {}, {}", label, icon_name);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<CreateGameStatsTimelineEntry>(j.at(0).get<std::string>(), j.at(1).get<std::string>());
    }
};
