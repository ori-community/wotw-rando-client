#include <Core/uber_states/core_uber_states.h>

namespace core::uber_states {
    #undef DEFINE_STATE
    #define DEFINE_STATE(member_id, type, default_value)                                                                                                       \
        core::api::uber_states::StaticUberState<core::api::uber_states::UberId<core::api::uber_states::UberStateType::type>(GROUP_ID, member_id)>& STATE_FUNCTION_NAME(GROUP_ID, member_id)() {                                                       \
            static auto state = core::api::uber_states::StaticUberState<                                                                                        \
                core::api::uber_states::UberId<core::api::uber_states::UberStateType::type>(GROUP_ID, member_id)>();                                           \
            return state;                                                                                                                                      \
        }

    #undef DEFINE_NAMED_STATE
    #define DEFINE_NAMED_STATE(member_id, member_name, type, default_value) DEFINE_STATE(member_id, type, default_value)

    #include "core_uber_states.inc"
} // namespace randomizer::uber_states
