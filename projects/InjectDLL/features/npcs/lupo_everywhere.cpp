#include <randomizer/conditions/condition_override.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace
{
    void initialize()
    {
        randomizer::conditions::register_condition_intercept("swampTorchIntroductionA/npcSetup",
            [](std::string_view path, void* obj) { return true; });
    }

    IL2CPP_INTERCEPT(, QuestNodeWisps, void, SelectInteraction, (app::QuestNodeWisps* this_ptr)) {
        auto path = il2cpp::unity::get_path(this_ptr);
        if (path == "swampTorchIntroductionA/npcSetup/mapMakerSetup/mapMakerEntity(Clone)/dialogs/questGraph")
        {
            auto setup = this_ptr->fields.QuestSetup;
            auto quest_sets = setup->fields.QuestInteractionSets->fields._items->vector[0];
            auto set = quest_sets->fields.InteractionSets->fields._items->vector[0];
            auto interaction = set->fields.Interactions->fields._items->vector[0];
            interaction->fields.Condition = nullptr;
        }
    }

    CALL_ON_INIT(initialize);
}
