#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SpringContext__Boxed.h>

namespace app::classes::SpringContext {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, app::SpringContext__Boxed* this_ptr, app::GameObject* game_object)
}
