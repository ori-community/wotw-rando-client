#include <common.h>
#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <dev/dev_commands.h>

namespace
{
    IL2CPP_BINDING(, ActivateBasedOnCondition, app::GameObject*, get_EffectiveTarget, (app::ActivateBasedOnCondition* this_ptr));

    IL2CPP_INTERCEPT(, ActivateBasedOnCondition, void, Awake, (app::ActivateBasedOnCondition* this_ptr))
    {
        auto target = ActivateBasedOnCondition_get_EffectiveTarget(this_ptr);
        auto name = il2cpp::unity::get_object_name(target);
        // TODO: use visualizer and hide behind a dev switch.
        //dev::console_send("ActivateBasedOnCondition: " + name);
        if (name == "mapMakerSetup" && this_ptr->fields.Condition->klass->_0.name != std::string("DifficultyCondition"))
        {
            auto game_obj = il2cpp::unity::get_game_object(this_ptr->fields.Condition);
            auto condition = il2cpp::unity::add_component<app::DifficultyCondition>(game_obj, "", "DifficultyCondition");

            if (condition != nullptr)
            {
                // Spoof an always on condition.
                condition->fields.Easy = true;
                condition->fields.Normal = true;
                condition->fields.Hard = true;
                condition->fields.OneLife = true;

                il2cpp::unity::destroy_object(this_ptr->fields.Condition);
                this_ptr->fields.Condition = reinterpret_cast<app::Condition_1*>(condition);

            }
            else
                trace(MessageType::Error, 2, "game", "Failed to create AlwaysTrueCondition to replace condition in map maker");
        }

        ActivateBasedOnCondition_Awake(this_ptr);
    }
}
