#pragma once

#include <Modloader/app/structs/BooleanUberState.h>
#include <Modloader/app/structs/ByteUberState.h>
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/CountUberState.h>
#include <Modloader/app/structs/FloatUberState.h>
#include <Modloader/app/structs/IntUberState.h>
#include <Modloader/app/structs/SavePedestalUberState.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SerializedFloatUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <nlohmann/json.hpp>

namespace core::api::uber_states {
    enum class UberStateType {
        BooleanUberState,
        ByteUberState,
        IntUberState,
        FloatUberState,
        SerializedBooleanUberState,
        SerializedByteUberState,
        SerializedIntUberState,
        SerializedFloatUberState,
        VirtualBooleanUberState,
        VirtualByteUberState,
        VirtualIntUberState,
        VirtualFloatUberState,
        ReadOnlyVirtualBooleanUberState,
        ReadOnlyVirtualByteUberState,
        ReadOnlyVirtualIntUberState,
        ReadOnlyVirtualFloatUberState,
        SavePedestalUberState,
        CountUberState,
        ConditionUberState,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        UberStateType,
        {
            {UberStateType::BooleanUberState,                "BooleanUberState"               },
            {UberStateType::ByteUberState,                   "ByteUberState"                  },
            {UberStateType::IntUberState,                    "IntUberState"                   },
            {UberStateType::FloatUberState,                  "FloatUberState"                 },
            {UberStateType::SerializedBooleanUberState,      "SerializedBooleanUberState"     },
            {UberStateType::SerializedByteUberState,         "SerializedByteUberState"        },
            {UberStateType::SerializedIntUberState,          "SerializedIntUberState"         },
            {UberStateType::SerializedFloatUberState,        "SerializedFloatUberState"       },
            {UberStateType::VirtualBooleanUberState,         "VirtualBooleanUberState"        },
            {UberStateType::VirtualByteUberState,            "VirtualByteUberState"           },
            {UberStateType::VirtualIntUberState,             "VirtualIntUberState"            },
            {UberStateType::VirtualFloatUberState,           "VirtualFloatUberState"          },
            {UberStateType::ReadOnlyVirtualBooleanUberState, "ReadOnlyVirtualBooleanUberState"},
            {UberStateType::ReadOnlyVirtualByteUberState,    "ReadOnlyVirtualByteUberState"   },
            {UberStateType::ReadOnlyVirtualIntUberState,     "ReadOnlyVirtualIntUberState"    },
            {UberStateType::ReadOnlyVirtualFloatUberState,   "ReadOnlyVirtualFloatUberState"  },
            {UberStateType::SavePedestalUberState,           "SavePedestalUberState"          },
            {UberStateType::CountUberState,                  "CountUberState"                 },
            {UberStateType::ConditionUberState,              "ConditionUberState"             },
        }
    );

    constexpr bool is_type_virtual(const UberStateType type) {
        return type == UberStateType::VirtualBooleanUberState ||
            type == UberStateType::VirtualByteUberState ||
            type == UberStateType::VirtualIntUberState ||
            type == UberStateType::VirtualFloatUberState ||
            type == UberStateType::ReadOnlyVirtualBooleanUberState ||
            type == UberStateType::ReadOnlyVirtualByteUberState ||
            type == UberStateType::ReadOnlyVirtualIntUberState ||
            type == UberStateType::ReadOnlyVirtualFloatUberState;
    }

    constexpr bool is_type_read_only(const UberStateType type) {
        return type == UberStateType::ReadOnlyVirtualBooleanUberState ||
            type == UberStateType::ReadOnlyVirtualByteUberState ||
            type == UberStateType::ReadOnlyVirtualIntUberState ||
            type == UberStateType::ReadOnlyVirtualFloatUberState ||
            type == UberStateType::CountUberState ||
            type == UberStateType::ConditionUberState;
    }

    struct UntypedUberId;

    template<UberStateType ID_TYPE>
    struct UberId {
        static constexpr auto TYPE = ID_TYPE;
        static constexpr auto IS_VIRTUAL = is_type_virtual(TYPE);
        static constexpr auto IS_READ_ONLY = is_type_read_only(TYPE);

        using value_t =
            std::conditional_t<
                ID_TYPE == UberStateType::BooleanUberState ||
                ID_TYPE == UberStateType::SerializedBooleanUberState ||
                ID_TYPE == UberStateType::VirtualBooleanUberState ||
                ID_TYPE == UberStateType::ReadOnlyVirtualBooleanUberState ||
                ID_TYPE == UberStateType::SavePedestalUberState ||
                ID_TYPE == UberStateType::ConditionUberState, bool,
            std::conditional_t<
                ID_TYPE == UberStateType::ByteUberState ||
                ID_TYPE == UberStateType::SerializedByteUberState ||
                ID_TYPE == UberStateType::VirtualByteUberState ||
                ID_TYPE == UberStateType::ReadOnlyVirtualByteUberState, std::uint8_t,
            std::conditional_t<
                ID_TYPE == UberStateType::IntUberState ||
                ID_TYPE == UberStateType::SerializedIntUberState ||
                ID_TYPE == UberStateType::VirtualIntUberState ||
                ID_TYPE == UberStateType::ReadOnlyVirtualIntUberState ||
                ID_TYPE == UberStateType::CountUberState, std::int32_t,
            std::conditional_t<
                ID_TYPE == UberStateType::FloatUberState ||
                ID_TYPE == UberStateType::SerializedFloatUberState ||
                ID_TYPE == UberStateType::VirtualFloatUberState ||
                ID_TYPE == UberStateType::ReadOnlyVirtualFloatUberState, float,
            void>>>>;

        using native_t =
            std::conditional_t<ID_TYPE == UberStateType::BooleanUberState, app::BooleanUberState,
            std::conditional_t<ID_TYPE == UberStateType::ByteUberState, app::ByteUberState,
            std::conditional_t<ID_TYPE == UberStateType::IntUberState, app::IntUberState,
            std::conditional_t<ID_TYPE == UberStateType::FloatUberState, app::FloatUberState,
            std::conditional_t<ID_TYPE == UberStateType::SerializedBooleanUberState, app::SerializedBooleanUberState,
            std::conditional_t<ID_TYPE == UberStateType::SerializedByteUberState, app::SerializedByteUberState,
            std::conditional_t<ID_TYPE == UberStateType::SerializedIntUberState, app::SerializedIntUberState,
            std::conditional_t<ID_TYPE == UberStateType::SerializedFloatUberState, app::SerializedFloatUberState,
            std::conditional_t<ID_TYPE == UberStateType::VirtualBooleanUberState, void,
            std::conditional_t<ID_TYPE == UberStateType::VirtualByteUberState, void,
            std::conditional_t<ID_TYPE == UberStateType::VirtualIntUberState, void,
            std::conditional_t<ID_TYPE == UberStateType::VirtualFloatUberState, void,
            std::conditional_t<ID_TYPE == UberStateType::ReadOnlyVirtualBooleanUberState, void,
            std::conditional_t<ID_TYPE == UberStateType::ReadOnlyVirtualByteUberState, void,
            std::conditional_t<ID_TYPE == UberStateType::ReadOnlyVirtualIntUberState, void,
            std::conditional_t<ID_TYPE == UberStateType::ReadOnlyVirtualFloatUberState, void,
            std::conditional_t<ID_TYPE == UberStateType::SavePedestalUberState, app::SavePedestalUberState,
            std::conditional_t<ID_TYPE == UberStateType::CountUberState, app::CountUberState,
            std::conditional_t<ID_TYPE == UberStateType::ConditionUberState, app::ConditionUberState,
            void>>>>>>>>>>>>>>>>>>>;

        int group;
        int member;

        friend bool operator==(const UberId& lhs, const UberId& rhs) { return lhs.group == rhs.group && lhs.member == rhs.member; }
        friend bool operator!=(const UberId& lhs, const UberId& rhs) { return !(lhs == rhs); }

        NLOHMANN_DEFINE_TYPE_INTRUSIVE(
            UberId,
            group,
            member
        );
    };

    struct UntypedUberId {
        int group;
        int member;

        UntypedUberId() : group(0), member(0) {}
        UntypedUberId(const int group, const int member) :
            group(group),
            member(member) {}

        template<const UberStateType ID_TYPE>
        UntypedUberId(const UberId<ID_TYPE>& id) : group(id.group), member(id.member) {}

        friend bool operator==(const UntypedUberId& lhs, const UntypedUberId& rhs) { return lhs.group == rhs.group && lhs.member == rhs.member; }
        friend bool operator!=(const UntypedUberId& lhs, const UntypedUberId& rhs) { return !(lhs == rhs); }

        NLOHMANN_DEFINE_TYPE_INTRUSIVE(
            UntypedUberId,
            group,
            member
        );
    };

    struct MoonUberId {
        app::UberID group;
        app::UberID member;

        MoonUberId(const app::UberID& group, const app::UberID& member) :
            group(group),
            member(member) {}
    };
}

template <core::api::uber_states::UberStateType ID_TYPE>
struct std::hash<core::api::uber_states::UberId<ID_TYPE>> {
    std::size_t operator()(const core::api::uber_states::UberId<ID_TYPE>& s) const noexcept {
        return hash<int>()(s.group) ^ (hash<int>()(s.member) << 1);
    }
};

template<>
struct std::hash<core::api::uber_states::UntypedUberId> {
    std::size_t operator()(const core::api::uber_states::UntypedUberId& s) const noexcept {
        return hash<int>()(s.group) ^ (hash<int>()(s.member) << 1);
    }
};

template <core::api::uber_states::UberStateType ID_TYPE>
struct std::formatter<core::api::uber_states::UberId<ID_TYPE>> {
    constexpr auto parse(std::format_parse_context& ctx) {
        return ctx.begin();
    }

    auto format(const core::api::uber_states::UberId<ID_TYPE>& state_id, std::format_context& ctx) const {
        return std::format_to(ctx.out(), "{}|{}", state_id.group, state_id.member);
    }
};

template <>
struct std::formatter<core::api::uber_states::UntypedUberId> {
    constexpr auto parse(std::format_parse_context& ctx) {
        return ctx.begin();
    }

    auto format(const core::api::uber_states::UntypedUberId& state_id, std::format_context& ctx) const {
        return std::format_to(ctx.out(), "{}|{}", state_id.group, state_id.member);
    }
};
