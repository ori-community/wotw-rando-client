#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Demo1.h>

namespace app::classes::BeautifyEffect::Demo1 {
    IL2CPP_REGISTER_METHOD(0x0317AFE0, void, OnGUI, (app::Demo1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317B440, void, Update, (app::Demo1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Demo1 * this_ptr))
} // namespace app::classes::BeautifyEffect::Demo1
