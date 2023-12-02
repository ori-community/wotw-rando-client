#pragma once

#include <functional>
#include <memory>

namespace common {
    class RegistrationHandle {
    public:
        using destructor_callback = std::function<void()>;

        RegistrationHandle(destructor_callback callback)
                : m_callback(callback) {}

        RegistrationHandle(RegistrationHandle&& other) = delete;
        RegistrationHandle(RegistrationHandle const& other) = delete;

        ~RegistrationHandle() {
            m_callback();
        }

    private:
        destructor_callback m_callback;
    };

    using registration_handle_t = std::unique_ptr<RegistrationHandle>;
} // namespace common
