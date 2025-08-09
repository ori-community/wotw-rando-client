#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Recorder.h>

namespace app::classes::Moon::ProfilerExtensions {
    IL2CPP_REGISTER_METHOD(0x00C3EE70, double, elapsedMilliseconds, app::Recorder* recorder)
    IL2CPP_REGISTER_METHOD(0x00C3EEF0, double, elapsedMicroseconds, app::Recorder* recorder)
} // namespace app::classes::Moon::ProfilerExtensions
