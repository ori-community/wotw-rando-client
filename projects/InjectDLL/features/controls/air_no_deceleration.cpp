#include <constants.h>
#include <uber_states/uber_state_interface.h>

#include <Common/ext.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

extern void handle_launch_no_deceleration(app::CharacterAirNoDeceleration* this_ptr);

namespace {
    bool toggle_default = false;
    uber_states::UberState air_no_deceleration(UberStateGroup::RandoConfig, FORCE_AIR_NO_DECELERATION_ID);
    IL2CPP_INTERCEPT(, CharacterAirNoDeceleration, void, UpdateCharacterState, (app::CharacterAirNoDeceleration * this_ptr)) {
        if (toggle_default) {
            CharacterAirNoDeceleration::UpdateCharacterState(this_ptr);
            return;
        }

        auto platform_movement = this_ptr->fields.PlatformBehaviour->fields.PlatformMovement;
        if (!il2cpp::invoke<app::Boolean__Boxed>(platform_movement, "get_IsSuspended")->fields) {
            if (il2cpp::invoke<app::Boolean__Boxed>(platform_movement, "get_IsOnGround")->fields)
                this_ptr->fields.m_noDeceleration = false;

            if (0.0f <= il2cpp::invoke<app::Single__Boxed>(platform_movement, "get_LocalSpeedY")->fields && platform_movement->fields._.Ceiling->fields.IsOn)
                this_ptr->fields.m_noDeceleration = false;

            handle_launch_no_deceleration(this_ptr);

            auto value = air_no_deceleration.get();
            if (value > 0.5)
                this_ptr->fields.m_noDeceleration = value < 1.5;
        }
    }
} // namespace