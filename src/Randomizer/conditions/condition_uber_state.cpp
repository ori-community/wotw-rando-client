#include <Randomizer/conditions/condition_uber_state.h>

#include <Common/ext.h>

#include <Modloader/app/methods/Moon/ConditionUberState.h>
#include <Modloader/interception_macros.h>

#include <unordered_map>

namespace randomizer::conditions {
    namespace {
        std::unordered_map<core::api::uber_states::UberId<core::api::uber_states::UberStateType::ConditionUberState>, condition_uber_state_intercept_t> intercepts;

        IL2CPP_INTERCEPT(bool, Moon::ConditionUberState, EvaluateConditions, app::ConditionUberState * this_ptr) {
            const auto group_id = this_ptr->fields.Group->fields._.m_id->fields.m_id;
            const auto member_id = this_ptr->fields._.m_id->fields.m_id;
            const auto it = intercepts.find({group_id, member_id});
            if (it != intercepts.end()) {
                const auto out = it->second(this_ptr);
                if (out.has_value()) {
                    return out.value();
                }
            }

            return next::Moon::ConditionUberState::EvaluateConditions(this_ptr);
        }
    } // namespace

    void register_condition_uber_state_intercept(
        core::api::uber_states::UberId<core::api::uber_states::UberStateType::ConditionUberState> state_id,
        const condition_uber_state_intercept_t intercept
    ) {
        intercepts[state_id] = intercept;
    }
} // namespace randomizer::conditions
