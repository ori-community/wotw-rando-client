#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneEntityPlaycountResetter.h>

namespace app::classes::Moon::Timeline::Systems::SceneEntityPlaycountResetter {
    IL2CPP_REGISTER_METHOD(0x00D09420, void, OnLateUpdate, app::SceneEntityPlaycountResetter* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SceneEntityPlaycountResetter* this_ptr)
} // namespace app::classes::Moon::Timeline::Systems::SceneEntityPlaycountResetter
