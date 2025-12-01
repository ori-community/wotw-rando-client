#pragma once

#include <functional>
#include <memory>
#include <utility>

namespace common {
    /**
     * A Droppable object represents a handle to something.
     * When a Droppable object is destroyed, it executes a callback
     * function that it has been given on creation.
     */
    class Droppable {
    public:
        using ptr_t = std::unique_ptr<Droppable>;
        using destructor_callback_t = std::function<void()>;

		static ptr_t create(const destructor_callback_t& callback);

        explicit Droppable(destructor_callback_t callback);

        Droppable(Droppable&& other) = delete;
        Droppable(Droppable const& other) = delete;

        ~Droppable();
    private:
        destructor_callback_t m_callback;
    };
} // namespace common
