namespace core::dynamic_value {
    template <typename T, bool CanSet, bool CanGet>
    [[nodiscard]] T DynamicValueContainer<T, CanSet, CanGet, false>::get() const
        requires(CanGet)
    {
        switch (value.index()) {
            case 0:
                return *std::get<0>(value);
            case 1:
                return value_helper::get(std::get<1>(value))();
            case 2:
                return *std::get<2>(value);
            default:
                return {};
        }
    }

    template <typename T, bool CanSet, bool CanGet>
    void DynamicValueContainer<T, CanSet, CanGet, false>::set(T v)
        requires(CanSet)
    {
        switch (value.index()) {
            case 0:
                *std::get<0>(value) = v;
                break;
            case 1: {
                value_helper::set(std::get<1>(value))(v);
                break;
            }
            case 2:
                *std::get<2>(value) = v;
                break;
            default:
                value = std::make_shared<T>(v);
                break;
        }
    }
} // namespace core::dynamic_value
