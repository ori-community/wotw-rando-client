#include <common.h>
#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <dev/dev_commands.h>

namespace
{
    BINDING(37030288, System_String_o*, UnityEngine_Object__get_name, (UnityEngine_Object_o* this_ptr));
    BINDING(4383696, UnityEngine_GameObject_o*, ActivateBasedOnCondition__get_EffectiveTarget, (ActivateBasedOnCondition_o* this_ptr));

    INTERCEPT(4383920, void, ActivateBasedOnCondition__Awake, (ActivateBasedOnCondition_o* this_ptr))
    {
        auto target = ActivateBasedOnCondition__get_EffectiveTarget(this_ptr);
        auto csname = UnityEngine_Object__get_name(reinterpret_cast<UnityEngine_Object_o*>(target));
        auto name = convert_csstring(csname);
        if (name == "mapMakerSetup")
        {
            auto condition = il2cpp::create_object_t<Condition_o>("Moon.InteractionGraph", "AlwaysTrueCondition");
            if (condition != nullptr)
                this_ptr->Condition = il2cpp::create_object_t<Condition_o>("Moon.InteractionGraph", "AlwaysTrueCondition");
            else
                trace(MessageType::Error, 2, "game", "Failed to create AlwaysTrueCondition to replace condition in map maker");
        }

        ActivateBasedOnCondition__Awake(this_ptr);
    }
}
