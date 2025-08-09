#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OverlapPlatformActivator.h>

namespace app::classes::OverlapPlatformActivator {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::OverlapPlatformActivator* this_ptr)
}
