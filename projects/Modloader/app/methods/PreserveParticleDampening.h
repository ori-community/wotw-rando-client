#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PreserveParticleDampening.h>

namespace app::classes::PreserveParticleDampening {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PreserveParticleDampening * this_ptr))
}
