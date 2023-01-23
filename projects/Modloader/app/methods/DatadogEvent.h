#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/DatadogEvent.h>

namespace app::classes::DatadogEvent {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_Url, (app::DatadogEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9DBA0, int32_t, get_UniqueHash, (app::DatadogEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C4CBF0, app::String*, ToJson, (app::DatadogEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DatadogEvent * this_ptr))
} // namespace app::classes::DatadogEvent
