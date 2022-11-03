#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonProfilerFrame {
    IL2CPP_REGISTER_METHOD(0x0111B0D0, app::MoonProfilerFrame, op_Addition, (app::MoonProfilerFrame a, app::MoonProfilerFrame b))
    IL2CPP_REGISTER_METHOD(0x0111B8E0, app::MoonProfilerFrame, op_Division, (app::MoonProfilerFrame a, int32_t b))
    inline app::MoonProfilerFrame operator+(app::MoonProfilerFrame a, app::MoonProfilerFrame b) {
        return op_Addition(a, b);
    }
    inline app::MoonProfilerFrame operator/(app::MoonProfilerFrame a, int32_t b) {
        return op_Division(a, b);
    }
} // namespace app::classes::Moon::MoonProfilerFrame
