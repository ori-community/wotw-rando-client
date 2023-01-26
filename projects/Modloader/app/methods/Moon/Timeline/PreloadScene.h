#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PreloadScene.h>

namespace app::classes::Moon::Timeline::PreloadScene {
    IL2CPP_REGISTER_METHOD(0x0077CA30, void, OnEnable, (app::PreloadScene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PreloadScene * this_ptr))
} // namespace app::classes::Moon::Timeline::PreloadScene
