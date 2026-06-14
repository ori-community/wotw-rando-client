#pragma once

#include <Common/event_bus.h>
#include <Core/macros.h>

namespace core::events {
    CORE_DLLEXPORT common::EventBus<float>& async_update_bus();
}