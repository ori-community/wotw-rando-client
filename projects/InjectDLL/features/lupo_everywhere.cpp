#include <common.h>
#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <dev/dev_commands.h>

namespace
{
    BINDING(4383696, app::GameObject*, ActivateBasedOnCondition__get_EffectiveTarget, (app::ActivateBasedOnCondition* this_ptr));

    INTERCEPT(4383920, void, ActivateBasedOnCondition__Awake, (app::ActivateBasedOnCondition* this_ptr))
    {
        auto target = ActivateBasedOnCondition__get_EffectiveTarget(this_ptr);
        auto name = il2cpp::get_unity_object_name(target);
        // TODO: use visualizer and hide behind a dev switch.
        //dev::console_send("ActivateBasedOnCondition: " + name);
        if (name == "mapMakerSetup")
        {
            auto condition = il2cpp::create_object<app::Condition>("Moon.InteractionGraph", "AlwaysTrueCondition");
            if (condition != nullptr)
                this_ptr->fields.Condition = il2cpp::create_object<app::Condition_1>("Moon.InteractionGraph", "AlwaysTrueCondition");
            else
                trace(MessageType::Error, 2, "game", "Failed to create AlwaysTrueCondition to replace condition in map maker");
        }

        ActivateBasedOnCondition__Awake(this_ptr);
    }
}
