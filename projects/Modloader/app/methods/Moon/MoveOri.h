#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoveOri.h>

namespace app::classes::Moon::MoveOri {
    IL2CPP_REGISTER_METHOD(0x031B0A60, void, OnGUI, app::MoveOri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006086C0, void, ctor, app::MoveOri* this_ptr)
} // namespace app::classes::Moon::MoveOri
