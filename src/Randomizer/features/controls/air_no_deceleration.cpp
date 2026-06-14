#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/constants.h>

#include <Common/ext.h>

#include <Modloader/app/methods/CharacterAirNoDeceleration.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/app/structs/Single__Boxed.h>

extern void handle_launch_no_deceleration(app::CharacterAirNoDeceleration* this_ptr);

using namespace app::classes;

namespace {
    bool toggle_default = false;
    core::api::uber_states::UberState air_no_deceleration(UberStateGroup::RandoConfig, FORCE_AIR_NO_DECELERATION_ID);
    IL2CPP_INTERCEPT(void, CharacterAirNoDeceleration, UpdateCharacterState, app::CharacterAirNoDeceleration * this_ptr) {
        if (toggle_default) {
            next::CharacterAirNoDeceleration::UpdateCharacterState(this_ptr);
            return;
        }

        auto platform_movement = this_ptr->fields.PlatformBehaviour->fields.PlatformMovement;
        if (!il2cpp::invoke<app::Boolean__Boxed>(platform_movement, "get_IsSuspended")->fields) {
            if (il2cpp::invoke<app::Boolean__Boxed>(platform_movement, "get_IsOnGround")->fields) {
                this_ptr->fields.m_noDeceleration = false;
            }

            if (0.0f <= il2cpp::invoke<app::Single__Boxed>(platform_movement, "get_LocalSpeedY")->fields && platform_movement->fields._.Ceiling->fields.IsOn) {
                this_ptr->fields.m_noDeceleration = false;
            }

            handle_launch_no_deceleration(this_ptr);

            auto value = air_no_deceleration.get();
            if (value > 0.5) {
                this_ptr->fields.m_noDeceleration = value < 1.5;
            }
        }
    }
} // namespace