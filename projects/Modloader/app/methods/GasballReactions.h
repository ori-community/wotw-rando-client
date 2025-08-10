#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GasballReactions.h>

namespace app::classes::GasballReactions {
    IL2CPP_REGISTER_METHOD(0x00420B10, void, ctor, app::GasballReactions* this_ptr)
}
