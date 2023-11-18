#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SnapTrapHookPlaceholder.h>

namespace app::classes::SnapTrapHookPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00ED34B0, void, Initialize, (app::SnapTrapHookPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C6E9E0, void, ctor, (app::SnapTrapHookPlaceholder * this_ptr))
} // namespace app::classes::SnapTrapHookPlaceholder
