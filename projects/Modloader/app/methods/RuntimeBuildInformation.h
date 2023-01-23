#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/RuntimeBuildInformation.h>

namespace app::classes::RuntimeBuildInformation {
    IL2CPP_REGISTER_METHOD(0x01373490, app::String*, ToString, (app::RuntimeBuildInformation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013746F0, void, ctor, (app::RuntimeBuildInformation * this_ptr))
} // namespace app::classes::RuntimeBuildInformation
