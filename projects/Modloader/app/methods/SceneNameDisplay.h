#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneNameDisplay.h>

namespace app::classes::SceneNameDisplay {
    IL2CPP_REGISTER_METHOD(0x00BB1390, void, FixedUpdate, (app::SceneNameDisplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SceneNameDisplay * this_ptr))
} // namespace app::classes::SceneNameDisplay
