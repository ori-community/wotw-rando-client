#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EarlyZParentDebugger.h>

namespace app::classes::Moon::Rendering::EarlyZParentDebugger {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, app::EarlyZParentDebugger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0078A100, void, ctor, app::EarlyZParentDebugger* this_ptr)
} // namespace app::classes::Moon::Rendering::EarlyZParentDebugger
