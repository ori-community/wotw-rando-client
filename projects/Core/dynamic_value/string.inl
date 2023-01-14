namespace core::dynamic_value {
    template <bool CanSet, bool CanGet>
    [[nodiscard]] std::string DynamicValueContainer<std::string, CanSet, CanGet, false>::get() const
        requires(CanGet)
    {
        std::string out;
        switch (value.index()) {
            case 0:
                out = *std::get<std::shared_ptr<std::string>>(value);
                break;
            case 1:
                out = value_helper::get(std::get<accessor>(value))();
                break;
            case 2:
                out = *std::get<std::string*>(value);
            case 3:
                out = core::text::get_concatenated_text(std::get<core::text_id>(value), "\n");
                break;
            default:
                break;
        }

        if (text_processor != nullptr) {
            text_processor->process(out);
        }

        return out;
    }

    template <bool CanSet, bool CanGet>
    void DynamicValueContainer<std::string, CanSet, CanGet, false>::set(std::string v)
        requires(CanSet)
    {
        switch (value.index()) {
            case 0:
                *std::get<std::shared_ptr<std::string>>(value) = v;
                break;
            case 1:
                value_helper::set(std::get<accessor>(value))(v);
                break;
            case 2:
                *std::get<std::string*>(value) = v;
                break;
            case 3: {
                const auto id = std::get<core::text_id>(value);
                core::text::clear_text(id);
                core::text::register_text(id, v);
                break;
            }
            default:
                value = std::make_shared<std::string>(v);
                break;
        }
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    app::MessageProvider* DynamicValue<T, CanSet, CanGet, EnableUberState>::get_provider() const
        requires(std::is_same_v<T, std::string>)
    {
        return core::api::system::create_message_provider(get());
    }

    template <typename T, bool CanSet, bool CanGet, bool EnableUberState>
    void DynamicValue<T, CanSet, CanGet, EnableUberState>::text_processor(std::shared_ptr<text::ITextProcessor> const& text_processor)
        requires(std::is_same_v<T, std::string>)
    {
        m_container.text_processor = text_processor;
    }
} // namespace core::dynamic_value
