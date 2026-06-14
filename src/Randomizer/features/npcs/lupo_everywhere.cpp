#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/conditions/condition_override.h>
#include <Randomizer/conditions/condition_uber_state.h>

#include <Modloader/app/methods/QuestNodeWisps.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <optional>

using namespace modloader;
using namespace app::classes;

namespace {
    core::api::uber_states::UberState has_sword(static_cast<UberStateGroup>(48248), 49214);

    IL2CPP_INTERCEPT(void, QuestNodeWisps, SelectInteraction, app::QuestNodeWisps * this_ptr) {
        const auto path = il2cpp::unity::get_path(this_ptr);
        if (path == "swampTorchIntroductionA/npcSetup/mapMakerSetup/mapMakerEntity(Clone)/dialogs/questGraph") {
            const auto interaction_sets = this_ptr->fields.QuestSetup->fields.QuestInteractionSets;
            if (interaction_sets->fields._size > 2) {
                il2cpp::invoke(interaction_sets, "Remove", interaction_sets->fields._items->vector[2]);
            }
        }

        next::QuestNodeWisps::SelectInteraction(this_ptr);
    }

    auto on_game_ready = modloader::event_bus().register_handler(
        ModloaderEvent::GameReady,
        [](auto) {
            randomizer::conditions::register_condition_intercept(
                randomizer::conditions::ConditionType::HasAbilityCondition,
                "swampTorchIntroductionA/npcSetup",
                [](std::string_view path, void* obj) { return std::optional<bool>(true); }
            );

            randomizer::conditions::register_condition_uber_state_intercept(has_sword, [](app::ConditionUberState* state) { return std::optional<bool>(true); });
        }
    );
} // namespace
