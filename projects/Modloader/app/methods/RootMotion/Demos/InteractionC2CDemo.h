#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteractionC2CDemo.h>

namespace app::classes::RootMotion::Demos::InteractionC2CDemo {
    IL2CPP_REGISTER_METHOD(0x02220FD0, void, OnGUI, app::InteractionC2CDemo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022210C0, void, LateUpdate, app::InteractionC2CDemo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::InteractionC2CDemo* this_ptr)
} // namespace app::classes::RootMotion::Demos::InteractionC2CDemo
