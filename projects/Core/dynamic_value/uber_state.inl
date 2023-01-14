namespace core::dynamic_value {
    template <typename T, bool CanSet, bool CanGet>
    [[nodiscard]] T DynamicValueContainer<T, CanSet, CanGet, true>::get() const
        requires(CanGet)
    {
        switch (value.index()) {
            case 0:
                return *std::get<0>(value);
            case 1:
                return std::get<1>(value).template get<T>();
            case 2:
                return value_helper::get(std::get<2>(value))();
            case 3:
                return *std::get<3>(value);
            default:
                return {};
        }
    }

    template <typename T, bool CanSet, bool CanGet>
    void DynamicValueContainer<T, CanSet, CanGet, true>::set(T v)
        requires(CanSet)
    {
        switch (value.index()) {
            case 0:
                *std::get<0>(value) = v;
                break;
            case 1:
                std::get<1>(value).template set<T>(v);
                break;
            case 2: {
                value_helper::set(std::get<2>(value))(v);
                break;
            }
            case 3:
                *std::get<3>(value) = v;
                break;
            default:
                value = std::make_shared<T>(v);
                break;
        }
    }
} // namespace core::dynamic_value
