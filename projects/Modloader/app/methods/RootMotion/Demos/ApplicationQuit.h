#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ApplicationQuit.h>

namespace app::classes::RootMotion::Demos::ApplicationQuit {
    IL2CPP_REGISTER_METHOD(0x0220B7E0, void, Update, (app::ApplicationQuit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ApplicationQuit * this_ptr))
} // namespace app::classes::RootMotion::Demos::ApplicationQuit
