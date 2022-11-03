#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AssemblyReloadedEvent {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_TimeTaken, (app::AssemblyReloadedEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_TimeTaken, (app::AssemblyReloadedEvent * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02E8E300, app::DatadogEvent*, GetCompatibleEvent, (app::AssemblyReloadedEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AssemblyReloadedEvent * this_ptr))
} // namespace app::classes::AssemblyReloadedEvent
