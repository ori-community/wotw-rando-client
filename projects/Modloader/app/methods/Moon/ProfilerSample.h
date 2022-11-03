#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ProfilerSample {
    IL2CPP_REGISTER_METHOD(0x00002890, void, ctor, (app::ProfilerSample__Boxed * this_ptr, app::String* sample_name))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::ProfilerSample__Boxed * this_ptr))
} // namespace app::classes::Moon::ProfilerSample
