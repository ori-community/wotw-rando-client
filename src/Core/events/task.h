#pragma once

#include <Core/macros.h>

#include <functional>

namespace core::events {
    CORE_DLLEXPORT void schedule_task(float seconds, std::function<void()> task);
    CORE_DLLEXPORT void schedule_task_for_next_update(std::function<void()> task);
} // namespace core::tasks
