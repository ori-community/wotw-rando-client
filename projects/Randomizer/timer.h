#pragma once

#include <Core/api/uber_states/uber_state.h>

namespace randomizer::timer {
    using timer_callback = void (*)(float extra_delta, void* params);
    int register_timer(timer_callback callback, float duration, bool repeat = false, void* params = nullptr);
    bool deregister_timer(int id);

    void uber_state_timer(core::api::uber_states::UberState value, bool start);
    void clear_uber_state_timers();
} // namespace randomizer::timer
