#pragma once

#include <Common/registration_handle.h>

#include <Core/dynamic_value/base.h>
#include <Core/text/text_database.h>
#include <Core/text/text_processor.h>

namespace core::dynamic_value {
    template <bool CanSet, bool CanGet>
    struct DynamicValueContainer<std::string, CanSet, CanGet, false> {
        using value_helper = DynamicValueType<std::string, CanSet, CanGet>;
        using accessor = typename DynamicValueType<std::string, CanSet, CanGet>::value;
        using value_type = std::variant<
            std::shared_ptr<std::string>,
            accessor,
            std::string*,
            core::text_id>;

        [[nodiscard]] std::string get() const
            requires(CanGet);

        void set(std::string v)
            requires(CanSet);

        value_type value;
        std::shared_ptr<text::ITextProcessor> text_processor;
    };
} // namespace core::dynamic_value

#include <Core/dynamic_value/string.inl>
