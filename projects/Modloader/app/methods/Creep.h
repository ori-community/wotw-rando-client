#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Creep.h>

namespace app::classes::Creep {
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, (app::Creep * this_ptr))
}
