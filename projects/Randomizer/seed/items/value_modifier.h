#pragma once

#include <Core/dynamic_value.h>

#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {

    enum class ValueOperator {
        Assign,
        Add,
        Sub,
    };

    template <typename T, ValueOperator>
    class ValueModifier;

    template <typename T>
    class ValueModifier<T, ValueOperator::Assign> final : public BaseItem {
    public:
        using value_type = core::DynamicValue<T>;
        value_type variable;
        value_type value;

        void grant() final {
            const auto actual_value = value.get();
            variable.set(actual_value);
        }
    };

    template <typename T>
    class ValueModifier<T, ValueOperator::Add> final : public BaseItem {
    public:
        using value_type = core::DynamicValue<T>;
        value_type variable;
        value_type value;

        void grant() final {
            const auto actual_value = value.get();
            variable.add(actual_value);
        }
    };

    template <typename T>
    class ValueModifier<T, ValueOperator::Sub> final : public BaseItem {
    public:
        using value_type = core::DynamicValue<T>;
        value_type variable;
        value_type value;

        void grant() final {
            const auto actual_value = -value.get();
            variable.add(actual_value);
        }
    };
} // namespace randomizer::seed::items
