#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FPSCounter.h>

namespace app::classes::FPSCounter {
    IL2CPP_REGISTER_METHOD(0x00988580, void, Start, app::FPSCounter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009886D0, void, FixedUpdate, app::FPSCounter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009886E0, void, Update, app::FPSCounter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00988C10, void, ctor, app::FPSCounter* this_ptr)
} // namespace app::classes::FPSCounter
