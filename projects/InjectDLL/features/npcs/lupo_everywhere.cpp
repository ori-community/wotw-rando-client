#include <randomizer/conditions/condition_override.h>
#include <randomizer/conditions/condition_uber_state.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <optional>

using namespace modloader;

namespace
{
    void initialize()
    {
        randomizer::conditions::register_condition_intercept("swampTorchIntroductionA/npcSetup",
            [](std::string_view path, void* obj) { return std::optional<bool>(true); });
        randomizer::conditions::register_condition_uber_state_intercept(48248, 49214,
            [](app::ConditionUberState* state) {
                return std::optional<bool>(uber_states::get_uber_state_value(48248, 18767) < 0.5);
            }
        );
    }

    IL2CPP_INTERCEPT(, QuestNodeWisps, void, SelectInteraction, (app::QuestNodeWisps* this_ptr)) {
        auto path = il2cpp::unity::get_path(this_ptr);
        if (path == "swampTorchIntroductionA/npcSetup/mapMakerSetup/mapMakerEntity(Clone)/dialogs/questGraph")
        {
            auto setup = this_ptr->fields.QuestSetup;
            if (setup->fields.QuestInteractionSets->fields._size > 2)
                il2cpp::invoke(setup->fields.QuestInteractionSets, "Remove", setup->fields.QuestInteractionSets->fields._items->vector[2]);
        }

        QuestNodeWisps::SelectInteraction(this_ptr);
    }

    CALL_ON_INIT(initialize);
}
