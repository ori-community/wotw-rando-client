#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteractionDemo.h>

namespace app::classes::RootMotion::Demos::InteractionDemo {
    IL2CPP_REGISTER_METHOD(0x022214C0, void, OnGUI, app::InteractionDemo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::InteractionDemo* this_ptr)
} // namespace app::classes::RootMotion::Demos::InteractionDemo
