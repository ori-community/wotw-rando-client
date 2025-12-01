#pragma once

#include <Common/droppable.h>
#include <Core/macros.h>

namespace core::input {
    CORE_DLLEXPORT common::Droppable::ptr_t scoped_input_lock();
} // namespace core::input
