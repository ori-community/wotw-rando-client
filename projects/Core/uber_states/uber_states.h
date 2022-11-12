#pragma once

#include <Core/macros.h>

namespace uber_states {
    CORE_DLLEXPORT app::Byte__Array* create_snapshot(bool notify_presave_observers = true);
    CORE_DLLEXPORT void load_snapshot(app::Byte__Array* data);
}