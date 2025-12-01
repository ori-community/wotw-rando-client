#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/RuntimeGameWorldArea.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/tracking/game_tracker.h>
#include <unordered_map>

namespace {
    using namespace app::classes;

    /**
     * In the randomizer we calculate area completion percentage based on the amount of pickups
     * collected in a particular area instead of relying on the vanilla map percentage calculation.
     */
    IL2CPP_INTERCEPT(void, RuntimeGameWorldArea, UpdateCompletionAmount, app::RuntimeGameWorldArea* this_ptr) {
        const auto pickup_count_by_area = randomizer::game_seed().parser_output().meta.pickup_count_by_area;
        const auto game_area = convert_to_game_area(this_ptr->fields.Area->fields.WorldMapAreaUniqueID);

        const auto total_pickups_in_this_area_it = pickup_count_by_area.find(game_area);
        const auto total_pickups_in_this_area = total_pickups_in_this_area_it == pickup_count_by_area.end()
            ? 0
            : total_pickups_in_this_area_it->second;

        if (total_pickups_in_this_area == 0) {
            this_ptr->fields.m_completionAmount = 1.f;
            return;
        }

        const auto checkpoint_stats = randomizer::timing::get_checkpoint_game_stats();
        const auto collected_pickups_in_this_area_it = checkpoint_stats.pickups_per_area.find(game_area);
        const auto collected_pickups_in_this_area = collected_pickups_in_this_area_it == checkpoint_stats.pickups_per_area.end()
            ? 0
            : collected_pickups_in_this_area_it->second;

        this_ptr->fields.m_completionAmount = static_cast<float>(collected_pickups_in_this_area) / static_cast<float>(total_pickups_in_this_area);
    }
}
