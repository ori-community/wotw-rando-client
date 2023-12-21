#include <Core/api/uber_states/uber_state.h>
#include <Core/input/input_lock.h>
#include <Modloader/app/methods/RestrictAbilityController.h>
#include <Modloader/app/structs/SeinAbilityRestrictZoneMask__Enum.h>
#include <Modloader/interception_macros.h>
#include <unordered_set>

using namespace app::classes;

namespace core::input {
    namespace {
        uint32_t next_id = 0;
        std::unordered_set<uint32_t> locks;
        api::uber_states::UberState lock_state(UberStateGroup::Player, 1000);

        IL2CPP_INTERCEPT(RestrictAbilityController, bool, IsRestricted_1, (app::SeinAbilityRestrictZoneMask__Enum restrict_masks)) {
            if (lock_state.get<bool>() || !locks.empty()) {
                return true;
            }

            return next::RestrictAbilityController::IsRestricted_1(restrict_masks);
        }

        IL2CPP_INTERCEPT(RestrictAbilityController, bool, IsRestricted_2, (
            app::SeinAbilityRestrictZoneMask__Enum current_mask,
            app::SeinAbilityRestrictZoneMask__Enum restrict_masks)) {
            if (lock_state.get<bool>() || !locks.empty()) {
                return true;
            }

            return next::RestrictAbilityController::IsRestricted_2(current_mask, restrict_masks);
        }

        IL2CPP_INTERCEPT(RestrictAbilityController, bool, IsRestricted_3, (app::AbilityType__Enum ability, app::SeinAbilityRestrictZoneMask__Enum restrict_mask)) {
            if (lock_state.get<bool>() || !locks.empty()) {
                return true;
            }

            return next::RestrictAbilityController::IsRestricted_3(ability, restrict_mask);
        }

        IL2CPP_INTERCEPT(RestrictAbilityController, bool, IsRestricted_4, (
            app::SeinAbilityRestrictZoneMask__Enum current_mask,
            app::AbilityType__Enum ability,
            app::SeinAbilityRestrictZoneMask__Enum restrict_masks)) {
            if (lock_state.get<bool>() || !locks.empty()) {
                return true;
            }

            return next::RestrictAbilityController::IsRestricted_4(current_mask, ability, restrict_masks);
        }

        IL2CPP_INTERCEPT(RestrictAbilityController, bool, IsRestricted_5, (app::Input_Command__Enum button, app::SeinAbilityRestrictZoneMask__Enum restrict_mask)) {
            if (lock_state.get<bool>() || !locks.empty()) {
                return true;
            }

            return next::RestrictAbilityController::IsRestricted_5(button, restrict_mask);
        }
    }

    common::registration_handle_t scoped_input_lock() {
        auto id = next_id++;
        locks.emplace(id);
        return std::make_unique<common::RegistrationHandle>([id]{ locks.erase(id); });
    }
} // namespace core::input
