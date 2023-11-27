#pragma once

#include <Core/dynamic_value.h>

#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {

    extern bool prevent_grants_on_value_modify;

    enum class ValueOperator {
        Assign,
        Add,
        Sub,
    };

    template<typename T, ValueOperator>
    class ValueModifier;

    template<typename T>
    class ValueModifier<T, ValueOperator::Assign> final : public BaseItem {
    public:
        using value_type = core::DynamicValue<T>;
        value_type variable;
        value_type value;
        bool should_skip_grants = false;

        void grant() final {
            const auto actual_value = value.get();
            if (should_skip_grants) {
                prevent_grants_on_value_modify = true;
            }

            variable.set(actual_value);
            prevent_grants_on_value_modify = false;
        }

        std::string to_string() const override {
            return std::format(
                "{} set to {}{}",
                core::dv_to_string<T>(variable),
                core::dv_to_string<T>(value),
                should_skip_grants ? " skips grant" : ""
            );
        }
    };

    template<typename T>
    class ValueModifier<T, ValueOperator::Add> final : public BaseItem {
    public:
        using value_type = core::DynamicValue<T>;
        value_type variable;
        value_type value;
        bool should_skip_grants = false;

        void grant() final {
            const auto actual_value = value.get();
            if (should_skip_grants) {
                prevent_grants_on_value_modify = true;
            }

            variable.add(actual_value);
            prevent_grants_on_value_modify = false;
        }

        std::string to_string() const override {
            return std::format(
                "{} add {}{}",
                core::dv_to_string<T>(variable),
                core::dv_to_string<T>(value),
                should_skip_grants ? " skips grant" : ""
            );
        }
    };

    template<typename T>
    class ValueModifier<T, ValueOperator::Sub> final : public BaseItem {
    public:
        using value_type = core::DynamicValue<T>;
        value_type variable;
        value_type value;
        bool should_skip_grants = false;

        void grant() override {
            const auto actual_value = -value.get();
            if (should_skip_grants) {
                prevent_grants_on_value_modify = true;
            }

            variable.add(actual_value);
            prevent_grants_on_value_modify = false;
        }

        std::string to_string() const override {
            return std::format(
                "{} subtract {}{}",
                core::dv_to_string<T>(variable),
                core::dv_to_string<T>(value),
                should_skip_grants ? " skips grant" : ""
            );
        }
    };
} // namespace randomizer::seed::items
