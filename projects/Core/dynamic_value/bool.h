#pragma once

#include <Common/registration_handle.h>

#include <Core/dynamic_value/base.h>
#include <Core/text/text_database.h>
#include <Core/text/text_processor.h>

namespace core::dynamic_value {
    template <bool CanSet, bool CanGet>
    struct DynamicValueContainer<bool, CanSet, CanGet, true> {
        using value_helper = DynamicValueType<bool, CanSet, CanGet>;
        using accessor = typename DynamicValueType<bool, CanSet, CanGet>::value;
        using value_type = std::variant<
            std::shared_ptr<bool>,
            api::uber_states::UberState,
            api::uber_states::UberStateCondition,
            set_get<bool>,
            bool*>;

        [[nodiscard]] bool get() const
            requires(CanGet);

        void set(bool value)
            requires(CanSet);

        value_type value;
    };
} // namespace core::dynamic_value

#include <Core/dynamic_value/bool.inl>
