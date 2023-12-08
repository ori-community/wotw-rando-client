#include <Randomizer/randomizer.h>
#include <Randomizer/text_processors/helpers.h>
#include <Randomizer/text_processors/seed.h>

#include <Common/ext.h>
#include <Core/api/game/player.h>

namespace randomizer::text_processors {
    namespace {
        core::api::uber_states::UberState current_map_area(UberStateGroup::RandoState, 15);

        std::optional<std::string> total_pickup_count(core::text::ITextProcessor const& base_processor, std::string_view content) {
            return std::to_string(game_seed().info().total_pickups);
        }

        std::optional<std::string> goal_mode_progress(core::text::ITextProcessor const& base_processor, std::string_view content) {
            std::vector<std::string> goals;
            auto const& flags = game_seed().info().flags;
            if (std::ranges::find(flags, "All Trees") != flags.end()) {
                goals.push_back(std::format("Trees: {}/14", core::api::uber_states::UberState(UberStateGroup::RandoState, 502).get<int>()));
            }

            if (std::ranges::find(flags, "All Wisps") != flags.end()) {
                goals.push_back(std::format("Wisps: {}/5", core::api::uber_states::UberState(UberStateGroup::RandoState, 503).get<int>()));
            }

            if (std::ranges::find(flags, "All Quests") != flags.end()) {
                goals.push_back(std::format("Quests: {}/17", core::api::uber_states::UberState(UberStateGroup::RandoState, 504).get<int>()));
            }

            auto output = std::accumulate(
                goals.begin(),
                goals.end(),
                std::string(),
                [](auto const& ss, auto const& s) -> decltype(auto) {
                    return ss.empty() ? s : ss + ", " + s;
                }
            );

            return output.empty() ? output : output + "\n";
        }

        std::optional<std::string> relic_progress(core::text::ITextProcessor const& base_processor, std::string_view content) {
            if (auto const& flags = game_seed().info().flags; std::ranges::find(flags, "Relics") == flags.end()) {
                return "";
            }

            auto const& relics = game_seed().relics();
            const auto current_area = core::api::game::player::get_current_area();
            std::string output = std::format("Relics ({}/{}): ", relics.found_relics(), relics.relic_count());
            std::vector<std::tuple<std::string, std::string>> relic_text;
            for (auto value: relics.relics()) {
                const auto area = location_collection().area(value);
                relic_text.emplace_back(
                    relics.relic_name(value),
                    value.resolve()
                    ? "$"
                    : area == current_area
                    ? "#"
                    : ""
                );
            }

            bool start = true;
            std::ranges::sort(relic_text);
            for (auto [relic, color]: relic_text) {
                if (!start) {
                    output += ", ";
                } else {
                    start = false;
                }

                output += std::format("{1}{0}{1}", relic, color);
            }

            return output + "\n";
        }

        std::optional<std::string> map_relic_progress(core::text::ITextProcessor const& base_processor, std::string_view content) {
            if (auto const& flags = game_seed().info().flags; std::ranges::find(flags, "Relics") == flags.end()) {
                return "";
            }

            auto const& relics = game_seed().relics();
            const auto current_area = static_cast<GameArea>(current_map_area.get<int>());
            const auto relics_in_area = relics.relics_in_area(current_area);
            const auto total = relics_in_area.size();
            if (total == 0) {
                return "(Relicless)\n";
            }

            if (total == 1) {
                return std::format("{}\n", relics_in_area[0].resolve() ? "$(Relic found)$" : "(Relic not found)");
            }

            const auto found = relics.found_relics_in_area(current_area);
            return std::format("{2}{0}/{1} Relics found{2}\n", found, total, found == total ? "$" : "");
        }

        std::optional<std::string> pickup_text(core::text::ITextProcessor const& base_processor, std::string_view content) {
            core::api::uber_states::UberStateCondition target;
            if (!parse_condition(content, target)) {
                return std::nullopt;
            }

            return game_seed().text(target);
        }
    } // namespace

    void SeedProcessor::process(ITextProcessor const& base_processor, std::string& text) const {
        search_and_replace_full(base_processor, "[total_pickup_count()]", total_pickup_count, text);
        search_and_replace_full(base_processor, "[goal_mode_progress()]", goal_mode_progress, text);
        search_and_replace_full(base_processor, "[relic_progress()]", relic_progress, text);
        search_and_replace_full(base_processor, "[map_relic_progress()]", map_relic_progress, text);
        search_and_replace(base_processor, "[pickup_text(", pickup_text, text);
    }
} // namespace randomizer::text_processors
