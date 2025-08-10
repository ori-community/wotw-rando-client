#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FishEnemySounds.h>

namespace app::classes::FishEnemySounds {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::FishEnemySounds* this_ptr)
}
