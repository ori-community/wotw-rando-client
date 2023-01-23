#include <Modloader/il2cpp_helpers.h>
#include <Core/uber_states/uber_state_interface.h>

#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/SeinLogicCycle.h>
#include <Modloader/app/methods/MoonDoorWithSlots.h>
#include <Modloader/app/methods/MoonCustomDoorWithSlots.h>
#include <Modloader/app/methods/UberStateValueCondition.h>
#include <Modloader/app/structs/Boolean__Boxed.h>

using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(SeinLogicCycle, bool, get_AllowInteraction, (app::SeinLogicCycle * this_ptr)) {
        // Override this for the keystone door in wastes.
        if (SeinLogicCycle::GetFlags(this_ptr, app::SeinLogicCycle_StateFlags__Enum::IsDigging) != app::SeinLogicCycle_StateFlags__Enum::Clear)
            return true;

        return next::SeinLogicCycle::get_AllowInteraction(this_ptr);
    }

    // No it's not KeystoneDoor
    IL2CPP_INTERCEPT(MoonDoorWithSlots, bool, get_SeinInRange, (app::MoonDoorWithSlots * this_ptr)) {
        // We could do something position based, but that would be actual work :>
        this_ptr->fields.m_opensOnLeftSide = false;
        bool right = next::MoonDoorWithSlots::get_SeinInRange(this_ptr);
        this_ptr->fields.m_opensOnLeftSide = true;
        bool left = next::MoonDoorWithSlots::get_SeinInRange(this_ptr);
        return right || left;
    }

    IL2CPP_INTERCEPT(MoonCustomDoorWithSlots, bool, get_CanPlayerTriggerAutomatically, (app::MoonCustomDoorWithSlots * this_ptr)) {
        return false;
    }

    // TODO: Use condition framework instead.
    uber_states::UberState kwolok_door_available(UberStateGroup::RandoConfig, 6);
    IL2CPP_INTERCEPT(UberStateValueCondition, bool, Validate, (app::UberStateValueCondition * this_ptr, app::IContext* context)) {
        auto ref = this_ptr->fields.Descriptor;
        if (ref != nullptr &&
            il2cpp::invoke<app::Boolean__Boxed>(ref, "get_HasAReference")->fields &&
            il2cpp::invoke<app::Boolean__Boxed>(ref, "CanResolve", 0)->fields) {
            auto descriptor = il2cpp::invoke<app::IUberState>(ref, "Resolve", 0);
            uber_states::UberState state(descriptor);
            if (state.group() == static_cast<UberStateGroup>(21786) && (state.state() == 27433 || state.state() == 37225))
                return kwolok_door_available.get<bool>();
        }

        return next::UberStateValueCondition::Validate(this_ptr, context);
    }
} // namespace
