#pragma once

#include <Core/api/uber_states/uber_state.h>
#include <Core/macros.h>
#include <Modloader/modloader.h>


namespace core::uber_states {
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
    template <const StringLiteralOrInteger GROUP_ID, const StringLiteralOrInteger MEMBER_ID>
    auto& state();

    // https://stackoverflow.com/a/1489985/3691378
    #undef STATE_FUNCTION_NAME_BUILDER
    #define STATE_FUNCTION_NAME_BUILDER(group_id, member_id) __state_##group_id##_##member_id
    #undef STATE_FUNCTION_NAME
    #define STATE_FUNCTION_NAME(group_id, member_id) STATE_FUNCTION_NAME_BUILDER(group_id, member_id)

    #undef DEFINE_STATE
    #define DEFINE_STATE(member_id, type, default_value)                                                                                                       \
    CORE_DLLEXPORT core::api::uber_states::StaticUberState<core::api::uber_states::UberId<core::api::uber_states::UberStateType::type>(GROUP_ID, member_id)>& STATE_FUNCTION_NAME(GROUP_ID, member_id)();\
    template<>                                                                                                                                                 \
    inline auto& state<GROUP_ID, member_id>() { return STATE_FUNCTION_NAME(GROUP_ID, member_id)(); }                                                           \
    template<>                                                                                                                                                 \
    inline auto& state<GROUP_NAME, member_id>() { return STATE_FUNCTION_NAME(GROUP_ID, member_id)(); }

    #undef DEFINE_NAMED_STATE
    #define DEFINE_NAMED_STATE(member_id, member_name, type, default_value) DEFINE_STATE(member_id, type, default_value)

    #include "core_uber_states.inc"

    #undef DEFINE_NAMED_STATE
    #define DEFINE_NAMED_STATE(member_id, member_name, type, default_value)                                                                                    \
    template<>                                                                                                                                                 \
    inline auto& state<GROUP_ID, member_name>() { return STATE_FUNCTION_NAME(GROUP_ID, member_id)(); }                                                         \
    template<>                                                                                                                                                 \
    inline auto& state<GROUP_NAME, member_name>() { return STATE_FUNCTION_NAME(GROUP_ID, member_id)(); }

    #undef DEFINE_STATE
    #define DEFINE_STATE(member_id, type, default_value)

    #include "core_uber_states.inc"
} // namespace randomizer::uber_states
