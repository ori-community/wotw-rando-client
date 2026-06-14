#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AmplifyColorTriggerProxy2D.h>

namespace app::classes::AmplifyColorTriggerProxy2D {
    IL2CPP_REGISTER_METHOD(0x030DB180, void, Start, app::AmplifyColorTriggerProxy2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030DAF00, void, LateUpdate, app::AmplifyColorTriggerProxy2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::AmplifyColorTriggerProxy2D* this_ptr)
} // namespace app::classes::AmplifyColorTriggerProxy2D
