#include <constants.h>
#include <game/player.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/app/methods/MeleeComboMoveHammerStomp.h>
#include <Il2CppModLoader/app/methods/Portal.h>
#include <Il2CppModLoader/app/methods/SeinController.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace {
    enum StompThroughPortalsState {
        None,
        HammerInterrupted,
        CarryVelocityThroughPortal,
    };

    StompThroughPortalsState state = None;
    app::Vector3 portal_speed;

    IL2CPP_INTERCEPT(MeleeComboMoveHammerStomp, void, OnHitWater, (app::MeleeComboMoveHammerStomp * this_ptr)) {
        next::MeleeComboMoveHammerStomp::OnHitWater(this_ptr);

        if (this_ptr->fields.m_currentState == app::MeleeComboMoveHammerStomp_State__Enum::Fall) {
            game::player::set_velocity(0.f, -this_ptr->fields.Speed);
        }
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammerStomp, void, InterruptMove, (app::MeleeComboMoveHammerStomp * this_ptr)) {
        next::MeleeComboMoveHammerStomp::InterruptMove(this_ptr);
        state = HammerInterrupted;
    }

    uber_states::UberState stomp_through_portals(UberStateGroup::RandoConfig, 9);
    IL2CPP_INTERCEPT(SeinController, void, OnGoThroughPortal, (app::SeinController * this_ptr)) {
        next::SeinController::OnGoThroughPortal(this_ptr);
        if (state == HammerInterrupted && stomp_through_portals.get<bool>())
            state = CarryVelocityThroughPortal;
    }

    IL2CPP_INTERCEPT(SeinController, void, FixedUpdate, (app::SeinController * this_ptr)) {
        next::SeinController::FixedUpdate(this_ptr);
        if (state == CarryVelocityThroughPortal) {
            auto sein = game::player::sein();
            sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed = portal_speed;
        }

        state = None;
    }

    IL2CPP_INTERCEPT(Portal, app::Vector3, CalculateEndSpeed_1, (app::Portal * this_ptr, app::Portal* other, app::Vector3 speed)) {
        auto output = next::Portal::CalculateEndSpeed_1(this_ptr, other, speed);
        portal_speed = output;
        return output;
    }
} // namespace
