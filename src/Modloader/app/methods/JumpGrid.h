#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JumpGrid.h>

namespace app::classes::JumpGrid {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::JumpGrid* this_ptr)
}
