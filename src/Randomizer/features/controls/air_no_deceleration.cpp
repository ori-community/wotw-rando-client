#include <Common/ext.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/CharacterAirNoDeceleration.h>
#include <Modloader/app/methods/CharacterPlatformMovement.h>
#include <Modloader/app/methods/Game/UI.h>
#include <Modloader/app/methods/PlatformMovement.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


extern void handle_launch_no_deceleration(app::CharacterAirNoDeceleration* this_ptr);

using namespace app::classes;

namespace {
    auto& air_no_deceleration_state = randomizer::uber_states::state<"randoConfig", "forceNoAirDecelerationFlag">();

    constexpr auto NO_AIR_DECELERATION_DURATION = 0.2f;
    constexpr auto NO_AIR_DECELERATION_RESET_DURATION = 0.2f;
    auto aim_timer = 0.0f;
    auto reset_timer = 0.0f;

    bool in_menu() {
        return types::UI::get_class()->static_fields->m_sMenu->fields.m_equipmentWhellVisible || Game::UI::get_MainMenuVisible() || Game::UI::get_WorldMapVisible() || Game::UI::get_ShardShopVisible() || Game::UI::IsInventoryVisible();
    }

    bool is_aiming_launch(app::CharacterAirNoDeceleration* this_ptr) {
        if (!in_menu()) {
            if (aim_timer >= 0.0f)
                aim_timer -= TimeUtility::get_deltaTime();
            if (reset_timer >= 0.0f)
                reset_timer -= TimeUtility::get_deltaTime();
        }

        auto* sein = core::api::game::player::sein();
        auto* wrapper = sein->fields.Abilities->fields.ChargeJumpWrapper;
        if (wrapper->fields.HasState && wrapper->fields.State->fields.m_state == app::SeinChargeJump_State__Enum::Aiming) {
            aim_timer = NO_AIR_DECELERATION_DURATION;
            if (reset_timer > 0.0f)
                this_ptr->fields.m_noDeceleration = true;
        }

        return aim_timer > 0.0f;
    }

    IL2CPP_INTERCEPT(void, CharacterAirNoDeceleration, UpdateCharacterState, app::CharacterAirNoDeceleration * this_ptr) {
        auto platform_movement = this_ptr->fields.PlatformBehaviour->fields.PlatformMovement;

        if (!CharacterPlatformMovement::get_IsSuspended(platform_movement)) {
            if (PlatformMovement::get_IsOnGround(reinterpret_cast<app::PlatformMovement*>(platform_movement))) {
                this_ptr->fields.m_noDeceleration = false;
            }

            if (
                0.0f <= PlatformMovement::get_LocalSpeedY(reinterpret_cast<app::PlatformMovement*>(platform_movement)) &&
                platform_movement->fields._.Ceiling->fields.IsOn
            ) {
                this_ptr->fields.m_noDeceleration = false;
            }

            // Prevent launch aiming from resetting the no-deceleration flag
            if (
                const auto left_right_movement = this_ptr->fields.PlatformBehaviour->fields.LeftRightMovement;
                !left_right_movement->fields.m_settings->fields.LockInput &&
                !is_aiming_launch(this_ptr) &&
                !eps_equals(left_right_movement->fields.m_horizontalInput, 0.0f)
            ) {
                if (this_ptr->fields.m_noDeceleration) {
                    reset_timer = NO_AIR_DECELERATION_RESET_DURATION;
                }

                this_ptr->fields.m_noDeceleration = false;
            }

            if (air_no_deceleration_state.get()) {
                this_ptr->fields.m_noDeceleration = true;
            }
        }
    }
} // namespace
