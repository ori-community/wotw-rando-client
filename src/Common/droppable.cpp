#include <Common/droppable.h>

namespace common {
    Droppable::ptr_t Droppable::create(const destructor_callback_t& callback) { return std::make_unique<Droppable>(callback); }

    Droppable::Droppable(destructor_callback_t callback) :
        m_callback(std::move(callback)) {}

    Droppable::~Droppable() { m_callback(); }
} // namespace common
