#pragma once

#include <Common/registration_handle.h>
#include <Core/macros.h>

namespace core::input {
    CORE_DLLEXPORT common::registration_handle_t scoped_input_lock();
} // namespace core::input
