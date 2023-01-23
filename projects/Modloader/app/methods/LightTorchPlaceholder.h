#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LightTorchPlaceholder.h>

namespace app::classes::LightTorchPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00FA2890, void, FixedUpdate, (app::LightTorchPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA2AA0, void, OnDrawGizmos, (app::LightTorchPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA2BA0, void, OnDrawGizmosSelected, (app::LightTorchPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LightTorchPlaceholder * this_ptr))
} // namespace app::classes::LightTorchPlaceholder
