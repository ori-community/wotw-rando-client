#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberInteractionManager_PropertyIDCache.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UberInteractionManager_PropertyIDCache {
    IL2CPP_REGISTER_METHOD(0x00FCB340, void, ctor, (app::UberInteractionManager_PropertyIDCache * this_ptr, app::String* interaction_name))
}
