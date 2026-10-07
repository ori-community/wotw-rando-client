#pragma once

#include <Common/event_bus.h>
#include <Core/macros.h>

namespace core::events {
    struct AsyncUpdate {
        float delta_time;
    };

    using bus_t = common::EventBus<AsyncUpdate>;

    CORE_DLLEXPORT bus_t& async_update_bus();
}
