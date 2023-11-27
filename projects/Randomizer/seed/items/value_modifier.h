#pragma once

#include <Core/property.h>

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
        using value_type = core::Property<T>;
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
                variable.to_string(),
                value.to_string(),
                should_skip_grants ? " skips grant" : ""
            );
        }
    };

    template<typename T>
    class ValueModifier<T, ValueOperator::Add> final : public BaseItem {
    public:
        using value_type = core::Property<T>;
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
                variable.to_string(),
                value.to_string(),
                should_skip_grants ? " skips grant" : ""
            );
        }
    };

    template<typename T>
    class ValueModifier<T, ValueOperator::Sub> final : public BaseItem {
    public:
        using value_type = core::Property<T>;
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
                variable.to_string(),
                value.to_string(),
                should_skip_grants ? " skips grant" : ""
            );
        }
    };
} // namespace randomizer::seed::items
