#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CatAndMouseRoomShadow.h>

namespace app::classes::CatAndMouseRoomShadow {
    IL2CPP_REGISTER_METHOD(0x0102CBC0, void, Awake, (app::CatAndMouseRoomShadow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102CE50, void, FixedUpdate, (app::CatAndMouseRoomShadow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CatAndMouseRoomShadow * this_ptr))
} // namespace app::classes::CatAndMouseRoomShadow
