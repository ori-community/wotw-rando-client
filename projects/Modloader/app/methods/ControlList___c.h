#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ControlList_c.h>
#include <Modloader/app/structs/CleverMenuItem.h>

namespace app::classes::ControlList___c {
    IL2CPP_REGISTER_METHOD(0x011EDFC0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ControlList_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EE100, bool, _Populate_b__14_0, (app::ControlList_c * this_ptr, app::CleverMenuItem* x))
} // namespace app::classes::ControlList___c
