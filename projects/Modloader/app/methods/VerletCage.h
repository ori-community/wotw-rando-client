#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VerletCage.h>

namespace app::classes::VerletCage {
    IL2CPP_REGISTER_METHOD(0x013C2D80, void, ctor, (app::VerletCage * this_ptr))
}
