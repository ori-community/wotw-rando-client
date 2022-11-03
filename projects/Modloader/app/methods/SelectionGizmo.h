#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SelectionGizmo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (app::SelectionGizmo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SelectionGizmo * this_ptr))
} // namespace app::classes::SelectionGizmo
