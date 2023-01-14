namespace core::dynamic_value {
    template <bool CanSet, bool CanGet>
    [[nodiscard]] bool DynamicValueContainer<bool, CanSet, CanGet, true>::get() const
        requires(CanGet)
    {
        switch (value.index()) {
            case 0:
                return *std::get<std::shared_ptr<bool>>(value);
            case 1:
                return std::get<api::uber_states::UberState>(value).get<bool>();
            case 2:
                return std::get<api::uber_states::UberStateCondition>(value).resolve();
            case 3:
                return value_helper::get(std::get<accessor>(value))();
            case 4:
                return *std::get<bool*>(value);
            default:
                return {};
        }
    }

    template <bool CanSet, bool CanGet>
    void DynamicValueContainer<bool, CanSet, CanGet, true>::set(bool v)
        requires(CanSet)
    {
        switch (value.index()) {
            case 0:
                *std::get<std::shared_ptr<bool>>(value) = v;
                break;
            case 1:
                std::get<api::uber_states::UberState>(value).template set<bool>(v);
                break;
            case 2:
                // Can't set value on UberStateCondition.
                break;
            case 3:
                value_helper::set(std::get<accessor>(value))(v);
                break;
            case 4:
                *std::get<bool*>(value) = v;
                break;
            default:
                value = std::make_shared<bool>(v);
                break;
        }
    }
} // namespace core::dynamic_value
