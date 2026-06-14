#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameParameters.h>

namespace app::classes::GameParameters {
    IL2CPP_REGISTER_METHOD(0x003F8DD0, void, ctor, app::GameParameters* this_ptr)
}
