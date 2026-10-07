#pragma once

#include <Core/enums/async_loading_state.h>
#include <Common/event_bus.h>
#include <Core/macros.h>

namespace core::api::game::in_game_timer {
    enum class TimeStepType {
        InGameTime,
        AsyncLoadingTime,
    };

    namespace events {
        struct TimeStep {
            TimeStepType type;
            float duration;
        };

        using bus_t = common::EventBus<TimeStep>;
    }

    CORE_DLLEXPORT events::bus_t& time_step_event_bus();
    CORE_DLLEXPORT AsyncLoadingState get_last_async_loading_state();
}
