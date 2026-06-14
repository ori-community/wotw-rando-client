#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LightSource.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::LightSource {
    IL2CPP_REGISTER_METHOD(0x0114F2A0, bool, get_AnyExist, )
    IL2CPP_REGISTER_METHOD(0x0114F350, void, OnEnable, app::LightSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0114F410, void, OnDisable, app::LightSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0114F4D0, bool, TestPosition, app::Vector2 position, float padding)
    IL2CPP_REGISTER_METHOD(0x0072D940, void, ctor, app::LightSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0114F6C0, void, cctor, )
} // namespace app::classes::LightSource
