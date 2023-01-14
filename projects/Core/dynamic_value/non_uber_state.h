#pragma once

#include <Common/registration_handle.h>

#include <Core/dynamic_value/base.h>

namespace core::dynamic_value {
    template <typename T, bool CanSet, bool CanGet>
    struct DynamicValueContainer<T, CanSet, CanGet, false> {
        using value_helper = DynamicValueType<T, CanSet, CanGet>;
        using value_type = std::variant<
            std::shared_ptr<T>,
            typename DynamicValueType<T, CanSet, CanGet>::value,
            T*>;

        [[nodiscard]] T get() const
            requires(CanGet);

        void set(T value)
            requires(CanSet);

        value_type value;
    };
} // namespace core::dynamic_value

#include <Core/dynamic_value/non_uber_state.inl>
