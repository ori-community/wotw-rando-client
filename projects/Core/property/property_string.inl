#pragma once

#include <variant>
#include <memory>

#include <Core/text/text_database.h>
#include <Core/text/text_processor.h>
#include <Core/api/system/message_provider.h>

template<>
struct core::Property<std::string> {
    using value_type = std::variant<
        std::shared_ptr<std::string>,
        set_get<std::string>,
        text_id
    >;

    Property() {
        m_value = std::make_shared<std::string>();
    }

    explicit Property(const std::string& value) {
        m_value = std::make_shared<std::string>(value);
    }

    explicit Property(const value_type& value) {
        m_value = value;
    }

    explicit Property(setter<std::string> set, getter<std::string> get) {
        m_value = std::make_tuple(set, get);
    }

    Property(Property const& other) {
        m_value = other.m_value;
    }

    template<typename... Types>
    static Property format(const std::format_string<Types...> fmt, Types&&... args) {
        return Property(std::vformat(fmt.get(), std::make_format_args(args...)));
    }

    [[nodiscard]] std::string get() const {
        std::string out = get_unprocessed();
        if (m_text_processor != nullptr) {
            m_text_processor->process(out);
        }

        return out;
    }

    [[nodiscard]] std::string get_unprocessed() const {
        std::string out;
        switch (m_value.index()) {
            case 0: {
                out = *std::get<0>(m_value);
                break;
            }
            case 1: {
                out = std::get<1>(std::get<1>(m_value))();
                break;
            }
            case 2: {
                out = std::string(core::text::get_text(std::get<2>(m_value)));
                break;
            }
            default:
                throw std::exception("Unhandled variant in Property");
        }

        return out;
    }

    [[nodiscard]] app::MessageProvider* get_provider() const {
        return api::system::create_message_provider(get());
    }

    template<typename... Types>
    void set_format(const std::format_string<Types...> fmt, Types&&... args);

    template<typename... Types>
    void process_and_set_format(const std::format_string<Types...> fmt, Types&&... args);

    // We do not want to make this const as we want to prevent setting the underlying value if we are const.
    // ReSharper disable once CppMemberFunctionMayBeConst
    void set(std::string const& value) {
        switch (m_value.index()) {
            case 0: {
                *std::get<0>(m_value) = value;
                break;
            }
            case 1: {
                std::get<0>(std::get<1>(m_value))(value);
                break;
            }
            case 2: {
                const auto id = std::get<2>(m_value);
                text::clear_text(id);
                text::register_text(id, value);
                break;
            }
            default:
                throw std::exception("Unhandled variant in Property");
        }
    }

    void process_and_set(std::string value) {
        if (m_text_processor != nullptr) {
            m_text_processor->process(value);
        }

        set(value);
    }

    void set(const std::string_view value) {
        set(std::string(value));
    }

    void process_and_set(const std::string_view value) {
        process_and_set(std::string(value));
    }

    void set(const char* value) {
        set(std::string(value));
    }

    void process_and_set(const char* value) {
        process_and_set(std::string(value));
    }

    void add(std::string const& value) {
        set(get() + value);
    }

    void add(const std::string_view value) {
        set(get() + std::string(value));
    }

    void process_and_add(std::string value) {
        if (m_text_processor != nullptr) {
            m_text_processor->process(value);
        }

        process_and_set(get() + value);
    }

    void process_and_add(const std::string_view value) {
        process_and_add(std::string(value));
    }

    void assign(const value_type& value) {
        m_value = value;
    }

    void assign(setter<std::string> set, getter<std::string> get) {
        m_value = std::make_tuple(set, get);
    }

    std::string to_string() const {
        return std::format("{}", get());
    }

    Property& operator=(const Property& other) {
        m_value = other.m_value;
        return *this;
    }

    void text_processor(std::shared_ptr<text::ITextProcessor> const& text_processor) {
        m_text_processor = text_processor;
    }

    Property make_shallow_copy() const {
        return Property(get());
    }

    template<typename K>
    Property<K> wrap() {
        auto copy = *this;
        return Property<K>(
            [copy](auto value) mutable { copy.set(value); },
            [copy]() { return copy.get(); }
        );
    }

private:
    std::shared_ptr<text::ITextProcessor> m_text_processor;
    value_type m_value = nullptr;
};

template<typename... Types>
void core::Property<std::string>::set_format(const std::format_string<Types...> fmt, Types&&... args) {
    set(std::vformat(fmt.get(), std::make_format_args(args...)));
}

template<typename... Types>
void core::Property<std::string>::process_and_set_format(const std::format_string<Types...> fmt, Types&&... args) {
    process_and_set(std::vformat(fmt.get(), std::make_format_args(args...)));
}
