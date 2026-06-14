#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserControlInteractions.h>

namespace app::classes::RootMotion::Demos::UserControlInteractions {
    IL2CPP_REGISTER_METHOD(0x0204A740, void, Update, app::UserControlInteractions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0204AA00, void, OnGUI, app::UserControlInteractions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0204ABB0, void, ctor, app::UserControlInteractions* this_ptr)
} // namespace app::classes::RootMotion::Demos::UserControlInteractions
