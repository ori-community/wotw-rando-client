#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MothSwarmPlaceholder.h>

namespace app::classes::MothSwarmPlaceholder {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MothSwarmPlaceholder * this_ptr))
}
