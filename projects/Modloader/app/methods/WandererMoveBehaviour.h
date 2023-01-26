#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WandererMoveBehaviour.h>

namespace app::classes::WandererMoveBehaviour {
    IL2CPP_REGISTER_METHOD(0x00842340, void, ctor, (app::WandererMoveBehaviour * this_ptr))
}
