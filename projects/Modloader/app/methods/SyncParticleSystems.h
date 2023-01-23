#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SyncParticleSystems.h>

namespace app::classes::SyncParticleSystems {
    IL2CPP_REGISTER_METHOD(0x00514AA0, void, Start, (app::SyncParticleSystems * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SyncParticleSystems * this_ptr))
} // namespace app::classes::SyncParticleSystems
