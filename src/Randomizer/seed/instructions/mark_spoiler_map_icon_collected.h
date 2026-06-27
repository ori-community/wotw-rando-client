#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>
#include <Randomizer/map/map_icons.h>

INSTRUCTION(MarkSpoilerMapIconCollected)
    explicit MarkSpoilerMapIconCollected(const int id) :
        id(id) {}

    int id;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto icon = environment.get_spoiler_map_icon(id);
        if (!icon.has_value()) {
            modloader::error("instructions", std::format("[MarkSpoilerMapIconCollected] Spoiler map icon with id {} does not exist", id));
            return;
        }

        timing::get_save_file_game_stats().set_discovered_item(id, timing::SaveFileGameStats::DiscoveredItem(
            (*icon)->world_position.get().x,
            (*icon)->world_position.get().y,
            (*icon)->type.get(),
            (*icon)->label_text.get(),
            timing::get_in_game_time()
        ));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("MarkSpoilerMapIconCollected -> {}", id);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<MarkSpoilerMapIconCollected>(j.at(0).get<int>());
    }
};
