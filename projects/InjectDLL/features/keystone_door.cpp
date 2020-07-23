#include <Il2CppModLoader/il2cpp_helpers.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/interception_macros.h>

namespace
{
    bool kwolok_door_available = true;

    //No it's not KeystoneDoor
    IL2CPP_INTERCEPT(, MoonDoorWithSlots, bool, get_SeinInRange, (app::MoonDoorWithSlots* this_ptr)) {
        //We could do something position based, but that would be actual work :>
        this_ptr->fields.m_opensOnLeftSide = 0;
        bool right = MoonDoorWithSlots::get_SeinInRange(this_ptr);
        this_ptr->fields.m_opensOnLeftSide = 1;
        bool left = MoonDoorWithSlots::get_SeinInRange(this_ptr);
        return right || left;
    }

    IL2CPP_INTERCEPT(, MoonCustomDoorWithSlots, bool, get_CanPlayerTriggerAutomatically, (app::MoonCustomDoorWithSlots* this_ptr)) {
        return false;
    }

    IL2CPP_INTERCEPT(, UberStateValueCondition, bool, Validate, (app::UberStateValueCondition* this_ptr, app::IContext* context)) {
        auto ref = this_ptr->fields.Descriptor;
        if (ref != nullptr &&
            il2cpp::invoke<app::Boolean__Boxed>(ref, "get_HasAReference")->fields &&
            il2cpp::invoke<app::Boolean__Boxed>(ref, "CanResolve", nullptr)->fields)
        {
            auto descriptor = il2cpp::invoke<app::IUberState>(ref, "Resolve", nullptr);

            auto state_id = uber_states::get_uber_state_id(descriptor);
            auto group_id = uber_states::get_uber_state_group_id(descriptor);
            if (group_id->fields.m_id == 21786 && (state_id->fields.m_id == 27433 || state_id->fields.m_id == 37225))
                return kwolok_door_available;
        }

        return UberStateValueCondition::Validate(this_ptr, context);
    }
}

INJECT_C_DLLEXPORT void set_kvolok_door_availability(bool value)
{
    kwolok_door_available = value;
}
