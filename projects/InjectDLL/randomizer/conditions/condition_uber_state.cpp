#include <randomizer/conditions/condition_uber_state.h>

#include <Common/ext.h>

#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>

namespace randomizer
{
    namespace conditions
    {
        namespace
        {
            std::unordered_map<std::pair<UberStateGroup, int>, condition_uber_state_intercept, pair_hash> intercepts;

            IL2CPP_INTERCEPT(Moon, ConditionUberState, bool, EvaluateConditions, (app::ConditionUberState* this_ptr)) {
                auto group = static_cast<UberStateGroup>(this_ptr->fields.Group->fields._.m_id->fields.m_id);
                auto it = intercepts.find(std::make_pair(group, this_ptr->fields._.m_id->fields.m_id));
                if (it != intercepts.end())
                {
                    auto out = it->second(this_ptr);
                    if (out.has_value())
                        return out.value();
                }

                return EvaluateConditions(this_ptr);
            }
        }

        void register_condition_uber_state_intercept(uber_states::UberState state, condition_uber_state_intercept intercept)
        {
            intercepts[std::make_pair(state.group(), state.state())] = intercept;
        }
    }
}
