#pragma once

#include <variant>
#include <memory>

#include <Common/vx.h>

#include <Core/text/text_database.h>
#include <Core/text/text_processor.h>
#include <Core/api/system/message_provider.h>

#include <Core/property/reactivity.h>

template<>
struct core::Property<std::string> : core::BaseProperty {
    using value_type = std::variant<
        std::shared_ptr<std::string>,
        SetGet<std::string>,
        core::TextID
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

    explicit Property(const SetGet<std::string>::setter_fn_t set, const SetGet<std::string>::getter_fn_t get) {
        m_value = SetGet(set, get);
    }

    Property(Property const& other) {
        operator=(other);
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

        m_value | vx::match {
            [&](const std::shared_ptr<std::string>& string_ptr) {
                out = *string_ptr;
            },
            [&](const core::SetGet<std::string>& set_get) {
                out = set_get.get();
            },
            [&](const core::TextID& text_id) {
                out = std::string(core::text::get_text(text_id));
            },
        };

        notify_used();
        return out;
    }

    [[nodiscard]] app::MessageProvider* get_provider() const {
        return api::system::create_message_provider(get());
    }

    template<typename... Types>
    void set_format(std::format_string<Types...> fmt, Types&&... args) const;

    template<typename... Types>
    void process_and_set_format(std::format_string<Types...> fmt, Types&&... args) const;

    // We do not want to make this const as we want to prevent setting the underlying value if we are const.
    // ReSharper disable once CppMemberFunctionMayBeConst
    void set(std::string const& value) const {
        m_value | vx::match {
            [&](const std::shared_ptr<std::string>& string_ptr) {
                *string_ptr = value;
            },
            [&](const core::SetGet<std::string>& set_get) {
                set_get.set(value);
            },
            [&](const core::TextID& text_id) {
                text::clear_text(text_id);
                text::register_text(text_id, value);
            },
        };

        notify_changed();
    }

    const std::shared_ptr<text::ITextProcessor>& processor() const {
        return m_text_processor;
    }

    void process_and_set(std::string value) const {
        if (m_text_processor != nullptr) {
            m_text_processor->process(value);
        }

        set(value);
    }

    void set(const std::string_view value) const {
        set(std::string(value));
    }

    void process_and_set(const std::string_view value) const {
        process_and_set(std::string(value));
    }

    void set(const char* value) const {
        set(std::string(value));
    }

    void process_and_set(const char* value) const {
        process_and_set(std::string(value));
    }

    void add(std::string const& value) const {
        set(get() + value);
    }

    void add(const std::string_view value) const {
        set(get() + std::string(value));
    }

    void process_and_add(std::string value) const {
        if (m_text_processor != nullptr) {
            m_text_processor->process(value);
        }

        process_and_set(get() + value);
    }

    void process_and_add(const std::string_view value) const {
        process_and_add(std::string(value));
    }

    void assign(const value_type& value) {
        m_value = value;
        notify_changed();
    }

    void assign(SetGet<std::string>::setter_fn_t set, SetGet<std::string>::getter_fn_t get) {
        m_value = SetGet(set, get);
        notify_changed();
    }

    std::string to_string() const {
        return std::format("{}", get());
    }

    Property& operator=(const Property& other) {
        if (other.m_id == m_id) {
            return *this;
        }

        m_value = std::make_shared<std::string>(other.get_unprocessed());
        m_text_processor = other.m_text_processor;
        notify_changed();
        return *this;
    }

    void text_processor(std::shared_ptr<text::ITextProcessor> const& text_processor) {
        m_text_processor = text_processor;
    }

    Property make_shallow_copy() const {
        return Property(get());
    }

    template<typename K>
    Property<K> wrap() const {
        return Property<K>(
            [&](auto value) mutable { set(value); },
            [&] { return get(); }
        );
    }

private:
    std::shared_ptr<text::ITextProcessor> m_text_processor;
    value_type m_value = nullptr;
};

template<typename... Types>
void core::Property<std::string>::set_format(const std::format_string<Types...> fmt, Types&&... args) const {
    set(std::vformat(fmt.get(), std::make_format_args(args...)));
}

template<typename... Types>
void core::Property<std::string>::process_and_set_format(const std::format_string<Types...> fmt, Types&&... args) const {
    process_and_set(std::vformat(fmt.get(), std::make_format_args(args...)));
}
