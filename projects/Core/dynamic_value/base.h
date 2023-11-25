#pragma once

#include <Core/api/system/message_provider.h>
#include <Core/text/text_processor.h>

#include <functional>
#include <string>
#include <type_traits>
#include <variant>

namespace core::dynamic_value {
    template <typename T>
    struct is_uber_state_type;

    template <typename T>
    using set = std::function<void(T value)>;

    template <typename T>
    using get = std::function<T()>;

    template <typename T>
    using set_get = std::tuple<set<T>, get<T>>;

    template <typename T, bool CanSet, bool CanGet>
    struct DynamicValueType;

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    struct DynamicValueContainer;

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState = is_uber_state_type<T>::VALUE>
    struct DynamicValue {
    public:
        using value_type = typename DynamicValueContainer<T, CanSet, CanGet, EnableUberState>::value_type;

        DynamicValue();
        DynamicValue(T const& value);
        DynamicValue(value_type value); // NOLINT

        [[nodiscard]] T get() const;

        // Template implemented for types that want to have extra sets.
        template <typename K = T>
        void set(K value);

        template <typename K = T>
        void add(K value);

        void assign(value_type value);
        void assign(T value);
        [[nodiscard]] value_type assignment() const;
        void lock_assignment();

        template <typename K, bool KCanSet>
        DynamicValue<T, CanSet, CanGet>& operator+=(DynamicValue<K, KCanSet, true> value); // NOLINT

        template <typename K>
        DynamicValue<T, CanSet, CanGet>& operator+=(K value); // NOLINT

        template <typename K>
        DynamicValue<T, CanSet, CanGet>& operator=(K value); // NOLINT

        app::MessageProvider* get_provider() const
            requires(std::is_same_v<T, std::string>);

        void text_processor(std::shared_ptr<text::ITextProcessor> const& text_processor)
            requires(std::is_same_v<T, std::string>);

        DynamicValueContainer<T, CanSet, CanGet, EnableUberState> const& container() const { return m_container; }
    private:
        DynamicValueContainer<T, CanSet, CanGet, EnableUberState> m_container;
        bool m_locked = false;
    };
} // namespace core::dynamic_value

#include <Core/dynamic_value/base.inl>
