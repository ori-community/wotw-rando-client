#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Rendering::EarlyZParentDebugger {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (app::EarlyZParentDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0078A100, void, ctor, (app::EarlyZParentDebugger * this_ptr))
}
