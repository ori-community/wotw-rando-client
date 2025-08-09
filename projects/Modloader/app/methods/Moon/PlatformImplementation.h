#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlatformImplementation.h>

namespace app::classes::Moon::PlatformImplementation {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, app::PlatformImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdate, app::PlatformImplementation* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PlatformImplementation* this_ptr)
} // namespace app::classes::Moon::PlatformImplementation
