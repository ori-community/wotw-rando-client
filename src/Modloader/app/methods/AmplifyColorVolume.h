#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AmplifyColorVolume.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::AmplifyColorVolume {
    IL2CPP_REGISTER_METHOD(0x030DB390, void, OnTriggerEnter, app::AmplifyColorVolume* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x030DB530, void, OnTriggerExit, app::AmplifyColorVolume* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x030DB6D0, void, ctor, app::AmplifyColorVolume* this_ptr)
} // namespace app::classes::AmplifyColorVolume
