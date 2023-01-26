#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObjectVirtualAnimator_Context__Boxed.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::GameObjectVirtualAnimator_Context {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::GameObjectVirtualAnimator_Context__Boxed * this_ptr, app::GameObject* game_object))
}
