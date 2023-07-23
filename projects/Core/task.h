#pragma once

#include <Core/macros.h>

#include <functional>

namespace core::task {
    CORE_DLLEXPORT void schedule(float seconds, std::function<void()> task);
    CORE_DLLEXPORT void schedule_for_next_update(std::function<void()> task);
} // namespace core::tasks