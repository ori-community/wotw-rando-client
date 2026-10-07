#include <Core/api/uber_states/uber_state.h>
#include <Core/uber_states/core_uber_states.h>
#include <Modloader/app/methods/QuestNodeWisps.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/conditions/condition_override.h>
#include <Randomizer/conditions/condition_uber_state.h>
#include <optional>


using namespace modloader;
using namespace app::classes;

namespace {
    // Don't get fooled by the in-game state name, it does not make any sense
    auto& has_sword_condition_state = core::uber_states::state<"npcsStateGroup", "hasMapInkwaterMarshNotCondition">();

    IL2CPP_INTERCEPT(void, QuestNodeWisps, SelectInteraction, app::QuestNodeWisps* this_ptr) {
        const auto path = il2cpp::unity::get_path(this_ptr);
        if (path == "swampTorchIntroductionA/npcSetup/mapMakerSetup/mapMakerEntity(Clone)/dialogs/questGraph") {
            const auto interaction_sets = this_ptr->fields.QuestSetup->fields.QuestInteractionSets;
            if (interaction_sets->fields._size > 2) {
                il2cpp::invoke(interaction_sets, "Remove", interaction_sets->fields._items->vector[2]);
            }
        }

        next::QuestNodeWisps::SelectInteraction(this_ptr);
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().on<modloader::events::GameReady>([](auto) {
        randomizer::conditions::register_condition_intercept(
            randomizer::conditions::ConditionType::HasAbilityCondition,
            "swampTorchIntroductionA/npcSetup",
            [](std::string_view path, void* obj) { return std::optional<bool>(true); }
        );

        randomizer::conditions::register_condition_uber_state_intercept(has_sword_condition_state, [](app::ConditionUberState* state) { return std::optional<bool>(true); });
    });
} // namespace
