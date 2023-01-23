#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EarlyZChildDebugger.h>

namespace app::classes::Moon::Rendering::EarlyZChildDebugger {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EarlyZChildDebugger * this_ptr))
}
