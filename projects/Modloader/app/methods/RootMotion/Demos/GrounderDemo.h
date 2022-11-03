#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::Demos::GrounderDemo {
    IL2CPP_REGISTER_METHOD(0x0221F540, void, OnGUI, (app::GrounderDemo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221F680, void, Activate, (app::GrounderDemo * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GrounderDemo * this_ptr))
} // namespace app::classes::RootMotion::Demos::GrounderDemo
