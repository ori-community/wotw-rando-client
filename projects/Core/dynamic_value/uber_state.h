#pragma once

#include <Common/registration_handle.h>

#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/dynamic_value/base.h>

namespace core::dynamic_value {
    template <typename T, bool CanSet, bool CanGet>
    struct DynamicValueContainer<T, CanSet, CanGet, true> {
        using value_helper = DynamicValueType<T, CanSet, CanGet>;
        using value_type = std::variant<
            std::shared_ptr<T>,
            api::uber_states::UberState,
            typename DynamicValueType<T, CanSet, CanGet>::value,
            T*>;

        [[nodiscard]] T get() const
            requires(CanGet);

        void set(T value)
            requires(CanSet);

        value_type value;
    };
} // namespace core::dynamic_value

#include <Core/dynamic_value/uber_state.inl>
