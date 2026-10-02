#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/GameWorld.h>
#include <Modloader/app/methods/RuntimeGameWorldArea.h>
#include <Modloader/app/types/GameWorld.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/tracking/game_tracker.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


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

        const auto total_pickups_in_this_area = core::api::uber_states::UberState<core::api::uber_states::UberStateType::SerializedIntUberState>(randomizer::uber_states::group_id<"randoStats">(), 1100 + static_cast<int>(game_area)).get();

        if (total_pickups_in_this_area == 0) {
            this_ptr->fields.m_completionAmount = 1.f;
            return;
        }

        const auto collected_pickups_in_this_area = core::api::uber_states::UberState<core::api::uber_states::UberStateType::SerializedIntUberState>(randomizer::uber_states::group_id<"randoStats">(), 1000 + static_cast<int>(game_area)).get();
        this_ptr->fields.m_completionAmount = static_cast<float>(collected_pickups_in_this_area) / static_cast<float>(total_pickups_in_this_area);
    }

    IL2CPP_INTERCEPT(void, GameWorld, Awake, app::GameWorld* this_ptr) {
        next::GameWorld::Awake(this_ptr);

        std::vector<core::api::uber_states::UntypedUberId> completion_uber_state_ids;

        for (auto game_area : magic_enum::enum_values<GameArea>()) {
            if (game_area == GameArea::Void) {
                continue;
            }

            completion_uber_state_ids.emplace_back(randomizer::uber_states::group_id<"randoStats">(), 1000 + static_cast<int>(game_area));
            completion_uber_state_ids.emplace_back(randomizer::uber_states::group_id<"randoStats">(), 1100 + static_cast<int>(game_area));
        }

        on_completion_state_changed_effect = core::reactivity::watch_effect()
            .effect(completion_uber_state_ids)
            .after([] {
                for (auto runtime_game_world_area: il2cpp::ListIterator(types::GameWorld::get_class()->static_fields->Instance->fields.RuntimeAreas)) {
                    runtime_game_world_area->fields.m_dirtyCompletionAmount = true;
                }
            })
            .finalize();
    }
}
