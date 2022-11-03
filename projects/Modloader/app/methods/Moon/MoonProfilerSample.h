#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonProfilerSample {
    IL2CPP_REGISTER_METHOD(0x0111BF20, app::MoonProfilerSample, op_Implicit, (app::Recorder * recorder))
    IL2CPP_REGISTER_METHOD(0x00EB0C50, app::MoonProfilerSample, op_Addition, (app::MoonProfilerSample a, app::MoonProfilerSample b))
    IL2CPP_REGISTER_METHOD(0x00EB0C90, app::MoonProfilerSample, op_Division, (app::MoonProfilerSample a, int32_t b))
    inline app::MoonProfilerSample operator+(app::MoonProfilerSample a, app::MoonProfilerSample b) {
        return op_Addition(a, b);
    }
    inline app::MoonProfilerSample operator/(app::MoonProfilerSample a, int32_t b) {
        return op_Division(a, b);
    }
} // namespace app::classes::Moon::MoonProfilerSample
