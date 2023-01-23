#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MistTorchPlaceholder.h>

namespace app::classes::MistTorchPlaceholder {
    IL2CPP_REGISTER_METHOD(0x013276C0, void, FixedUpdate, (app::MistTorchPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01327AA0, void, OnDisable, (app::MistTorchPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01327BF0, void, OnDrawGizmos, (app::MistTorchPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01327CF0, void, OnDrawGizmosSelected, (app::MistTorchPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MistTorchPlaceholder * this_ptr))
} // namespace app::classes::MistTorchPlaceholder
