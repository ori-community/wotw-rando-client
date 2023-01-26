#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LandOnAndSpawnOrbMarker.h>

namespace app::classes::LandOnAndSpawnOrbMarker {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LandOnAndSpawnOrbMarker * this_ptr))
}
