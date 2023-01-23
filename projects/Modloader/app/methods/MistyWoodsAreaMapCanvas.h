#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MistyWoodsAreaMapCanvas.h>

namespace app::classes::MistyWoodsAreaMapCanvas {
    IL2CPP_REGISTER_METHOD(0x01327DF0, void, OnEnable, (app::MistyWoodsAreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MistyWoodsAreaMapCanvas * this_ptr))
} // namespace app::classes::MistyWoodsAreaMapCanvas
