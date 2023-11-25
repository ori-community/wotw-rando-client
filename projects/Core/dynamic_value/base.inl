namespace core::dynamic_value {
    template <typename T>
    struct is_uber_state_type { // NOLINT
        static bool const VALUE =
            std::is_integral_v<T> ||
            std::is_floating_point_v<T> ||
            std::is_same_v<T, bool>;
    };

    template<typename T>
    concept is_uber_state = is_uber_state_type<T>::VALUE;

    template<typename T>
    concept is_not_uber_state = !is_uber_state_type<T>::VALUE;

    template <typename T>
    struct DynamicValueType<T, true, true> {
        using value = set_get<T>;
        static constexpr bool CAN_SET = true;
        static constexpr bool CAN_GET = true;

        static inline set<T> set(value v) { return std::get<0>(v); };
        static inline get<T> get(value v) { return std::get<1>(v); }
    };

    template <typename T>
    struct DynamicValueType<T, true, false> {
        using value = set<T>;
        static constexpr bool CAN_SET = true;
        static constexpr bool CAN_GET = false;

        static inline set<T> set(value v) { return v; };
    };

    template <typename T>
    struct DynamicValueType<T, false, true> {
        using value = get<T>;
        static constexpr bool CAN_SET = false;
        static constexpr bool CAN_GET = true;

        static inline get<T> get(value v) { return v; };
    };

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    DynamicValue<T, CanSet, CanGet, EnableUberState>::DynamicValue() {
        m_container.value = value_type(std::make_shared<T>());
    };

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    DynamicValue<T, CanSet, CanGet, EnableUberState>::DynamicValue(T const& value) {
        m_container.value = value_type(std::make_shared<T>(value));
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    DynamicValue<T, CanSet, CanGet, EnableUberState>::DynamicValue(value_type value) {
        m_container.value = value;
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    [[nodiscard]] T DynamicValue<T, CanSet, CanGet, EnableUberState>::get() const {
        return m_container.get();
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    template <typename K>
    void DynamicValue<T, CanSet, CanGet, EnableUberState>::set(K value) {
        static_assert(std::is_same_v<T, K> || std::is_convertible_v<T, K> || std::is_constructible_v<T, K>, "Set not defined for this type.");
        m_container.set(static_cast<T>(value));
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    template <typename K>
    void DynamicValue<T, CanSet, CanGet, EnableUberState>::add(K value) {
        set(get() + value);
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    void DynamicValue<T, CanSet, CanGet, EnableUberState>::assign(value_type value) {
        if (!m_locked) {
            m_container.value = value;
        }
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    void DynamicValue<T, CanSet, CanGet, EnableUberState>::assign(T value) {
        if (!m_locked) {
            m_container.value = std::make_shared<T>(value);
        }
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    [[nodiscard]] typename DynamicValue<T, CanSet, CanGet, EnableUberState>::value_type DynamicValue<T, CanSet, CanGet, EnableUberState>::assignment() const {
        return m_container.value;
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    void DynamicValue<T, CanSet, CanGet, EnableUberState>::lock_assignment() {
        m_locked = true;
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    template <typename K, bool KCanSet>
    DynamicValue<T, CanSet, CanGet>& DynamicValue<T, CanSet, CanGet, EnableUberState>::operator+=(DynamicValue<K, KCanSet, true> value) // NOLINT
    {
        add(value.get());
        return *this;
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    template <typename K>
    DynamicValue<T, CanSet, CanGet>& DynamicValue<T, CanSet, CanGet, EnableUberState>::operator+=(K value) // NOLINT
    {
        add(value);
        return *this;
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState> // NOLINT
    template <typename K>
    DynamicValue<T, CanSet, CanGet>& DynamicValue<T, CanSet, CanGet, EnableUberState>::operator=(K value) {
        set(value);
        return *this;
    }
} // namespace core::dynamic_value
