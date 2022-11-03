#pragma once

namespace timer {
    using timer_callback = void (*)(float extra_delta, void* params);
    int register_timer(timer_callback callback, float duration, bool repeat = false, void* params = nullptr);
    bool deregister_timer(int id);
} // namespace timer
