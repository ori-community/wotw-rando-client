#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MistTorchPlaceholder {
    IL2CPP_REGISTER_METHOD(0x013276C0, void, FixedUpdate, (app::MistTorchPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01327AA0, void, OnDisable, (app::MistTorchPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01327BF0, void, OnDrawGizmos, (app::MistTorchPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01327CF0, void, OnDrawGizmosSelected, (app::MistTorchPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MistTorchPlaceholder * this_ptr))
}
