#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LizardSpawnSetup.h>

namespace app::classes::LizardSpawnSetup {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LizardSpawnSetup * this_ptr))
}
