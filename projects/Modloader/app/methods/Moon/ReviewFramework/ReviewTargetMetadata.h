#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReviewTargetMetadata.h>

namespace app::classes::Moon::ReviewFramework::ReviewTargetMetadata {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ReviewTargetMetadata* this_ptr)
}
