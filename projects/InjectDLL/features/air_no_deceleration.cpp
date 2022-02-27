#include <Common/ext.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

namespace
{
    bool toggle_default = false;
    constexpr int FORCE_DECELERATION = 300;
    IL2CPP_INTERCEPT(, CharacterAirNoDeceleration, void, UpdateCharacterState, (app::CharacterAirNoDeceleration* this_ptr)) {
        if (toggle_default)
        {
            CharacterAirNoDeceleration::UpdateCharacterState(this_ptr);
            return;
        }

        auto platform_movement = this_ptr->fields.PlatformBehaviour->fields.PlatformMovement;
        if (!il2cpp::invoke<app::Boolean__Boxed>(platform_movement, "get_IsSuspended")->fields)
        {
            if (il2cpp::invoke<app::Boolean__Boxed>(platform_movement, "get_IsOnGround")->fields)
                this_ptr->fields.m_noDeceleration = false;

            if (0.0f <= il2cpp::invoke<app::Single__Boxed>(platform_movement, "get_LocalSpeedY")->fields
                && platform_movement->fields._.Ceiling->fields.IsOn)
                this_ptr->fields.m_noDeceleration = false;

            auto left_right_movement = this_ptr->fields.PlatformBehaviour->fields.LeftRightMovement;
            if (!left_right_movement->fields.m_settings->fields.LockInput && !eps_equals(left_right_movement->fields.m_horizontalInput, 0.0f))
                this_ptr->fields.m_noDeceleration = false;

            auto value = uber_states::get_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, FORCE_DECELERATION);
            if (value > 0.5)
                this_ptr->fields.m_noDeceleration = value < 1.5;
        }
    }
}