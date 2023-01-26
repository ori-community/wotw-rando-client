#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MothSwarm.h>

namespace app::classes::MothSwarm {
    IL2CPP_REGISTER_METHOD(0x00866A10, void, ctor, (app::MothSwarm * this_ptr))
}
