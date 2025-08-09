#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EarlyZDelayedUnhide.h>

namespace app::classes::Moon::Rendering::EarlyZDelayedUnhide {
    IL2CPP_REGISTER_METHOD(0x007897C0, void, Awake, app::EarlyZDelayedUnhide* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007898A0, void, OnEnable, app::EarlyZDelayedUnhide* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00789B10, void, OnDisable, app::EarlyZDelayedUnhide* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::EarlyZDelayedUnhide* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00789C10, void, cctor, )
} // namespace app::classes::Moon::Rendering::EarlyZDelayedUnhide
