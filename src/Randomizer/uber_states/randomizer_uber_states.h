#pragma once

#include <Core/property.h>
#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/macros.h>


namespace randomizer::uber_states {
    template<size_t N = 0>
    struct StringLiteralOrInteger {
        constexpr StringLiteralOrInteger(const char (&str)[N]) {
            std::copy_n(str, N, value);
        }
        constexpr StringLiteralOrInteger(const int id) : id(id) {}

        int id{};
        char value[N]{};
    };

    #undef GROUP_ID
    #undef GROUP_NAME
    template <const StringLiteralOrInteger GROUP_ID>
    consteval int group_id() {
        static_assert(false, "Uber Group does not exist");
        return 0;
    }

    template <const StringLiteralOrInteger GROUP_ID, const StringLiteralOrInteger MEMBER_ID>
    auto& state();

    // https://stackoverflow.com/a/1489985/3691378
    #undef STATE_FUNCTION_NAME_BUILDER
    #define STATE_FUNCTION_NAME_BUILDER(group_id, member_id) __state_##group_id##_##member_id
    #undef STATE_FUNCTION_NAME
    #define STATE_FUNCTION_NAME(group_id, member_id) STATE_FUNCTION_NAME_BUILDER(group_id, member_id)

    #undef DEFINE_NAMED_STATE
    #define DEFINE_NAMED_STATE(member_id, member_name, type, default_value)                                                                                    \
    RANDOMIZER_DLLEXPORT core::api::uber_states::StaticUberState<core::api::uber_states::UberId<core::api::uber_states::UberStateType::type>(GROUP_ID, member_id)>& STATE_FUNCTION_NAME(GROUP_ID, member_id)();\
    template<>                                                                                                                                                 \
    inline auto& state<GROUP_ID, member_id>() { return STATE_FUNCTION_NAME(GROUP_ID, member_id)(); }                                                           \
    template<>                                                                                                                                                 \
    inline auto& state<GROUP_NAME, member_id>() { return STATE_FUNCTION_NAME(GROUP_ID, member_id)(); }                                                         \
    template<>                                                                                                                                                 \
    inline auto& state<GROUP_ID, member_name>() { return STATE_FUNCTION_NAME(GROUP_ID, member_id)(); }                                                         \
    template<>                                                                                                                                                 \
    inline auto& state<GROUP_NAME, member_name>() { return STATE_FUNCTION_NAME(GROUP_ID, member_id)(); }

    #undef DEFINE_NAMED_VIRTUAL_STATE
    #define DEFINE_NAMED_VIRTUAL_STATE(member_id, member_name, type) DEFINE_NAMED_STATE(member_id, member_name, type, nullptr)

    #undef REGISTER_GROUP
    #define REGISTER_GROUP                                                                                                                                     \
        template<>                                                                                                                                             \
        inline consteval int group_id<GROUP_NAME>() { return GROUP_ID; }
    #undef REGISTER_STATES_AT_RUNTIME
    #define REGISTER_STATES_AT_RUNTIME

    #include "randomizer_uber_states.inc"

    namespace properties {
        core::Property<int>& player_current_map_area();
        core::Property<bool>& player_is_teleporting();
    }
} // namespace randomizer::uber_states
