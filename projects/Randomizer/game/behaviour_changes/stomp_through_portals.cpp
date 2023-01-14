#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <constants.h>

#include <Core/utils/misc.h>
#include <Modloader/app/methods/MeleeComboMoveHammerStomp.h>
#include <Modloader/app/methods/Portal.h>
#include <Modloader/app/methods/SeinController.h>
#include <Modloader/interception_macros.h>

using namespace modloader;

namespace {
    enum StompThroughPortalsState {
        None,
        HammerInterrupted,
        CarryVelocityThroughPortal,
    };

    StompThroughPortalsState state = None;
    app::Vector3 portal_speed;
    float stomp_speed = 60.f;

    IL2CPP_INTERCEPT(MeleeComboMoveHammerStomp, void, InterruptMove, (app::MeleeComboMoveHammerStomp * this_ptr)) {
        next::MeleeComboMoveHammerStomp::InterruptMove(this_ptr);
        stomp_speed = this_ptr->fields.Speed;
        state = HammerInterrupted;
    }

    core::api::uber_states::UberState stomp_through_portals(UberStateGroup::RandoConfig, 9);
    IL2CPP_INTERCEPT(SeinController, void, OnGoThroughPortal, (app::SeinController * this_ptr)) {
        next::SeinController::OnGoThroughPortal(this_ptr);
        if (state == HammerInterrupted && stomp_through_portals.get<bool>())
            state = CarryVelocityThroughPortal;
    }

    IL2CPP_INTERCEPT(SeinController, void, FixedUpdate, (app::SeinController * this_ptr)) {
        next::SeinController::FixedUpdate(this_ptr);

        if (state == CarryVelocityThroughPortal) {
            auto sein = core::api::game::player::sein();

            utils::clamp_vector(portal_speed, stomp_speed);
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
