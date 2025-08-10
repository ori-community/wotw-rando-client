#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KillCounterDisplay.h>

namespace app::classes::KillCounterDisplay {
    IL2CPP_REGISTER_METHOD(0x00E74260, void, Update, app::KillCounterDisplay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006771B0, void, ctor, app::KillCounterDisplay* this_ptr)
} // namespace app::classes::KillCounterDisplay
