#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReviewTargetChangesSerialization.h>

namespace app::classes::Moon::ReviewFramework::ReviewTargetChangesSerialization {
    IL2CPP_REGISTER_METHOD(0x00EC0F30, void, ctor, app::ReviewTargetChangesSerialization* this_ptr)
}
