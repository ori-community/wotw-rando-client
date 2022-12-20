#pragma once

#include <Core/macros.h>
#include <Core/utils/event_bus.h>

namespace core::async_update {
    CORE_DLLEXPORT EventBus<float>& event_bus();
}