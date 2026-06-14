#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AmplifyColorTriggerProxy.h>

namespace app::classes::AmplifyColorTriggerProxy {
    IL2CPP_REGISTER_METHOD(0x030DACF0, void, Start, app::AmplifyColorTriggerProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030DAF00, void, LateUpdate, app::AmplifyColorTriggerProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::AmplifyColorTriggerProxy* this_ptr)
} // namespace app::classes::AmplifyColorTriggerProxy
