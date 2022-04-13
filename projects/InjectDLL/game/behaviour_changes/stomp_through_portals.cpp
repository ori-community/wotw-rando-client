#include <constants.h>
#include <game/player.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace
{
    int landing_state = 0;
    app::Vector3 portal_speed;
    app::MeleeComboMoveHammerStomp* stomp = nullptr;
    IL2CPP_INTERCEPT(, MeleeComboMoveHammerStomp, void, InterruptMove, (app::MeleeComboMoveHammerStomp* this_ptr)) {
        MeleeComboMoveHammerStomp::InterruptMove(this_ptr);
        stomp = this_ptr;
        landing_state = 1;
    }

    IL2CPP_INTERCEPT(, SeinController, void, OnGoThroughPortal, (app::SeinController* this_ptr)) {
        SeinController::OnGoThroughPortal(this_ptr);
        auto sein = game::player::sein();
        if (landing_state == 1 && uber_states::get_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, STOMP_THROUGH_PORTALS_ID) > 0.5)
            landing_state = 2;
    }

    IL2CPP_INTERCEPT(, SeinController, void, FixedUpdate, (app::SeinController* this_ptr)) {
        SeinController::FixedUpdate(this_ptr);
        if (landing_state == 2)
        {
            auto sein = game::player::sein();
            sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed = portal_speed;
        }

        landing_state = 0;
    }

    IL2CPP_INTERCEPT_OVERLOAD(, Portal, app::Vector3*, CalculateEndSpeed,
        (app::Vector3* return_ptr, app::Portal* this_ptr, app::Portal* other, app::Vector3 speed),
        (Portal, UnityEngine:Vector3))
    {
        auto output = Portal::CalculateEndSpeed(return_ptr, this_ptr, other, speed);
        portal_speed = *output;
        return output;
    }
}
