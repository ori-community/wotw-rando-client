#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/RuntimeGameWorldArea.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/tracking/game_tracker.h>
#include <Modloader/app/methods/GameWorld.h>
#include <Modloader/app/types/GameWorld.h>

namespace {
    using namespace app::classes;

    core::reactivity::ReactiveEffect::ptr_t on_completion_state_changed_effect = nullptr;

    /**
     * In the randomizer we calculate area completion percentage based on the amount of pickups
     * collected in a particular area instead of relying on the vanilla map percentage calculation.
     */
    IL2CPP_INTERCEPT(void, RuntimeGameWorldArea, UpdateCompletionAmount, app::RuntimeGameWorldArea* this_ptr) {
        const auto game_area = convert_to_game_area(this_ptr->fields.Area->fields.WorldMapAreaUniqueID);

        if (game_area == GameArea::Void) {
            this_ptr->fields.m_completionAmount = 1.f;
            return;
        }

        const auto total_pickups_in_this_area = core::api::uber_states::UberState(UberStateGroup::RandoStats, 1100 + static_cast<int>(game_area)).get<int>();

        if (total_pickups_in_this_area == 0) {
            this_ptr->fields.m_completionAmount = 1.f;
            return;
        }

        const auto collected_pickups_in_this_area = core::api::uber_states::UberState(UberStateGroup::RandoStats, 1000 + static_cast<int>(game_area)).get<int>();
        this_ptr->fields.m_completionAmount = static_cast<float>(collected_pickups_in_this_area) / static_cast<float>(total_pickups_in_this_area);
    }

    IL2CPP_INTERCEPT(void, GameWorld, Awake, app::GameWorld* this_ptr) {
        next::GameWorld::Awake(this_ptr);

        std::vector<core::api::uber_states::UberState> completion_uber_states;

        for (auto i = 0; i < static_cast<int>(GameArea::TOTAL); ++i) {
            completion_uber_states.emplace_back(UberStateGroup::RandoStats, 1000 + i);
            completion_uber_states.emplace_back(UberStateGroup::RandoStats, 1100 + i);
        }

        on_completion_state_changed_effect = core::reactivity::watch_effect()
            .effect(completion_uber_states)
            .after([] {
                for (auto runtime_game_world_area: il2cpp::ListIterator(types::GameWorld::get_class()->static_fields->Instance->fields.RuntimeAreas)) {
                    runtime_game_world_area->fields.m_dirtyCompletionAmount = true;
                }
            })
            .finalize();
    }
}
