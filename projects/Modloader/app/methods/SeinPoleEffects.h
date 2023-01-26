#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinPoleEffects.h>

namespace app::classes::SeinPoleEffects {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinPoleEffects * this_ptr))
}
