#pragma once


namespace common {
    template <typename T>
    class ThreadSafeContainer {
    public:
        ThreadSafeContainer() {}
        explicit ThreadSafeContainer(T initial_value) : m_value(initial_value) {};

        template <typename R>
        R apply(std::function<R(T& value)> action) {
            std::lock_guard _(m_mutex);
            return action(m_value);
        }
    private:
        std::mutex m_mutex;
        T m_value;
    };
}
