#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AmplifyColorVolumeBase.h>

namespace app::classes::AmplifyColorVolumeBase {
    IL2CPP_REGISTER_METHOD(0x030DBA20, void, OnDrawGizmos, (app::AmplifyColorVolumeBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030DBE10, void, OnDrawGizmosSelected, (app::AmplifyColorVolumeBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030DC230, void, ctor, (app::AmplifyColorVolumeBase * this_ptr))
} // namespace app::classes::AmplifyColorVolumeBase
