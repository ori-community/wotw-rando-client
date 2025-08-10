#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/fsConfig.h>

namespace app::classes::FullSerializer::fsConfig {
    IL2CPP_REGISTER_METHOD(0x01509150, void, ctor, app::fsConfig* this_ptr)
}
