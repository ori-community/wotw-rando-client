#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PauseScreenSaveSlot.h>

namespace app::classes::PauseScreenSaveSlot {
    IL2CPP_REGISTER_METHOD(0x0044BFB0, void, OnEnable, app::PauseScreenSaveSlot* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PauseScreenSaveSlot* this_ptr)
} // namespace app::classes::PauseScreenSaveSlot
